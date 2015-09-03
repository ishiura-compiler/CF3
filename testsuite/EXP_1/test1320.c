#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x86 = 689120U;
int32_t t2 = 29551184;
static uint16_t x161 = UINT16_MAX;
uint32_t x170 = 2U;
uint8_t x186 = 83U;
volatile uint64_t x187 = 23251851796960216LLU;
volatile int8_t x188 = 0;
int8_t x191 = INT8_MIN;
uint16_t x243 = 15284U;
volatile int32_t t7 = -4537952;
static int8_t x280 = 21;
int64_t x295 = INT64_MAX;
int64_t t9 = -20144048759LL;
int8_t x353 = -1;
static uint32_t x419 = UINT32_MAX;
int32_t x450 = 13530;
uint16_t x452 = 1U;
int32_t t15 = -9942;
volatile int32_t t17 = 121380163;
uint64_t x647 = 96269665026LLU;
uint64_t t19 = 5347670020955LLU;
uint8_t x722 = UINT8_MAX;
volatile int16_t x723 = INT16_MIN;
int8_t x724 = 1;
uint32_t x758 = UINT32_MAX;
uint8_t x770 = UINT8_MAX;
uint32_t x772 = 10U;
uint8_t x824 = 40U;
int16_t x901 = INT16_MAX;
volatile int8_t x904 = 4;
int8_t x944 = 0;
static int64_t t28 = -1869LL;
int8_t x1085 = INT8_MAX;
volatile int32_t x1170 = -1;
uint16_t x1239 = 17U;
uint32_t x1267 = 29272161U;
uint8_t x1294 = 87U;
static int32_t x1335 = -1;
uint16_t x1391 = 3624U;
uint64_t x1413 = UINT64_MAX;
int8_t x1416 = 0;
int32_t t40 = 3864;
int64_t t41 = 4420632LL;
uint16_t x1583 = 23386U;
uint8_t x1659 = 109U;
uint8_t x1765 = 3U;
int32_t x1986 = INT32_MIN;
static int8_t x1996 = 1;
volatile uint32_t t54 = 0U;
static uint8_t x2041 = UINT8_MAX;
int16_t x2043 = INT16_MAX;
static volatile uint16_t x2044 = 0U;
static int8_t x2057 = INT8_MIN;
static uint32_t x2136 = 52U;
static volatile uint8_t x2141 = 118U;
int8_t x2143 = -1;
uint64_t x2151 = 143001131562LLU;
volatile int32_t t60 = -213;
int16_t x2405 = INT16_MIN;
int8_t x2407 = 1;
uint32_t t63 = 439625142U;
volatile uint16_t x2538 = 2U;
static volatile uint16_t x2620 = 3U;
static int32_t t65 = -93663674;
static int64_t x2633 = INT64_MIN;
int8_t x2764 = 10;
uint32_t x2773 = 24009770U;
static int8_t x2822 = INT8_MAX;
int32_t x2903 = -14794177;
int8_t x2908 = 0;
uint8_t x2910 = UINT8_MAX;
uint64_t x2926 = UINT64_MAX;
int8_t x2977 = INT8_MIN;
int64_t x2998 = 21490LL;
uint8_t x3000 = 3U;
int32_t x3013 = -132691003;
volatile int64_t x3014 = -2100398065890175497LL;
int16_t x3086 = -2259;
int32_t x3096 = 0;
volatile uint64_t x3123 = UINT64_MAX;
uint64_t t83 = 46LLU;
static uint32_t x3169 = UINT32_MAX;
uint8_t x3300 = 6U;
volatile int32_t t87 = 211;
volatile int8_t x3313 = -1;
int8_t x3316 = 0;
volatile int16_t x3338 = INT16_MIN;
int8_t x3340 = 13;
int32_t x3411 = INT32_MAX;
uint8_t x3412 = 7U;
uint32_t x3420 = 6U;
uint32_t x3441 = 1944540924U;
int8_t x3442 = INT8_MIN;
static uint8_t x3444 = 13U;
uint8_t x3521 = 108U;
uint16_t x3522 = 186U;
int8_t x3523 = INT8_MAX;
uint8_t x3524 = 3U;
volatile int32_t t96 = 6159688;
int64_t x3590 = -1LL;
int8_t x3631 = 24;


void f0(void) {
	int64_t x53 = INT64_MIN;
	volatile int8_t x54 = -1;
	volatile int32_t x55 = -36922432;
	int8_t x56 = 8;
	volatile int32_t t0 = 1;

	t0 = (((x53==x54)&x55)>>x56);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x65 = INT8_MAX;
	int64_t x66 = INT64_MIN;
	uint16_t x67 = 32U;
	int8_t x68 = 0;
	static int32_t t1 = 7;

	t1 = (((x65==x66)&x67)>>x68);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x85 = INT64_MIN;
	int8_t x87 = -5;
	int16_t x88 = 17;

	t2 = (((x85==x86)&x87)>>x88);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x162 = -3567;
	int64_t x163 = INT64_MIN;
	static volatile int8_t x164 = 10;
	static int64_t t3 = -203457LL;

	t3 = (((x161==x162)&x163)>>x164);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x169 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	int32_t x172 = 19;
	int64_t t4 = -134354968997609LL;

	t4 = (((x169==x170)&x171)>>x172);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint64_t t5 = 114732706067566401LLU;

	t5 = (((x185==x186)&x187)>>x188);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x189 = UINT16_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	uint8_t x192 = 1U;
	int32_t t6 = -2346599;

	t6 = (((x189==x190)&x191)>>x192);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x241 = INT8_MIN;
	static volatile int8_t x242 = INT8_MIN;
	int8_t x244 = 10;

	t7 = (((x241==x242)&x243)>>x244);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x277 = -1;
	static volatile int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	volatile int32_t t8 = 0;

	t8 = (((x277==x278)&x279)>>x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x293 = 5;
	static int64_t x294 = -1LL;
	int16_t x296 = 61;

	t9 = (((x293==x294)&x295)>>x296);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x313 = INT16_MIN;
	static int16_t x314 = INT16_MIN;
	volatile uint64_t x315 = 338379124100715499LLU;
	uint8_t x316 = 14U;
	uint64_t t10 = 36191816LLU;

	t10 = (((x313==x314)&x315)>>x316);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x354 = 2883U;
	volatile uint32_t x355 = 4070U;
	static uint8_t x356 = 2U;
	uint32_t t11 = 57115832U;

	t11 = (((x353==x354)&x355)>>x356);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x417 = INT32_MIN;
	int16_t x418 = 1525;
	uint16_t x420 = 13U;
	volatile uint32_t t12 = 3091733U;

	t12 = (((x417==x418)&x419)>>x420);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x449 = -1LL;
	int64_t x451 = INT64_MIN;
	volatile int64_t t13 = -324330844LL;

	t13 = (((x449==x450)&x451)>>x452);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x525 = 967342LLU;
	static uint32_t x526 = 302187756U;
	static int16_t x527 = -1;
	static volatile int8_t x528 = 1;
	volatile int32_t t14 = -167;

	t14 = (((x525==x526)&x527)>>x528);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x557 = INT64_MIN;
	int16_t x558 = INT16_MIN;
	volatile uint16_t x559 = UINT16_MAX;
	uint8_t x560 = 2U;

	t15 = (((x557==x558)&x559)>>x560);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x617 = -1;
	static uint16_t x618 = 358U;
	uint16_t x619 = 27U;
	static uint16_t x620 = 0U;
	static int32_t t16 = 5418;

	t16 = (((x617==x618)&x619)>>x620);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x621 = 4099U;
	int8_t x622 = INT8_MAX;
	volatile int16_t x623 = -1;
	volatile int8_t x624 = 0;

	t17 = (((x621==x622)&x623)>>x624);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x625 = 448;
	int16_t x626 = -1;
	volatile uint16_t x627 = 29423U;
	int8_t x628 = 1;
	static volatile int32_t t18 = -1956541;

	t18 = (((x625==x626)&x627)>>x628);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x645 = 35;
	uint32_t x646 = 256408U;
	uint8_t x648 = 1U;

	t19 = (((x645==x646)&x647)>>x648);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x721 = 4LLU;
	volatile int32_t t20 = 1583;

	t20 = (((x721==x722)&x723)>>x724);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x757 = -1;
	uint32_t x759 = UINT32_MAX;
	volatile uint16_t x760 = 10U;
	uint32_t t21 = 171U;

	t21 = (((x757==x758)&x759)>>x760);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x769 = 941;
	uint8_t x771 = 25U;
	volatile int32_t t22 = 328086626;

	t22 = (((x769==x770)&x771)>>x772);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x821 = INT16_MAX;
	static int16_t x822 = INT16_MIN;
	int64_t x823 = INT64_MIN;
	volatile int64_t t23 = 12008533772711LL;

	t23 = (((x821==x822)&x823)>>x824);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x877 = 9U;
	int32_t x878 = INT32_MAX;
	int64_t x879 = INT64_MIN;
	static int16_t x880 = 1;
	int64_t t24 = -885479070023313846LL;

	t24 = (((x877==x878)&x879)>>x880);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x902 = UINT16_MAX;
	int16_t x903 = INT16_MIN;
	static int32_t t25 = -63;

	t25 = (((x901==x902)&x903)>>x904);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x941 = 8;
	int64_t x942 = 21279377795013338LL;
	int16_t x943 = -1;
	volatile int32_t t26 = 21;

	t26 = (((x941==x942)&x943)>>x944);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x949 = 1U;
	uint32_t x950 = 7608U;
	uint64_t x951 = 129718410LLU;
	uint8_t x952 = 1U;
	static uint64_t t27 = 7062860670LLU;

	t27 = (((x949==x950)&x951)>>x952);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x957 = UINT64_MAX;
	int16_t x958 = 838;
	int64_t x959 = INT64_MIN;
	int16_t x960 = 2;

	t28 = (((x957==x958)&x959)>>x960);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x961 = 508525511149LLU;
	int32_t x962 = INT32_MIN;
	uint16_t x963 = 0U;
	uint8_t x964 = 14U;
	volatile int32_t t29 = 521118;

	t29 = (((x961==x962)&x963)>>x964);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1041 = -1;
	uint32_t x1042 = 2531U;
	int32_t x1043 = INT32_MIN;
	int64_t x1044 = 3LL;
	int32_t t30 = -822;

	t30 = (((x1041==x1042)&x1043)>>x1044);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1086 = INT32_MIN;
	volatile int16_t x1087 = INT16_MIN;
	static volatile uint16_t x1088 = 1U;
	static int32_t t31 = 8120;

	t31 = (((x1085==x1086)&x1087)>>x1088);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1169 = UINT64_MAX;
	int8_t x1171 = -2;
	int32_t x1172 = 1;
	int32_t t32 = 15391495;

	t32 = (((x1169==x1170)&x1171)>>x1172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1237 = INT16_MIN;
	uint8_t x1238 = 69U;
	uint8_t x1240 = 2U;
	static int32_t t33 = 179365443;

	t33 = (((x1237==x1238)&x1239)>>x1240);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1265 = 0;
	uint8_t x1266 = 1U;
	volatile uint32_t x1268 = 6U;
	volatile uint32_t t34 = 163U;

	t34 = (((x1265==x1266)&x1267)>>x1268);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x1293 = -1;
	uint8_t x1295 = UINT8_MAX;
	static int8_t x1296 = 1;
	volatile int32_t t35 = -4;

	t35 = (((x1293==x1294)&x1295)>>x1296);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1333 = 41801679LL;
	uint16_t x1334 = 23462U;
	static int32_t x1336 = 25;
	volatile int32_t t36 = 4;

	t36 = (((x1333==x1334)&x1335)>>x1336);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x1389 = 10U;
	int8_t x1390 = INT8_MIN;
	int16_t x1392 = 1;
	static volatile int32_t t37 = 943645464;

	t37 = (((x1389==x1390)&x1391)>>x1392);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1414 = -1;
	int8_t x1415 = -1;
	volatile int32_t t38 = -611332609;

	t38 = (((x1413==x1414)&x1415)>>x1416);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1473 = 4;
	uint32_t x1474 = 336815U;
	int64_t x1475 = INT64_MIN;
	int8_t x1476 = 5;
	int64_t t39 = -8464498729375065LL;

	t39 = (((x1473==x1474)&x1475)>>x1476);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1489 = INT64_MIN;
	int16_t x1490 = 1;
	static volatile int8_t x1491 = INT8_MIN;
	uint8_t x1492 = 3U;

	t40 = (((x1489==x1490)&x1491)>>x1492);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1513 = -1;
	volatile int8_t x1514 = -1;
	int64_t x1515 = 15879687LL;
	uint8_t x1516 = 8U;

	t41 = (((x1513==x1514)&x1515)>>x1516);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1581 = -1;
	static volatile uint8_t x1582 = 9U;
	uint32_t x1584 = 24U;
	volatile int32_t t42 = 7218522;

	t42 = (((x1581==x1582)&x1583)>>x1584);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1633 = 53;
	int64_t x1634 = -1LL;
	int64_t x1635 = INT64_MIN;
	uint16_t x1636 = 11U;
	int64_t t43 = 14428179125174123LL;

	t43 = (((x1633==x1634)&x1635)>>x1636);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1657 = INT32_MAX;
	uint64_t x1658 = 7633594946LLU;
	int16_t x1660 = 1;
	volatile int32_t t44 = 2821;

	t44 = (((x1657==x1658)&x1659)>>x1660);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1665 = UINT64_MAX;
	uint32_t x1666 = 1864U;
	int16_t x1667 = -943;
	int8_t x1668 = 1;
	int32_t t45 = 166989;

	t45 = (((x1665==x1666)&x1667)>>x1668);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1705 = 2U;
	static volatile uint16_t x1706 = 3U;
	uint16_t x1707 = 13715U;
	volatile uint16_t x1708 = 0U;
	int32_t t46 = -925355;

	t46 = (((x1705==x1706)&x1707)>>x1708);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1766 = UINT8_MAX;
	int16_t x1767 = -1;
	static uint8_t x1768 = 2U;
	volatile int32_t t47 = -689085;

	t47 = (((x1765==x1766)&x1767)>>x1768);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1785 = INT64_MIN;
	uint32_t x1786 = 103616907U;
	uint16_t x1787 = 14087U;
	uint16_t x1788 = 3U;
	volatile int32_t t48 = 258057;

	t48 = (((x1785==x1786)&x1787)>>x1788);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x1805 = INT32_MIN;
	volatile int16_t x1806 = INT16_MIN;
	int16_t x1807 = 3;
	uint8_t x1808 = 2U;
	volatile int32_t t49 = 42;

	t49 = (((x1805==x1806)&x1807)>>x1808);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1813 = -16;
	static int8_t x1814 = 3;
	int8_t x1815 = INT8_MAX;
	uint8_t x1816 = 0U;
	int32_t t50 = -3947;

	t50 = (((x1813==x1814)&x1815)>>x1816);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1901 = 2U;
	int32_t x1902 = INT32_MIN;
	uint32_t x1903 = 0U;
	uint8_t x1904 = 2U;
	volatile uint32_t t51 = 4757U;

	t51 = (((x1901==x1902)&x1903)>>x1904);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x1913 = UINT32_MAX;
	volatile int8_t x1914 = 7;
	static volatile uint32_t x1915 = 3U;
	static int16_t x1916 = 0;
	volatile uint32_t t52 = 0U;

	t52 = (((x1913==x1914)&x1915)>>x1916);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x1985 = 20U;
	static int32_t x1987 = -1;
	int32_t x1988 = 0;
	static int32_t t53 = -201229;

	t53 = (((x1985==x1986)&x1987)>>x1988);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1993 = 26431U;
	static int8_t x1994 = 1;
	uint32_t x1995 = UINT32_MAX;

	t54 = (((x1993==x1994)&x1995)>>x1996);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2042 = -43887005;
	volatile int32_t t55 = -12;

	t55 = (((x2041==x2042)&x2043)>>x2044);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2058 = INT8_MIN;
	int32_t x2059 = -450375;
	int8_t x2060 = 5;
	volatile int32_t t56 = -2054;

	t56 = (((x2057==x2058)&x2059)>>x2060);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2133 = INT16_MIN;
	int16_t x2134 = INT16_MAX;
	uint64_t x2135 = 214307698592197928LLU;
	volatile uint64_t t57 = 327202690108LLU;

	t57 = (((x2133==x2134)&x2135)>>x2136);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2142 = -1;
	volatile uint8_t x2144 = 8U;
	static int32_t t58 = 7371;

	t58 = (((x2141==x2142)&x2143)>>x2144);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2149 = INT32_MIN;
	int16_t x2150 = INT16_MAX;
	static int8_t x2152 = 9;
	uint64_t t59 = 485859LLU;

	t59 = (((x2149==x2150)&x2151)>>x2152);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2373 = UINT32_MAX;
	int16_t x2374 = INT16_MIN;
	volatile int32_t x2375 = 5706;
	static volatile uint16_t x2376 = 2U;

	t60 = (((x2373==x2374)&x2375)>>x2376);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2406 = -1;
	int16_t x2408 = 5;
	int32_t t61 = -1953;

	t61 = (((x2405==x2406)&x2407)>>x2408);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2481 = 7534U;
	static int16_t x2482 = -4245;
	uint8_t x2483 = 0U;
	static int64_t x2484 = 23LL;
	volatile int32_t t62 = -1;

	t62 = (((x2481==x2482)&x2483)>>x2484);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2489 = INT64_MAX;
	uint8_t x2490 = 5U;
	static volatile uint32_t x2491 = UINT32_MAX;
	int8_t x2492 = 4;

	t63 = (((x2489==x2490)&x2491)>>x2492);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2537 = -1;
	static uint64_t x2539 = 634297826LLU;
	static int8_t x2540 = 1;
	static volatile uint64_t t64 = 48830115362LLU;

	t64 = (((x2537==x2538)&x2539)>>x2540);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2617 = UINT64_MAX;
	static uint32_t x2618 = UINT32_MAX;
	volatile int8_t x2619 = INT8_MIN;

	t65 = (((x2617==x2618)&x2619)>>x2620);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x2634 = INT32_MIN;
	volatile uint8_t x2635 = UINT8_MAX;
	int8_t x2636 = 0;
	int32_t t66 = 1674;

	t66 = (((x2633==x2634)&x2635)>>x2636);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2761 = INT8_MIN;
	volatile int32_t x2762 = 1;
	static int16_t x2763 = INT16_MAX;
	int32_t t67 = -15;

	t67 = (((x2761==x2762)&x2763)>>x2764);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2774 = INT8_MIN;
	uint8_t x2775 = 2U;
	int8_t x2776 = 1;
	static int32_t t68 = -3422587;

	t68 = (((x2773==x2774)&x2775)>>x2776);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x2821 = -46;
	volatile int32_t x2823 = INT32_MIN;
	static uint8_t x2824 = 0U;
	volatile int32_t t69 = 240;

	t69 = (((x2821==x2822)&x2823)>>x2824);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2901 = -3721LL;
	uint8_t x2902 = 1U;
	uint8_t x2904 = 12U;
	int32_t t70 = 1217578;

	t70 = (((x2901==x2902)&x2903)>>x2904);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2905 = INT32_MIN;
	volatile int64_t x2906 = INT64_MAX;
	uint16_t x2907 = 1U;
	int32_t t71 = 16015;

	t71 = (((x2905==x2906)&x2907)>>x2908);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2909 = INT64_MIN;
	static volatile int32_t x2911 = INT32_MIN;
	uint32_t x2912 = 2U;
	static volatile int32_t t72 = 12336552;

	t72 = (((x2909==x2910)&x2911)>>x2912);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2925 = -1;
	uint16_t x2927 = 32196U;
	int8_t x2928 = 25;
	volatile int32_t t73 = -409;

	t73 = (((x2925==x2926)&x2927)>>x2928);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2978 = INT8_MIN;
	int64_t x2979 = INT64_MIN;
	volatile uint16_t x2980 = 49U;
	int64_t t74 = 6960LL;

	t74 = (((x2977==x2978)&x2979)>>x2980);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x2997 = -649129869LL;
	int8_t x2999 = 38;
	int32_t t75 = 0;

	t75 = (((x2997==x2998)&x2999)>>x3000);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3001 = 991U;
	uint32_t x3002 = 262640007U;
	int8_t x3003 = 2;
	uint8_t x3004 = 2U;
	volatile int32_t t76 = 308;

	t76 = (((x3001==x3002)&x3003)>>x3004);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x3005 = 4U;
	volatile uint16_t x3006 = 11643U;
	int64_t x3007 = -1LL;
	uint8_t x3008 = 10U;
	static volatile int64_t t77 = 3609794LL;

	t77 = (((x3005==x3006)&x3007)>>x3008);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3015 = 56U;
	static volatile uint8_t x3016 = 2U;
	volatile int32_t t78 = 30741;

	t78 = (((x3013==x3014)&x3015)>>x3016);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3033 = INT8_MIN;
	int64_t x3034 = INT64_MIN;
	int16_t x3035 = INT16_MIN;
	static volatile int16_t x3036 = 0;
	static int32_t t79 = 28732;

	t79 = (((x3033==x3034)&x3035)>>x3036);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3065 = 84U;
	static int16_t x3066 = INT16_MIN;
	uint64_t x3067 = 4060728901556LLU;
	volatile uint8_t x3068 = 1U;
	static uint64_t t80 = 62LLU;

	t80 = (((x3065==x3066)&x3067)>>x3068);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x3085 = 3112LL;
	uint64_t x3087 = 489575LLU;
	uint16_t x3088 = 3U;
	uint64_t t81 = 74989401437790LLU;

	t81 = (((x3085==x3086)&x3087)>>x3088);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3093 = 240;
	int16_t x3094 = INT16_MIN;
	static volatile int64_t x3095 = -1LL;
	int64_t t82 = -39608903834LL;

	t82 = (((x3093==x3094)&x3095)>>x3096);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3121 = INT32_MIN;
	volatile uint8_t x3122 = UINT8_MAX;
	static int8_t x3124 = 0;

	t83 = (((x3121==x3122)&x3123)>>x3124);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3170 = INT64_MIN;
	int64_t x3171 = INT64_MIN;
	int16_t x3172 = 1;
	int64_t t84 = 43LL;

	t84 = (((x3169==x3170)&x3171)>>x3172);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3209 = INT16_MIN;
	volatile uint8_t x3210 = 19U;
	static uint64_t x3211 = 65605182863113641LLU;
	volatile int16_t x3212 = 0;
	uint64_t t85 = 2LLU;

	t85 = (((x3209==x3210)&x3211)>>x3212);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3229 = UINT64_MAX;
	int32_t x3230 = INT32_MIN;
	int64_t x3231 = INT64_MIN;
	volatile uint8_t x3232 = 21U;
	int64_t t86 = 4418009402363458LL;

	t86 = (((x3229==x3230)&x3231)>>x3232);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3297 = UINT64_MAX;
	int64_t x3298 = INT64_MAX;
	int8_t x3299 = -1;

	t87 = (((x3297==x3298)&x3299)>>x3300);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3314 = 21U;
	int8_t x3315 = 32;
	volatile int32_t t88 = 2454708;

	t88 = (((x3313==x3314)&x3315)>>x3316);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3337 = 1;
	uint64_t x3339 = 41517969259060LLU;
	uint64_t t89 = 45LLU;

	t89 = (((x3337==x3338)&x3339)>>x3340);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x3409 = 4347097160825528117LL;
	int32_t x3410 = INT32_MAX;
	int32_t t90 = 2;

	t90 = (((x3409==x3410)&x3411)>>x3412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3417 = INT32_MIN;
	int8_t x3418 = -8;
	int32_t x3419 = INT32_MIN;
	volatile int32_t t91 = 315278774;

	t91 = (((x3417==x3418)&x3419)>>x3420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x3443 = -3LL;
	volatile int64_t t92 = -1LL;

	t92 = (((x3441==x3442)&x3443)>>x3444);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x3453 = -2313470924298333444LL;
	static volatile int8_t x3454 = 3;
	static int64_t x3455 = -3305591545249212109LL;
	int8_t x3456 = 29;
	volatile int64_t t93 = 329390408540LL;

	t93 = (((x3453==x3454)&x3455)>>x3456);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3485 = UINT8_MAX;
	int32_t x3486 = 6377631;
	volatile uint32_t x3487 = 1943907U;
	static volatile uint8_t x3488 = 3U;
	uint32_t t94 = 1412661466U;

	t94 = (((x3485==x3486)&x3487)>>x3488);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t t95 = 1773;

	t95 = (((x3521==x3522)&x3523)>>x3524);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3553 = 1441668520U;
	static uint32_t x3554 = 192320U;
	int32_t x3555 = INT32_MIN;
	uint16_t x3556 = 7U;

	t96 = (((x3553==x3554)&x3555)>>x3556);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x3577 = 5732;
	uint32_t x3578 = 9U;
	uint32_t x3579 = 91U;
	uint8_t x3580 = 20U;
	volatile uint32_t t97 = 9617020U;

	t97 = (((x3577==x3578)&x3579)>>x3580);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3589 = INT16_MIN;
	uint64_t x3591 = 886LLU;
	int16_t x3592 = 1;
	uint64_t t98 = 1817706791442LLU;

	t98 = (((x3589==x3590)&x3591)>>x3592);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3629 = 46U;
	int32_t x3630 = -1;
	volatile int8_t x3632 = 1;
	static int32_t t99 = 21747671;

	t99 = (((x3629==x3630)&x3631)>>x3632);

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

