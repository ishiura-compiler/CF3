#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x69 = 8U;
int16_t x78 = INT16_MAX;
int32_t x79 = -440264201;
volatile uint64_t t3 = 214564793510957LLU;
static int64_t x265 = 430LL;
int16_t x267 = -1;
static volatile int64_t t8 = 2245310949132LL;
int64_t x342 = INT64_MIN;
uint32_t x421 = 59619U;
int8_t x424 = INT8_MAX;
int16_t x434 = INT16_MIN;
volatile uint32_t x436 = 1U;
uint16_t x450 = UINT16_MAX;
static int8_t x451 = -1;
int32_t t13 = -49652001;
uint16_t x517 = 1U;
static int8_t x599 = -56;
static volatile uint16_t x601 = 3U;
volatile int16_t x604 = -1;
uint8_t x677 = 1U;
int8_t x706 = -1;
int64_t x708 = INT64_MIN;
int32_t t22 = 253186493;
uint64_t x719 = 862640838704LLU;
uint8_t x720 = 29U;
int32_t t23 = -2;
volatile uint32_t t24 = 14850U;
volatile uint8_t x845 = UINT8_MAX;
volatile uint64_t x847 = UINT64_MAX;
uint64_t x861 = UINT64_MAX;
int8_t x863 = -12;
volatile uint32_t x877 = 7975428U;
int64_t x878 = -1LL;
volatile int32_t x939 = 25769812;
static volatile uint64_t t31 = 2439158900019238421LLU;
static uint64_t x1002 = 203487188LLU;
int16_t x1090 = -19;
volatile int64_t t34 = 185LL;
int64_t x1177 = INT64_MAX;
int16_t x1179 = 0;
uint16_t x1193 = 24U;
uint32_t x1218 = 1184164310U;
volatile uint32_t x1229 = 3775505U;
int16_t x1250 = INT16_MIN;
int8_t x1347 = -1;
int32_t x1348 = INT32_MAX;
int64_t x1353 = INT64_MAX;
int8_t x1371 = 17;
volatile int32_t t46 = 0;
uint64_t x1526 = UINT64_MAX;
uint64_t x1549 = 0LLU;
volatile int32_t t51 = -40752;
volatile uint32_t t53 = UINT32_MAX;
uint8_t x1610 = 0U;
int16_t x1611 = INT16_MIN;
int16_t x1637 = INT16_MAX;
int8_t x1640 = -1;
int32_t t55 = -4031078;
uint8_t x1653 = 3U;
static volatile uint16_t x1673 = 1461U;
uint8_t x1712 = UINT8_MAX;
int8_t x1752 = -1;
static int8_t x1798 = 4;
static uint64_t t60 = 5216272602LLU;
uint16_t x1829 = 14U;
int16_t x1842 = INT16_MIN;
int64_t x1844 = -1LL;
static uint16_t x1876 = 5U;
int64_t x1900 = -643988342657243175LL;
int64_t x1956 = -1LL;
uint16_t x2031 = UINT16_MAX;
static int64_t x2035 = INT64_MAX;
int16_t x2064 = INT16_MAX;
uint16_t x2129 = UINT16_MAX;
int32_t x2163 = -1;
int64_t x2220 = -1LL;
static int32_t x2283 = -120642;
static volatile int32_t t77 = 1;
volatile int32_t t78 = 3;
int16_t x2385 = 1;
uint32_t x2411 = 3085U;
uint32_t x2422 = UINT32_MAX;
volatile uint32_t t83 = 543189532U;
int64_t x2450 = 225365710238755146LL;
uint16_t x2499 = UINT16_MAX;
static int32_t x2500 = -1;
int16_t x2515 = INT16_MAX;
uint8_t x2675 = 13U;
int64_t x2680 = -1LL;
volatile uint32_t x2714 = 22U;
static int32_t t91 = 68;
int32_t x2777 = 147;
int64_t x2780 = -1LL;
int64_t x2881 = INT64_MAX;
uint32_t x2897 = 708126U;
int16_t x2899 = INT16_MAX;
int8_t x2904 = INT8_MIN;
volatile uint32_t t97 = 2782U;
int64_t x2936 = -1078917315190552978LL;
int32_t t99 = 29857313;


void f0(void) {
	static int16_t x9 = 17;
	volatile uint16_t x10 = 3622U;
	static uint8_t x11 = 58U;
	int8_t x12 = -1;
	static int32_t t0 = -3445;

	t0 = (x9>>((x10+x11)%x12));

	if (t0 != 17) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	uint32_t t1 = 0U;

	t1 = (x69>>((x70+x71)%x72));

	if (t1 != 8U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x77 = 54;
	static int8_t x80 = -1;
	volatile int32_t t2 = -100039637;

	t2 = (x77>>((x78+x79)%x80));

	if (t2 != 54) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 1U;
	static volatile uint32_t x151 = 23U;
	int8_t x152 = -1;

	t3 = (x149>>((x150+x151)%x152));

	if (t3 != 1099511627775LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x185 = INT64_MAX;
	volatile int32_t x186 = INT32_MIN;
	static int64_t x187 = INT64_MAX;
	int8_t x188 = 27;
	int64_t t4 = -248LL;

	t4 = (x185>>((x186+x187)%x188));

	if (t4 != 562949953421311LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = 1;
	volatile uint32_t x223 = UINT32_MAX;
	static int32_t x224 = INT32_MAX;
	int32_t t5 = INT32_MAX;

	t5 = (x221>>((x222+x223)%x224));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x249 = 71544574U;
	int8_t x250 = 5;
	volatile int16_t x251 = 19;
	int32_t x252 = -1;
	uint32_t t6 = 492407979U;

	t6 = (x249>>((x250+x251)%x252));

	if (t6 != 71544574U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x266 = 14U;
	static uint16_t x268 = 804U;
	int64_t t7 = 2831229LL;

	t7 = (x265>>((x266+x267)%x268));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x277 = 13556291LL;
	uint16_t x278 = 0U;
	int64_t x279 = INT64_MIN;
	static int32_t x280 = INT32_MIN;

	t8 = (x277>>((x278+x279)%x280));

	if (t8 != 13556291LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x341 = 13LLU;
	uint64_t x343 = UINT64_MAX;
	int64_t x344 = INT64_MAX;
	volatile uint64_t t9 = 9LLU;

	t9 = (x341>>((x342+x343)%x344));

	if (t9 != 13LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x409 = 15U;
	int16_t x410 = -1;
	int8_t x411 = 1;
	volatile int32_t x412 = INT32_MIN;
	int32_t t10 = 6;

	t10 = (x409>>((x410+x411)%x412));

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x422 = UINT16_MAX;
	int16_t x423 = 12;
	uint32_t t11 = 4962U;

	t11 = (x421>>((x422+x423)%x424));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x433 = 1;
	static uint16_t x435 = UINT16_MAX;
	volatile int32_t t12 = 17858896;

	t12 = (x433>>((x434+x435)%x436));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x449 = 2714;
	int32_t x452 = -1;

	t13 = (x449>>((x450+x451)%x452));

	if (t13 != 2714) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x481 = INT8_MAX;
	static int32_t x482 = INT32_MAX;
	int32_t x483 = INT32_MIN;
	int32_t x484 = -1;
	volatile int32_t t14 = -109;

	t14 = (x481>>((x482+x483)%x484));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x518 = UINT8_MAX;
	volatile uint16_t x519 = 1330U;
	static uint16_t x520 = 6U;
	volatile int32_t t15 = 45418;

	t15 = (x517>>((x518+x519)%x520));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x537 = 0LL;
	static volatile uint8_t x538 = 36U;
	uint32_t x539 = UINT32_MAX;
	static volatile uint8_t x540 = 12U;
	static int64_t t16 = 859LL;

	t16 = (x537>>((x538+x539)%x540));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x589 = 49465733658LLU;
	uint8_t x590 = 3U;
	int16_t x591 = 2;
	uint64_t x592 = 145343969707LLU;
	uint64_t t17 = 1047030811842LLU;

	t17 = (x589>>((x590+x591)%x592));

	if (t17 != 1545804176LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x593 = UINT64_MAX;
	int32_t x594 = -1;
	volatile uint16_t x595 = 14U;
	uint16_t x596 = 23U;
	volatile uint64_t t18 = 5777758185053472161LLU;

	t18 = (x593>>((x594+x595)%x596));

	if (t18 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x597 = 66U;
	uint8_t x598 = 9U;
	static volatile int8_t x600 = -1;
	volatile int32_t t19 = 5;

	t19 = (x597>>((x598+x599)%x600));

	if (t19 != 66) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x602 = 416;
	int64_t x603 = 1LL;
	static volatile int32_t t20 = -91;

	t20 = (x601>>((x602+x603)%x604));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x678 = 31U;
	int64_t x679 = 438939130925LL;
	int8_t x680 = -24;
	int32_t t21 = 81;

	t21 = (x677>>((x678+x679)%x680));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x705 = INT8_MAX;
	uint64_t x707 = 7LLU;

	t22 = (x705>>((x706+x707)%x708));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x717 = INT16_MAX;
	int16_t x718 = 0;

	t23 = (x717>>((x718+x719)%x720));

	if (t23 != 15) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x805 = 567393546U;
	int8_t x806 = -20;
	int32_t x807 = 120019382;
	static int16_t x808 = 23;

	t24 = (x805>>((x806+x807)%x808));

	if (t24 != 70924193U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x846 = 15U;
	uint32_t x848 = UINT32_MAX;
	volatile int32_t t25 = 0;

	t25 = (x845>>((x846+x847)%x848));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x849 = INT64_MAX;
	int32_t x850 = 253;
	static int64_t x851 = -207062LL;
	volatile int16_t x852 = -1;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x849>>((x850+x851)%x852));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x862 = -3319;
	volatile uint32_t x864 = 2U;
	uint64_t t27 = 88787420LLU;

	t27 = (x861>>((x862+x863)%x864));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x879 = INT32_MAX;
	int8_t x880 = 1;
	static volatile uint32_t t28 = 6251608U;

	t28 = (x877>>((x878+x879)%x880));

	if (t28 != 7975428U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x901 = 502U;
	volatile uint16_t x902 = 3U;
	int8_t x903 = -5;
	int32_t x904 = -1;
	int32_t t29 = 925;

	t29 = (x901>>((x902+x903)%x904));

	if (t29 != 502) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x937 = 244838668U;
	int16_t x938 = INT16_MIN;
	uint32_t x940 = 5U;
	static uint32_t t30 = 26U;

	t30 = (x937>>((x938+x939)%x940));

	if (t30 != 15302416U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x969 = UINT64_MAX;
	static volatile int8_t x970 = INT8_MIN;
	int64_t x971 = 803LL;
	volatile uint8_t x972 = 110U;

	t31 = (x969>>((x970+x971)%x972));

	if (t31 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1001 = 1;
	int8_t x1003 = -1;
	uint8_t x1004 = 41U;
	volatile int32_t t32 = 66945;

	t32 = (x1001>>((x1002+x1003)%x1004));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1069 = 12;
	static uint32_t x1070 = 1044708U;
	int16_t x1071 = INT16_MIN;
	volatile int8_t x1072 = INT8_MAX;
	volatile int32_t t33 = -6;

	t33 = (x1069>>((x1070+x1071)%x1072));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1089 = INT64_MAX;
	uint8_t x1091 = 82U;
	int32_t x1092 = INT32_MAX;

	t34 = (x1089>>((x1090+x1091)%x1092));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1153 = INT64_MAX;
	uint16_t x1154 = 9U;
	int64_t x1155 = 0LL;
	int32_t x1156 = -35062;
	volatile int64_t t35 = -3333334789702127LL;

	t35 = (x1153>>((x1154+x1155)%x1156));

	if (t35 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1178 = UINT16_MAX;
	volatile uint8_t x1180 = UINT8_MAX;
	int64_t t36 = INT64_MAX;

	t36 = (x1177>>((x1178+x1179)%x1180));

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x1194 = INT8_MAX;
	volatile int32_t x1195 = 0;
	static int8_t x1196 = INT8_MAX;
	static int32_t t37 = -24;

	t37 = (x1193>>((x1194+x1195)%x1196));

	if (t37 != 24) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1217 = 46398670549LLU;
	uint32_t x1219 = 18U;
	uint16_t x1220 = 20U;
	static uint64_t t38 = 5550879478530LLU;

	t38 = (x1217>>((x1218+x1219)%x1220));

	if (t38 != 181244806LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1230 = 3U;
	int8_t x1231 = -41;
	int8_t x1232 = 2;
	uint32_t t39 = 24434801U;

	t39 = (x1229>>((x1230+x1231)%x1232));

	if (t39 != 3775505U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1249 = 0;
	int8_t x1251 = -1;
	int32_t x1252 = -1;
	int32_t t40 = -48433;

	t40 = (x1249>>((x1250+x1251)%x1252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1305 = 3160242U;
	int16_t x1306 = -1;
	static volatile uint8_t x1307 = 31U;
	volatile uint16_t x1308 = UINT16_MAX;
	uint32_t t41 = 6U;

	t41 = (x1305>>((x1306+x1307)%x1308));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1345 = 11607;
	uint32_t x1346 = UINT32_MAX;
	volatile int32_t t42 = 4808213;

	t42 = (x1345>>((x1346+x1347)%x1348));

	if (t42 != 11607) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1354 = 0;
	uint16_t x1355 = 5U;
	volatile int16_t x1356 = INT16_MIN;
	int64_t t43 = -10087126571352035LL;

	t43 = (x1353>>((x1354+x1355)%x1356));

	if (t43 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x1361 = 6U;
	int32_t x1362 = INT32_MAX;
	int16_t x1363 = -1;
	static int8_t x1364 = 60;
	int32_t t44 = -618725106;

	t44 = (x1361>>((x1362+x1363)%x1364));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1369 = 852;
	uint32_t x1370 = UINT32_MAX;
	int16_t x1372 = INT16_MIN;
	volatile int32_t t45 = -741;

	t45 = (x1369>>((x1370+x1371)%x1372));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1497 = INT16_MAX;
	int16_t x1498 = -1;
	int32_t x1499 = 13;
	static volatile uint64_t x1500 = 1LLU;

	t46 = (x1497>>((x1498+x1499)%x1500));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1525 = 3820888366522LLU;
	int8_t x1527 = 8;
	static int16_t x1528 = INT16_MAX;
	uint64_t t47 = 149713LLU;

	t47 = (x1525>>((x1526+x1527)%x1528));

	if (t47 != 29850690363LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1537 = 22619U;
	int16_t x1538 = -1;
	uint8_t x1539 = UINT8_MAX;
	int32_t x1540 = -1;
	volatile uint32_t t48 = 211881464U;

	t48 = (x1537>>((x1538+x1539)%x1540));

	if (t48 != 22619U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1545 = INT64_MAX;
	int64_t x1546 = -1LL;
	int16_t x1547 = 579;
	uint8_t x1548 = 6U;
	int64_t t49 = -3162LL;

	t49 = (x1545>>((x1546+x1547)%x1548));

	if (t49 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x1550 = -1;
	volatile uint32_t x1551 = 46U;
	volatile int64_t x1552 = INT64_MIN;
	uint64_t t50 = 229LLU;

	t50 = (x1549>>((x1550+x1551)%x1552));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1565 = 1U;
	int64_t x1566 = 38262737071098LL;
	int16_t x1567 = -1471;
	static int64_t x1568 = -1LL;

	t51 = (x1565>>((x1566+x1567)%x1568));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x1569 = UINT8_MAX;
	int16_t x1570 = INT16_MIN;
	int32_t x1571 = 4050;
	int32_t x1572 = -1;
	volatile int32_t t52 = 1928;

	t52 = (x1569>>((x1570+x1571)%x1572));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1605 = UINT32_MAX;
	int64_t x1606 = 16583979976LL;
	int64_t x1607 = 434633912541725509LL;
	volatile int64_t x1608 = -1LL;

	t53 = (x1605>>((x1606+x1607)%x1608));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1609 = INT64_MAX;
	int8_t x1612 = INT8_MIN;
	int64_t t54 = INT64_MAX;

	t54 = (x1609>>((x1610+x1611)%x1612));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1638 = -14807LL;
	uint16_t x1639 = 4U;

	t55 = (x1637>>((x1638+x1639)%x1640));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1654 = 246LL;
	int64_t x1655 = 73393815052952LL;
	volatile int64_t x1656 = -1LL;
	int32_t t56 = 5172421;

	t56 = (x1653>>((x1654+x1655)%x1656));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1674 = UINT8_MAX;
	static int16_t x1675 = 22;
	int8_t x1676 = -1;
	int32_t t57 = -591889;

	t57 = (x1673>>((x1674+x1675)%x1676));

	if (t57 != 1461) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1709 = INT32_MAX;
	volatile int16_t x1710 = 3;
	int16_t x1711 = 1;
	int32_t t58 = -112;

	t58 = (x1709>>((x1710+x1711)%x1712));

	if (t58 != 134217727) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x1749 = 53;
	static int16_t x1750 = INT16_MIN;
	int64_t x1751 = INT64_MAX;
	int32_t t59 = 107562;

	t59 = (x1749>>((x1750+x1751)%x1752));

	if (t59 != 53) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x1797 = 23499011003LLU;
	int8_t x1799 = -1;
	int64_t x1800 = -158642LL;

	t60 = (x1797>>((x1798+x1799)%x1800));

	if (t60 != 2937376375LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x1813 = UINT64_MAX;
	int64_t x1814 = -4107989189LL;
	int16_t x1815 = INT16_MIN;
	int16_t x1816 = -1;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (x1813>>((x1814+x1815)%x1816));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1830 = 3;
	volatile int64_t x1831 = INT64_MIN;
	volatile int8_t x1832 = -1;
	int32_t t62 = -767538683;

	t62 = (x1829>>((x1830+x1831)%x1832));

	if (t62 != 14) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x1841 = 29U;
	static int64_t x1843 = INT64_MAX;
	volatile int32_t t63 = 93;

	t63 = (x1841>>((x1842+x1843)%x1844));

	if (t63 != 29) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x1861 = INT64_MAX;
	uint8_t x1862 = 0U;
	int8_t x1863 = 1;
	volatile int64_t x1864 = INT64_MIN;
	int64_t t64 = -12763122074143576LL;

	t64 = (x1861>>((x1862+x1863)%x1864));

	if (t64 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x1873 = 1;
	static volatile int32_t x1874 = -1;
	uint64_t x1875 = UINT64_MAX;
	static volatile int32_t t65 = 226684;

	t65 = (x1873>>((x1874+x1875)%x1876));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1897 = 5290;
	volatile uint32_t x1898 = 1U;
	static uint32_t x1899 = UINT32_MAX;
	static int32_t t66 = 12057;

	t66 = (x1897>>((x1898+x1899)%x1900));

	if (t66 != 5290) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x1953 = 29LL;
	int64_t x1954 = -1LL;
	int8_t x1955 = 51;
	volatile int64_t t67 = -207185LL;

	t67 = (x1953>>((x1954+x1955)%x1956));

	if (t67 != 29LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1977 = 1595;
	volatile uint8_t x1978 = 6U;
	int32_t x1979 = -1;
	static uint64_t x1980 = UINT64_MAX;
	int32_t t68 = -12318;

	t68 = (x1977>>((x1978+x1979)%x1980));

	if (t68 != 49) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2029 = INT64_MAX;
	uint64_t x2030 = UINT64_MAX;
	uint32_t x2032 = 59U;
	volatile int64_t t69 = -11301244980185LL;

	t69 = (x2029>>((x2030+x2031)%x2032));

	if (t69 != 524287LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2033 = 153U;
	int16_t x2034 = -13034;
	int8_t x2036 = -1;
	volatile int32_t t70 = -9974;

	t70 = (x2033>>((x2034+x2035)%x2036));

	if (t70 != 153) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2061 = 122;
	int32_t x2062 = -1;
	uint64_t x2063 = UINT64_MAX;
	volatile int32_t t71 = -4;

	t71 = (x2061>>((x2062+x2063)%x2064));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2065 = INT64_MAX;
	uint64_t x2066 = 13851LLU;
	int8_t x2067 = INT8_MAX;
	int32_t x2068 = 3;
	int64_t t72 = 1LL;

	t72 = (x2065>>((x2066+x2067)%x2068));

	if (t72 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x2130 = 3U;
	int16_t x2131 = -1;
	int16_t x2132 = 25;
	int32_t t73 = 1051;

	t73 = (x2129>>((x2130+x2131)%x2132));

	if (t73 != 16383) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2161 = INT64_MAX;
	static uint32_t x2162 = 995U;
	volatile uint16_t x2164 = 1U;
	int64_t t74 = INT64_MAX;

	t74 = (x2161>>((x2162+x2163)%x2164));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2177 = 12;
	volatile uint64_t x2178 = UINT64_MAX;
	int32_t x2179 = INT32_MAX;
	int8_t x2180 = 1;
	int32_t t75 = 777;

	t75 = (x2177>>((x2178+x2179)%x2180));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2217 = 1;
	int16_t x2218 = INT16_MAX;
	static int16_t x2219 = -1;
	int32_t t76 = 6;

	t76 = (x2217>>((x2218+x2219)%x2220));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2281 = 1U;
	int64_t x2282 = 141931LL;
	int64_t x2284 = 4LL;

	t77 = (x2281>>((x2282+x2283)%x2284));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2345 = 44;
	static int8_t x2346 = -1;
	int8_t x2347 = 1;
	int8_t x2348 = -1;

	t78 = (x2345>>((x2346+x2347)%x2348));

	if (t78 != 44) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2381 = INT64_MAX;
	static volatile int32_t x2382 = 4937491;
	static uint64_t x2383 = 1624LLU;
	volatile uint8_t x2384 = UINT8_MAX;
	int64_t t79 = 5859126LL;

	t79 = (x2381>>((x2382+x2383)%x2384));

	if (t79 != 8796093022207LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x2386 = 13U;
	static volatile uint8_t x2387 = 4U;
	int16_t x2388 = -1;
	int32_t t80 = -14952818;

	t80 = (x2385>>((x2386+x2387)%x2388));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2389 = INT64_MAX;
	int64_t x2390 = -1LL;
	int16_t x2391 = -5;
	static int8_t x2392 = -1;
	volatile int64_t t81 = INT64_MAX;

	t81 = (x2389>>((x2390+x2391)%x2392));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x2409 = 3643350670896LLU;
	int16_t x2410 = -1;
	int64_t x2412 = -2LL;
	uint64_t t82 = 196LLU;

	t82 = (x2409>>((x2410+x2411)%x2412));

	if (t82 != 3643350670896LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2421 = 6475416U;
	static uint8_t x2423 = 16U;
	int64_t x2424 = 272219193LL;

	t83 = (x2421>>((x2422+x2423)%x2424));

	if (t83 != 197U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2449 = UINT16_MAX;
	static uint32_t x2451 = 201109417U;
	uint8_t x2452 = 31U;
	volatile int32_t t84 = 448201055;

	t84 = (x2449>>((x2450+x2451)%x2452));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x2497 = 185183322U;
	static int32_t x2498 = INT32_MIN;
	static uint32_t t85 = 22974U;

	t85 = (x2497>>((x2498+x2499)%x2500));

	if (t85 != 185183322U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2513 = 3570;
	int8_t x2514 = -29;
	int8_t x2516 = 4;
	volatile int32_t t86 = -1;

	t86 = (x2513>>((x2514+x2515)%x2516));

	if (t86 != 892) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x2533 = 16U;
	volatile int16_t x2534 = INT16_MIN;
	int8_t x2535 = INT8_MAX;
	uint64_t x2536 = 3LLU;
	int32_t t87 = -349;

	t87 = (x2533>>((x2534+x2535)%x2536));

	if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2557 = UINT16_MAX;
	int8_t x2558 = INT8_MIN;
	int32_t x2559 = INT32_MAX;
	static uint8_t x2560 = 4U;
	volatile int32_t t88 = 616;

	t88 = (x2557>>((x2558+x2559)%x2560));

	if (t88 != 8191) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2673 = INT8_MAX;
	int16_t x2674 = -1;
	int16_t x2676 = INT16_MAX;
	static volatile int32_t t89 = 80083;

	t89 = (x2673>>((x2674+x2675)%x2676));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x2677 = 0;
	volatile int8_t x2678 = 0;
	int8_t x2679 = -36;
	volatile int32_t t90 = -29;

	t90 = (x2677>>((x2678+x2679)%x2680));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2713 = INT8_MAX;
	int8_t x2715 = INT8_MAX;
	volatile uint16_t x2716 = 24U;

	t91 = (x2713>>((x2714+x2715)%x2716));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x2778 = 8U;
	int16_t x2779 = INT16_MIN;
	int32_t t92 = -146147;

	t92 = (x2777>>((x2778+x2779)%x2780));

	if (t92 != 147) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x2821 = INT64_MAX;
	uint8_t x2822 = 3U;
	uint32_t x2823 = UINT32_MAX;
	volatile uint64_t x2824 = 1879573926LLU;
	volatile int64_t t93 = -97762982889454LL;

	t93 = (x2821>>((x2822+x2823)%x2824));

	if (t93 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2882 = -1;
	int64_t x2883 = 11807LL;
	static int8_t x2884 = INT8_MIN;
	static int64_t t94 = -30014410617805LL;

	t94 = (x2881>>((x2882+x2883)%x2884));

	if (t94 != 8589934591LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2898 = 0;
	static int16_t x2900 = -1;
	uint32_t t95 = 151393406U;

	t95 = (x2897>>((x2898+x2899)%x2900));

	if (t95 != 708126U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2901 = 0;
	uint8_t x2902 = 28U;
	int32_t x2903 = 2;
	volatile int32_t t96 = 4949;

	t96 = (x2901>>((x2902+x2903)%x2904));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x2921 = 4737530U;
	static uint8_t x2922 = 15U;
	int8_t x2923 = -9;
	int32_t x2924 = INT32_MAX;

	t97 = (x2921>>((x2922+x2923)%x2924));

	if (t97 != 74023U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2933 = 264880710U;
	volatile uint64_t x2934 = UINT64_MAX;
	int64_t x2935 = 11LL;
	static volatile uint32_t t98 = 52U;

	t98 = (x2933>>((x2934+x2935)%x2936));

	if (t98 != 258672U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x2965 = UINT8_MAX;
	int8_t x2966 = 15;
	uint32_t x2967 = 453583889U;
	static uint32_t x2968 = 35U;

	t99 = (x2965>>((x2966+x2967)%x2968));

	if (t99 != 15) { NG(); } else { ; }
	
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

