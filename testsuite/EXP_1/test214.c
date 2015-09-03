#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x13 = 41U;
uint8_t x16 = 46U;
volatile int64_t t0 = 12871287096212417LL;
int64_t x133 = 1851LL;
static uint16_t x154 = 10761U;
uint8_t x155 = 1U;
int64_t x193 = INT64_MAX;
volatile uint64_t x194 = UINT64_MAX;
uint64_t x226 = UINT64_MAX;
volatile uint32_t x303 = 197462U;
static volatile uint16_t x313 = 10U;
int32_t x320 = 0;
int8_t x400 = 1;
int64_t x435 = INT64_MIN;
volatile int16_t x458 = INT16_MIN;
volatile uint64_t x486 = 3215540LLU;
int16_t x493 = INT16_MIN;
volatile int8_t x495 = -1;
int32_t x509 = 766472277;
uint8_t x529 = 0U;
int16_t x548 = 1;
uint32_t x586 = 3103U;
static volatile int8_t x587 = INT8_MIN;
static uint64_t x642 = UINT64_MAX;
int16_t x643 = -10;
static uint8_t x644 = 8U;
int32_t x895 = INT32_MAX;
volatile uint64_t x896 = 6LLU;
volatile int64_t t25 = -124696LL;
int8_t x1029 = INT8_MAX;
int32_t x1075 = -12;
volatile uint64_t t28 = 1LLU;
uint8_t x1102 = UINT8_MAX;
int8_t x1193 = INT8_MIN;
volatile uint64_t t32 = 3057859462LLU;
uint8_t x1330 = 3U;
int64_t x1331 = 1209283836064720333LL;
static int8_t x1414 = INT8_MAX;
uint16_t x1416 = 26U;
uint32_t x1421 = 259081U;
int64_t x1422 = 10861LL;
static uint8_t x1454 = 2U;
int32_t t38 = 563;
int64_t x1509 = 0LL;
volatile int64_t t39 = -262454313348293LL;
int32_t x1610 = -14873833;
volatile uint64_t t42 = 126401174549535LLU;
int8_t x1736 = 1;
volatile int32_t t44 = -129311785;
uint32_t x1769 = UINT32_MAX;
uint8_t x1824 = 0U;
int8_t x1921 = -9;
static int8_t x1988 = 4;
int32_t t51 = -12106;
volatile uint64_t x2109 = UINT64_MAX;
static uint64_t x2223 = 51412569082LLU;
static uint16_t x2224 = 1U;
volatile uint64_t t58 = 1115704847456LLU;
volatile int8_t x2286 = INT8_MIN;
int8_t x2367 = INT8_MIN;
uint32_t x2415 = UINT32_MAX;
uint16_t x2416 = 1U;
static uint8_t x2468 = 12U;
int64_t t68 = 2756730509164835LL;
static volatile int64_t t72 = 48434043034036253LL;
uint64_t x2867 = 4672576580525329347LLU;
volatile uint64_t t74 = 17177749947LLU;
volatile uint8_t x2960 = 3U;
volatile uint32_t x3004 = 9U;
int32_t x3022 = -704;
static uint8_t x3024 = 8U;
uint32_t x3042 = 129388U;
uint8_t x3043 = UINT8_MAX;
static int32_t x3057 = 399;
static volatile uint8_t x3060 = 2U;
static uint16_t x3088 = 0U;
uint16_t x3092 = 4U;
static volatile int8_t x3109 = -1;
volatile int64_t t82 = 13921657011934530LL;
uint64_t t83 = 942147827578528567LLU;
int32_t x3265 = 202779;
int16_t x3298 = 1373;
volatile uint64_t x3378 = UINT64_MAX;
static int64_t x3485 = 329LL;
uint8_t x3488 = 0U;
int64_t x3490 = INT64_MIN;
uint8_t x3491 = 1U;
int8_t x3627 = -61;
static uint8_t x3628 = 9U;
volatile int16_t x3644 = 1;
uint8_t x3855 = UINT8_MAX;
static int16_t x3856 = 0;
int32_t t98 = -25;


void f0(void) {
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = INT64_MIN;

	t0 = (((x13-x14)/x15)<<x16);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	uint32_t x136 = 0U;
	volatile int64_t t1 = 16556399032LL;

	t1 = (((x133-x134)/x135)<<x136);

	if (t1 != 15LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x149 = -606730848897202834LL;
	int16_t x150 = INT16_MAX;
	volatile int32_t x151 = -184929;
	volatile int8_t x152 = 1;
	static int64_t t2 = 6945LL;

	t2 = (((x149-x150)/x151)<<x152);

	if (t2 != 6561770721706LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x153 = INT16_MAX;
	volatile uint8_t x156 = 4U;
	static int32_t t3 = 235736614;

	t3 = (((x153-x154)/x155)<<x156);

	if (t3 != 352096) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x157 = 20U;
	uint32_t x158 = 297U;
	uint64_t x159 = 81888LLU;
	int8_t x160 = 57;
	uint64_t t4 = 1022782559687645LLU;

	t4 = (((x157-x158)/x159)<<x160);

	if (t4 != 13979173243358019584LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x195 = 1U;
	uint16_t x196 = 3U;
	volatile uint64_t t5 = 7810854606496443949LLU;

	t5 = (((x193-x194)/x195)<<x196);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x225 = INT64_MIN;
	uint32_t x227 = 15U;
	int8_t x228 = 18;
	volatile uint64_t t6 = 8250167LLU;

	t6 = (((x225-x226)/x227)<<x228);

	if (t6 != 2459565876494467072LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x301 = 115U;
	uint64_t x302 = 8439746792LLU;
	uint16_t x304 = 16U;
	volatile uint64_t t7 = 2360372977830672632LLU;

	t7 = (((x301-x302)/x303)<<x304);

	if (t7 != 6122321353280716800LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 0U;
	static volatile int32_t t8 = 17020;

	t8 = (((x313-x314)/x315)<<x316);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	uint16_t x319 = UINT16_MAX;
	volatile int64_t t9 = 1048883633110LL;

	t9 = (((x317-x318)/x319)<<x320);

	if (t9 != 65537LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x377 = INT8_MIN;
	volatile int32_t x378 = -1;
	uint64_t x379 = 964478661601902LLU;
	static uint32_t x380 = 1U;
	uint64_t t10 = 1LLU;

	t10 = (((x377-x378)/x379)<<x380);

	if (t10 != 38252LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x389 = 131U;
	int8_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	volatile uint8_t x392 = 6U;
	volatile uint64_t t11 = 954LLU;

	t11 = (((x389-x390)/x391)<<x392);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x397 = -1;
	static int16_t x398 = INT16_MIN;
	uint32_t x399 = 42U;
	volatile uint32_t t12 = 1754379U;

	t12 = (((x397-x398)/x399)<<x400);

	if (t12 != 1560U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x401 = -1;
	uint32_t x402 = 0U;
	uint32_t x403 = UINT32_MAX;
	int32_t x404 = 0;
	uint32_t t13 = 786761668U;

	t13 = (((x401-x402)/x403)<<x404);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x433 = -1LL;
	int64_t x434 = -3174229061534460081LL;
	volatile uint8_t x436 = 15U;
	static int64_t t14 = -92334LL;

	t14 = (((x433-x434)/x435)<<x436);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x457 = UINT16_MAX;
	int16_t x459 = 541;
	static uint8_t x460 = 9U;
	int32_t t15 = 581030;

	t15 = (((x457-x458)/x459)<<x460);

	if (t15 != 92672) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x485 = 3U;
	uint16_t x487 = 19U;
	uint16_t x488 = 26U;
	static volatile uint64_t t16 = 3540LLU;

	t16 = (((x485-x486)/x487)<<x488);

	if (t16 != 8737920045906132992LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x494 = -1LL;
	int8_t x496 = 1;
	volatile int64_t t17 = 65113562827LL;

	t17 = (((x493-x494)/x495)<<x496);

	if (t17 != 65534LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x510 = -1LL;
	uint8_t x511 = 71U;
	uint16_t x512 = 23U;
	int64_t t18 = -124288406LL;

	t18 = (((x509-x510)/x511)<<x512);

	if (t18 != 90558244585472LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x530 = 7936481018944534LLU;
	uint64_t x531 = 9992311LLU;
	volatile int64_t x532 = 1LL;
	uint64_t t19 = 981696541559LLU;

	t19 = (((x529-x530)/x531)<<x532);

	if (t19 != 3690599220278LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x545 = INT16_MIN;
	volatile int8_t x546 = INT8_MIN;
	int8_t x547 = INT8_MIN;
	volatile int32_t t20 = 610;

	t20 = (((x545-x546)/x547)<<x548);

	if (t20 != 510) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x585 = 2LL;
	int16_t x588 = 4;
	volatile int64_t t21 = -5189586500877LL;

	t21 = (((x585-x586)/x587)<<x588);

	if (t21 != 384LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x641 = 266203921U;
	static volatile uint64_t t22 = 8576921026363599433LLU;

	t22 = (((x641-x642)/x643)<<x644);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x893 = 166382985244234LL;
	uint16_t x894 = 10118U;
	static volatile int64_t t23 = 29251514738LL;

	t23 = (((x893-x894)/x895)<<x896);

	if (t23 != 4958592LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x933 = -81;
	static uint64_t x934 = UINT64_MAX;
	int16_t x935 = INT16_MIN;
	int32_t x936 = 5;
	uint64_t t24 = 4035LLU;

	t24 = (((x933-x934)/x935)<<x936);

	if (t24 != 32LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x937 = -1;
	int64_t x938 = 351LL;
	int32_t x939 = INT32_MAX;
	int16_t x940 = 2;

	t25 = (((x937-x938)/x939)<<x940);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x941 = 0;
	int16_t x942 = -14;
	int32_t x943 = INT32_MAX;
	static uint8_t x944 = 5U;
	volatile int32_t t26 = -792199476;

	t26 = (((x941-x942)/x943)<<x944);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1030 = UINT16_MAX;
	int32_t x1031 = INT32_MAX;
	int32_t x1032 = 7;
	int32_t t27 = -6609;

	t27 = (((x1029-x1030)/x1031)<<x1032);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1073 = 518131823LLU;
	int16_t x1074 = -10;
	uint8_t x1076 = 12U;

	t28 = (((x1073-x1074)/x1075)<<x1076);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1101 = 1096752348U;
	uint8_t x1103 = 59U;
	int32_t x1104 = 1;
	uint32_t t29 = 215727766U;

	t29 = (((x1101-x1102)/x1103)<<x1104);

	if (t29 != 37178036U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1194 = -1;
	static int64_t x1195 = INT64_MAX;
	uint16_t x1196 = 37U;
	static int64_t t30 = 1061LL;

	t30 = (((x1193-x1194)/x1195)<<x1196);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1225 = 1;
	uint64_t x1226 = 352948054782752LLU;
	int64_t x1227 = INT64_MIN;
	int16_t x1228 = 0;
	uint64_t t31 = 777050LLU;

	t31 = (((x1225-x1226)/x1227)<<x1228);

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1313 = 35238258LL;
	static uint64_t x1314 = 716305657045231LLU;
	int64_t x1315 = INT64_MIN;
	uint32_t x1316 = 3U;

	t32 = (((x1313-x1314)/x1315)<<x1316);

	if (t32 != 8LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1321 = -1;
	uint8_t x1322 = UINT8_MAX;
	static uint64_t x1323 = UINT64_MAX;
	static uint8_t x1324 = 1U;
	volatile uint64_t t33 = 4549LLU;

	t33 = (((x1321-x1322)/x1323)<<x1324);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1329 = -15;
	static int8_t x1332 = 3;
	int64_t t34 = -187942754938LL;

	t34 = (((x1329-x1330)/x1331)<<x1332);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1357 = -1LL;
	uint16_t x1358 = 4U;
	uint8_t x1359 = 15U;
	uint8_t x1360 = 28U;
	static volatile int64_t t35 = -1622LL;

	t35 = (((x1357-x1358)/x1359)<<x1360);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1413 = -1;
	int64_t x1415 = INT64_MIN;
	int64_t t36 = 9751428741850717LL;

	t36 = (((x1413-x1414)/x1415)<<x1416);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1423 = 2U;
	volatile uint8_t x1424 = 1U;
	int64_t t37 = -77297948LL;

	t37 = (((x1421-x1422)/x1423)<<x1424);

	if (t37 != 248220LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1453 = UINT8_MAX;
	int16_t x1455 = INT16_MIN;
	uint8_t x1456 = 0U;

	t38 = (((x1453-x1454)/x1455)<<x1456);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1510 = 4;
	int8_t x1511 = INT8_MIN;
	int16_t x1512 = 1;

	t39 = (((x1509-x1510)/x1511)<<x1512);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1609 = INT8_MAX;
	volatile uint8_t x1611 = 18U;
	static uint32_t x1612 = 1U;
	volatile int32_t t40 = 107057402;

	t40 = (((x1609-x1610)/x1611)<<x1612);

	if (t40 != 1652662) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1617 = UINT64_MAX;
	int32_t x1618 = 761;
	int32_t x1619 = INT32_MIN;
	static int8_t x1620 = 31;
	volatile uint64_t t41 = 18LLU;

	t41 = (((x1617-x1618)/x1619)<<x1620);

	if (t41 != 2147483648LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1717 = 407731654LL;
	int32_t x1718 = -41951;
	uint64_t x1719 = UINT64_MAX;
	int8_t x1720 = 3;

	t42 = (((x1717-x1718)/x1719)<<x1720);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1733 = -1;
	volatile int8_t x1734 = -1;
	volatile int64_t x1735 = -2LL;
	volatile int64_t t43 = 11856549647429LL;

	t43 = (((x1733-x1734)/x1735)<<x1736);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x1765 = INT8_MIN;
	uint8_t x1766 = 2U;
	static volatile int8_t x1767 = INT8_MIN;
	static int16_t x1768 = 0;

	t44 = (((x1765-x1766)/x1767)<<x1768);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1770 = 110U;
	int64_t x1771 = INT64_MAX;
	int16_t x1772 = 57;
	int64_t t45 = -4372364044246LL;

	t45 = (((x1769-x1770)/x1771)<<x1772);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x1821 = 2U;
	int32_t x1822 = -1;
	uint8_t x1823 = 1U;
	int32_t t46 = -597;

	t46 = (((x1821-x1822)/x1823)<<x1824);

	if (t46 != 3) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x1837 = -4;
	uint32_t x1838 = 9U;
	volatile int32_t x1839 = -1;
	uint64_t x1840 = 2LLU;
	volatile uint32_t t47 = 30247166U;

	t47 = (((x1837-x1838)/x1839)<<x1840);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x1893 = INT8_MIN;
	static uint8_t x1894 = 51U;
	static int64_t x1895 = -1LL;
	uint8_t x1896 = 51U;
	volatile int64_t t48 = 62112346443981390LL;

	t48 = (((x1893-x1894)/x1895)<<x1896);

	if (t48 != 403072166649659392LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1922 = 229LLU;
	uint16_t x1923 = UINT16_MAX;
	int8_t x1924 = 1;
	volatile uint64_t t49 = 14224424LLU;

	t49 = (((x1921-x1922)/x1923)<<x1924);

	if (t49 != 562958543486976LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1949 = -2;
	volatile int16_t x1950 = INT16_MIN;
	int16_t x1951 = 10;
	int16_t x1952 = 1;
	int32_t t50 = -236275258;

	t50 = (((x1949-x1950)/x1951)<<x1952);

	if (t50 != 6552) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1985 = INT8_MIN;
	volatile int8_t x1986 = INT8_MAX;
	int16_t x1987 = INT16_MIN;

	t51 = (((x1985-x1986)/x1987)<<x1988);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2001 = 1U;
	volatile int16_t x2002 = INT16_MIN;
	int64_t x2003 = INT64_MIN;
	uint16_t x2004 = 1U;
	volatile int64_t t52 = 0LL;

	t52 = (((x2001-x2002)/x2003)<<x2004);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2093 = 7U;
	int8_t x2094 = INT8_MAX;
	static uint32_t x2095 = 40101222U;
	int8_t x2096 = 5;
	volatile uint32_t t53 = 1698148660U;

	t53 = (((x2093-x2094)/x2095)<<x2096);

	if (t53 != 3424U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2110 = 11763512763082258LLU;
	int64_t x2111 = INT64_MAX;
	int8_t x2112 = 20;
	volatile uint64_t t54 = 136882672055LLU;

	t54 = (((x2109-x2110)/x2111)<<x2112);

	if (t54 != 1048576LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2141 = INT8_MIN;
	int64_t x2142 = INT64_MIN;
	uint8_t x2143 = UINT8_MAX;
	int8_t x2144 = 6;
	static volatile int64_t t55 = 503996LL;

	t55 = (((x2141-x2142)/x2143)<<x2144);

	if (t55 != 2314885530818453504LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x2161 = UINT64_MAX;
	int8_t x2162 = 1;
	volatile int32_t x2163 = INT32_MIN;
	volatile int32_t x2164 = 7;
	uint64_t t56 = 576674770954603LLU;

	t56 = (((x2161-x2162)/x2163)<<x2164);

	if (t56 != 128LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2221 = 121U;
	volatile int32_t x2222 = -1;
	volatile uint64_t t57 = 8LLU;

	t57 = (((x2221-x2222)/x2223)<<x2224);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2253 = 61759077744470487LLU;
	int32_t x2254 = INT32_MAX;
	int8_t x2255 = -1;
	uint32_t x2256 = 62U;

	t58 = (((x2253-x2254)/x2255)<<x2256);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x2281 = UINT16_MAX;
	int16_t x2282 = 908;
	uint16_t x2283 = 8U;
	int8_t x2284 = 5;
	static int32_t t59 = -14590630;

	t59 = (((x2281-x2282)/x2283)<<x2284);

	if (t59 != 258496) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2285 = INT8_MIN;
	uint64_t x2287 = 70216928943179LLU;
	uint32_t x2288 = 2U;
	uint64_t t60 = 12180LLU;

	t60 = (((x2285-x2286)/x2287)<<x2288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x2361 = UINT16_MAX;
	int8_t x2362 = 0;
	uint64_t x2363 = 7716535776415362854LLU;
	uint32_t x2364 = 32U;
	static uint64_t t61 = 402LLU;

	t61 = (((x2361-x2362)/x2363)<<x2364);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2365 = UINT64_MAX;
	uint8_t x2366 = 3U;
	int16_t x2368 = 51;
	uint64_t t62 = 114160474LLU;

	t62 = (((x2365-x2366)/x2367)<<x2368);

	if (t62 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2413 = INT8_MAX;
	uint8_t x2414 = UINT8_MAX;
	volatile uint32_t t63 = 46380U;

	t63 = (((x2413-x2414)/x2415)<<x2416);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x2465 = UINT16_MAX;
	static uint16_t x2466 = UINT16_MAX;
	volatile int32_t x2467 = INT32_MIN;
	volatile int32_t t64 = 481402517;

	t64 = (((x2465-x2466)/x2467)<<x2468);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2489 = 2;
	int8_t x2490 = -1;
	static int16_t x2491 = 5;
	uint32_t x2492 = 6U;
	int32_t t65 = 5424999;

	t65 = (((x2489-x2490)/x2491)<<x2492);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x2529 = -5738377283827459LL;
	uint64_t x2530 = 914172614876206LLU;
	uint8_t x2531 = UINT8_MAX;
	uint16_t x2532 = 1U;
	uint64_t t66 = 154LLU;

	t66 = (((x2529-x2530)/x2531)<<x2532);

	if (t66 != 144628168814202728LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x2537 = UINT32_MAX;
	uint64_t x2538 = UINT64_MAX;
	volatile int8_t x2539 = INT8_MAX;
	uint8_t x2540 = 31U;
	static volatile uint64_t t67 = 166228680071400337LLU;

	t67 = (((x2537-x2538)/x2539)<<x2540);

	if (t67 != 72624976397598720LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2621 = -425644;
	int64_t x2622 = INT64_MIN;
	uint16_t x2623 = 3777U;
	uint32_t x2624 = 0U;

	t68 = (((x2621-x2622)/x2623)<<x2624);

	if (t68 != 2441983594613277LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x2633 = 4U;
	volatile int64_t x2634 = INT64_MAX;
	static int32_t x2635 = INT32_MIN;
	static int16_t x2636 = 0;
	int64_t t69 = -3466345300LL;

	t69 = (((x2633-x2634)/x2635)<<x2636);

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x2649 = INT16_MAX;
	static int16_t x2650 = INT16_MAX;
	uint64_t x2651 = 3615502758641LLU;
	static uint64_t x2652 = 63LLU;
	volatile uint64_t t70 = 75LLU;

	t70 = (((x2649-x2650)/x2651)<<x2652);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x2793 = 26U;
	static uint32_t x2794 = 1495868U;
	volatile int32_t x2795 = INT32_MIN;
	int64_t x2796 = 26LL;
	uint32_t t71 = 828179178U;

	t71 = (((x2793-x2794)/x2795)<<x2796);

	if (t71 != 67108864U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x2797 = INT16_MIN;
	uint32_t x2798 = 5U;
	static int64_t x2799 = 9443178666LL;
	uint8_t x2800 = 1U;

	t72 = (((x2797-x2798)/x2799)<<x2800);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x2865 = 3186687801924LLU;
	int32_t x2866 = INT32_MIN;
	uint8_t x2868 = 1U;
	static uint64_t t73 = 618784LLU;

	t73 = (((x2865-x2866)/x2867)<<x2868);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2941 = 2;
	uint64_t x2942 = 1LLU;
	int16_t x2943 = INT16_MAX;
	uint16_t x2944 = 0U;

	t74 = (((x2941-x2942)/x2943)<<x2944);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2957 = INT16_MAX;
	static int16_t x2958 = INT16_MIN;
	uint8_t x2959 = UINT8_MAX;
	int32_t t75 = -150614;

	t75 = (((x2957-x2958)/x2959)<<x2960);

	if (t75 != 2056) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3001 = UINT32_MAX;
	static volatile uint16_t x3002 = UINT16_MAX;
	uint64_t x3003 = 3019453162107LLU;
	uint64_t t76 = 25LLU;

	t76 = (((x3001-x3002)/x3003)<<x3004);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3021 = 109U;
	volatile uint8_t x3023 = 39U;
	volatile int32_t t77 = 6612;

	t77 = (((x3021-x3022)/x3023)<<x3024);

	if (t77 != 5120) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3041 = -1;
	int16_t x3044 = 1;
	uint32_t t78 = 14126575U;

	t78 = (((x3041-x3042)/x3043)<<x3044);

	if (t78 != 33685002U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x3058 = 24665U;
	volatile uint64_t x3059 = 24440267832442378LLU;
	uint64_t t79 = 169695889069335LLU;

	t79 = (((x3057-x3058)/x3059)<<x3060);

	if (t79 != 3016LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3085 = UINT16_MAX;
	uint32_t x3086 = 428241U;
	static int8_t x3087 = -4;
	volatile uint32_t t80 = 1335255U;

	t80 = (((x3085-x3086)/x3087)<<x3088);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x3089 = 60186LLU;
	int64_t x3090 = INT64_MAX;
	int16_t x3091 = 2450;
	static uint64_t t81 = 15006729760486LLU;

	t81 = (((x3089-x3090)/x3091)<<x3092);

	if (t81 != 60234266363133616LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3110 = 236692198978874LL;
	int64_t x3111 = INT64_MIN;
	volatile uint8_t x3112 = 0U;

	t82 = (((x3109-x3110)/x3111)<<x3112);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3229 = -95691446;
	static uint64_t x3230 = UINT64_MAX;
	uint8_t x3231 = 29U;
	static volatile int16_t x3232 = 2;

	t83 = (((x3229-x3230)/x3231)<<x3232);

	if (t83 != 2544378492912256572LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3245 = 3U;
	int16_t x3246 = -1;
	int64_t x3247 = INT64_MIN;
	uint16_t x3248 = 15U;
	int64_t t84 = -194945345LL;

	t84 = (((x3245-x3246)/x3247)<<x3248);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x3261 = -1LL;
	int64_t x3262 = -1LL;
	volatile uint32_t x3263 = 83U;
	int32_t x3264 = 0;
	static volatile int64_t t85 = 2499385592LL;

	t85 = (((x3261-x3262)/x3263)<<x3264);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3266 = -1;
	int64_t x3267 = INT64_MIN;
	volatile uint16_t x3268 = 1U;
	static int64_t t86 = -242947436651970LL;

	t86 = (((x3265-x3266)/x3267)<<x3268);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3297 = 2851U;
	uint32_t x3299 = 107U;
	int32_t x3300 = 0;
	uint32_t t87 = 68526U;

	t87 = (((x3297-x3298)/x3299)<<x3300);

	if (t87 != 13U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x3325 = 8795U;
	uint8_t x3326 = UINT8_MAX;
	static int32_t x3327 = 19838;
	uint32_t x3328 = 2U;
	int32_t t88 = 1;

	t88 = (((x3325-x3326)/x3327)<<x3328);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3377 = 234;
	int64_t x3379 = INT64_MIN;
	uint32_t x3380 = 2U;
	volatile uint64_t t89 = 1070288852LLU;

	t89 = (((x3377-x3378)/x3379)<<x3380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x3453 = 16U;
	int16_t x3454 = INT16_MAX;
	int8_t x3455 = -1;
	uint32_t x3456 = 0U;
	int32_t t90 = -73455362;

	t90 = (((x3453-x3454)/x3455)<<x3456);

	if (t90 != 32751) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x3486 = INT16_MIN;
	uint64_t x3487 = 19324176548213957LLU;
	uint64_t t91 = 1968721097926777814LLU;

	t91 = (((x3485-x3486)/x3487)<<x3488);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3489 = INT64_MIN;
	uint8_t x3492 = 1U;
	int64_t t92 = 316597599LL;

	t92 = (((x3489-x3490)/x3491)<<x3492);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3625 = 4U;
	volatile int16_t x3626 = 13;
	volatile int32_t t93 = -795;

	t93 = (((x3625-x3626)/x3627)<<x3628);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x3641 = -1;
	volatile int8_t x3642 = 1;
	int16_t x3643 = -455;
	int32_t t94 = -8;

	t94 = (((x3641-x3642)/x3643)<<x3644);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3653 = INT16_MIN;
	uint32_t x3654 = UINT32_MAX;
	int16_t x3655 = INT16_MIN;
	int16_t x3656 = 0;
	volatile uint32_t t95 = 738U;

	t95 = (((x3653-x3654)/x3655)<<x3656);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x3769 = 34U;
	uint32_t x3770 = 90838U;
	int16_t x3771 = -1;
	static int8_t x3772 = 1;
	volatile uint32_t t96 = 26614U;

	t96 = (((x3769-x3770)/x3771)<<x3772);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x3853 = 23824971U;
	static int32_t x3854 = INT32_MIN;
	volatile uint32_t t97 = 635U;

	t97 = (((x3853-x3854)/x3855)<<x3856);

	if (t97 != 8514935U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3865 = INT32_MIN;
	uint8_t x3866 = 0U;
	volatile int32_t x3867 = -539662;
	uint16_t x3868 = 13U;

	t98 = (((x3865-x3866)/x3867)<<x3868);

	if (t98 != 32595968) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3921 = 55U;
	int16_t x3922 = -243;
	int8_t x3923 = INT8_MIN;
	static int8_t x3924 = 1;
	uint32_t t99 = 811U;

	t99 = (((x3921-x3922)/x3923)<<x3924);

	if (t99 != 0U) { NG(); } else { ; }
	
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

