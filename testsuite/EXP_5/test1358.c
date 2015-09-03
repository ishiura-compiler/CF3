#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 195363594465391LLU;
static volatile uint16_t x99 = 1U;
uint16_t x123 = 1224U;
uint8_t x124 = 26U;
volatile int32_t t5 = 1395781;
int64_t x182 = INT64_MIN;
int8_t x295 = INT8_MIN;
int16_t x389 = 833;
volatile uint16_t x403 = UINT16_MAX;
uint32_t x449 = 406115U;
int8_t x450 = -49;
volatile uint32_t t14 = 24U;
int64_t x543 = INT64_MAX;
int8_t x544 = -1;
volatile uint32_t t16 = 8U;
volatile uint32_t x621 = 51517U;
volatile int16_t x622 = -2724;
int32_t t22 = -468;
int8_t x817 = 11;
int16_t x890 = INT16_MIN;
volatile uint16_t x892 = 31U;
int8_t x981 = 1;
uint32_t x983 = UINT32_MAX;
int16_t x991 = -1;
static int16_t x1025 = 6140;
int32_t x1026 = -3;
int8_t x1061 = 3;
uint32_t x1148 = UINT32_MAX;
volatile uint64_t x1161 = UINT64_MAX;
uint64_t t32 = UINT64_MAX;
int16_t x1233 = INT16_MAX;
int8_t x1241 = 35;
static int16_t x1242 = INT16_MIN;
static uint64_t x1261 = UINT64_MAX;
int16_t x1306 = -1;
uint64_t x1313 = 3719223LLU;
volatile int64_t t39 = 6733LL;
int16_t x1513 = 0;
static uint64_t x1564 = UINT64_MAX;
volatile uint64_t t42 = 819771LLU;
int16_t x1597 = INT16_MAX;
static uint32_t x1606 = 203U;
uint8_t x1612 = 7U;
uint16_t x1661 = 0U;
int64_t x1663 = -55LL;
int32_t t46 = -775448959;
uint64_t x1687 = UINT64_MAX;
int8_t x1688 = 11;
uint8_t x1695 = 3U;
volatile uint16_t x1696 = 2U;
volatile int16_t x1718 = INT16_MIN;
int32_t x1719 = 31779;
static uint8_t x1720 = 1U;
int16_t x1736 = -1;
uint8_t x1817 = 39U;
int32_t t52 = -27847762;
static int16_t x1854 = 4;
uint8_t x1856 = 3U;
volatile uint8_t x1861 = UINT8_MAX;
int32_t x1953 = INT32_MAX;
int8_t x1955 = -1;
static int16_t x2090 = -4496;
static volatile int8_t x2134 = INT8_MIN;
int8_t x2169 = INT8_MAX;
int32_t t63 = -12967690;
uint32_t x2265 = UINT32_MAX;
uint32_t x2290 = UINT32_MAX;
volatile uint32_t t65 = 1355259245U;
static uint8_t x2317 = 30U;
volatile uint64_t t68 = 441848369657LLU;
int64_t x2390 = -1381704612LL;
int8_t x2433 = INT8_MAX;
int8_t x2435 = -1;
volatile int32_t t71 = -64299260;
volatile int16_t x2437 = 79;
static volatile int64_t x2446 = INT64_MIN;
int32_t x2526 = -1;
int32_t t74 = -7122305;
static uint64_t x2535 = UINT64_MAX;
int32_t t75 = 25377876;
static uint8_t x2545 = 30U;
uint16_t x2546 = 13443U;
int32_t x2548 = 12;
static int64_t x2567 = -137106445078952LL;
int16_t x2655 = INT16_MIN;
volatile uint32_t x2668 = UINT32_MAX;
uint16_t x2673 = UINT16_MAX;
int64_t x2674 = -1LL;
int32_t t82 = 150921;
int32_t x2684 = -1;
static uint32_t x2685 = UINT32_MAX;
uint8_t x2698 = 70U;
uint16_t x2711 = 6U;
static int32_t t86 = -14482;
uint32_t x2756 = 7U;
static int8_t x2838 = -1;
int64_t x2874 = -15244585540097326LL;
int16_t x2875 = INT16_MIN;
int8_t x2891 = 5;
int8_t x2968 = -1;
uint8_t x3017 = 1U;
int32_t x3034 = -1;
int32_t t94 = 7083;
uint32_t x3061 = 88075U;
volatile uint8_t x3083 = 26U;


void f0(void) {
	volatile uint32_t x21 = 1646118426U;
	int32_t x22 = 127173;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = UINT64_MAX;
	static uint32_t t0 = 537571614U;

	t0 = (x21<<((x22<x23)+x24));

	if (t0 != 1646118426U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x69 = 13624757LLU;
	volatile int16_t x70 = INT16_MIN;
	uint8_t x71 = 124U;
	volatile int8_t x72 = -1;

	t1 = (x69<<((x70<x71)+x72));

	if (t1 != 13624757LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x89 = 3U;
	int64_t x90 = -1LL;
	uint32_t x91 = 5794U;
	static int32_t x92 = 1;
	volatile int32_t t2 = -3224;

	t2 = (x89<<((x90<x91)+x92));

	if (t2 != 12) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x97 = 16155LL;
	int8_t x98 = -1;
	int16_t x100 = -1;
	int64_t t3 = -1LL;

	t3 = (x97<<((x98<x99)+x100));

	if (t3 != 16155LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x121 = 25318162450740LLU;
	uint16_t x122 = 511U;
	static uint64_t t4 = 159772LLU;

	t4 = (x121<<((x122<x123)+x124));

	if (t4 != 3945331710677221376LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x165 = INT8_MAX;
	uint64_t x166 = 36666LLU;
	uint32_t x167 = 550628145U;
	int64_t x168 = -1LL;

	t5 = (x165<<((x166<x167)+x168));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x181 = 0;
	uint32_t x183 = 32313U;
	volatile uint32_t x184 = UINT32_MAX;
	volatile int32_t t6 = -1;

	t6 = (x181<<((x182<x183)+x184));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x293 = 4;
	uint64_t x294 = 8152514966LLU;
	volatile int8_t x296 = -1;
	volatile int32_t t7 = -3060;

	t7 = (x293<<((x294<x295)+x296));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x390 = -123285374517116LL;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;
	static int32_t t8 = -254298330;

	t8 = (x389<<((x390<x391)+x392));

	if (t8 != 833) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x401 = 668078LLU;
	uint64_t x402 = 12017421LLU;
	volatile uint8_t x404 = 1U;
	static volatile uint64_t t9 = 1707685970530LLU;

	t9 = (x401<<((x402<x403)+x404));

	if (t9 != 1336156LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x409 = UINT64_MAX;
	int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	uint32_t x412 = UINT32_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x409<<((x410<x411)+x412));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x433 = 3;
	static volatile uint16_t x434 = UINT16_MAX;
	int8_t x435 = 25;
	static int8_t x436 = 1;
	int32_t t11 = -11;

	t11 = (x433<<((x434<x435)+x436));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x437 = UINT32_MAX;
	uint32_t x438 = 1U;
	static volatile int32_t x439 = INT32_MAX;
	int64_t x440 = 0LL;
	uint32_t t12 = 5073249U;

	t12 = (x437<<((x438<x439)+x440));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x451 = 1481LL;
	int16_t x452 = -1;
	static uint32_t t13 = 168330287U;

	t13 = (x449<<((x450<x451)+x452));

	if (t13 != 406115U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x453 = 2U;
	volatile int64_t x454 = -10212563419365339LL;
	static int32_t x455 = 135;
	uint32_t x456 = UINT32_MAX;

	t14 = (x453<<((x454<x455)+x456));

	if (t14 != 2U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x493 = UINT32_MAX;
	uint64_t x494 = UINT64_MAX;
	static uint32_t x495 = UINT32_MAX;
	int16_t x496 = 22;
	uint32_t t15 = 22U;

	t15 = (x493<<((x494<x495)+x496));

	if (t15 != 4290772992U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x541 = 9U;
	int32_t x542 = INT32_MIN;

	t16 = (x541<<((x542<x543)+x544));

	if (t16 != 9U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x569 = 3;
	volatile uint16_t x570 = UINT16_MAX;
	int8_t x571 = -49;
	uint8_t x572 = 0U;
	static int32_t t17 = 27297188;

	t17 = (x569<<((x570<x571)+x572));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x623 = -1;
	static int16_t x624 = 29;
	static uint32_t t18 = 20905U;

	t18 = (x621<<((x622<x623)+x624));

	if (t18 != 1073741824U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x669 = UINT16_MAX;
	int32_t x670 = INT32_MIN;
	static int32_t x671 = INT32_MIN;
	uint8_t x672 = 0U;
	volatile int32_t t19 = 212;

	t19 = (x669<<((x670<x671)+x672));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x693 = 1U;
	int8_t x694 = INT8_MIN;
	static int16_t x695 = -51;
	volatile int16_t x696 = 0;
	volatile uint32_t t20 = 87299U;

	t20 = (x693<<((x694<x695)+x696));

	if (t20 != 2U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x733 = INT8_MAX;
	int16_t x734 = INT16_MAX;
	static int8_t x735 = INT8_MAX;
	int8_t x736 = 1;
	int32_t t21 = -3772;

	t21 = (x733<<((x734<x735)+x736));

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x761 = 53;
	int64_t x762 = INT64_MIN;
	uint32_t x763 = UINT32_MAX;
	uint64_t x764 = UINT64_MAX;

	t22 = (x761<<((x762<x763)+x764));

	if (t22 != 53) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x801 = UINT16_MAX;
	uint8_t x802 = UINT8_MAX;
	static int64_t x803 = INT64_MAX;
	uint32_t x804 = UINT32_MAX;
	volatile int32_t t23 = 114334;

	t23 = (x801<<((x802<x803)+x804));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x818 = 2046U;
	static int16_t x819 = INT16_MAX;
	uint8_t x820 = 2U;
	int32_t t24 = 88968;

	t24 = (x817<<((x818<x819)+x820));

	if (t24 != 88) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x881 = 151U;
	static volatile int32_t x882 = 2314;
	int32_t x883 = INT32_MAX;
	int32_t x884 = -1;
	volatile int32_t t25 = 2834;

	t25 = (x881<<((x882<x883)+x884));

	if (t25 != 151) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x889 = 13LL;
	int32_t x891 = -1;
	static volatile int64_t t26 = -2120803741602LL;

	t26 = (x889<<((x890<x891)+x892));

	if (t26 != 55834574848LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x982 = -11;
	static volatile int16_t x984 = -1;
	volatile int32_t t27 = -3807;

	t27 = (x981<<((x982<x983)+x984));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x989 = 25U;
	int64_t x990 = INT64_MIN;
	static volatile int8_t x992 = -1;
	int32_t t28 = 90;

	t28 = (x989<<((x990<x991)+x992));

	if (t28 != 25) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x1027 = INT64_MAX;
	int32_t x1028 = 0;
	int32_t t29 = -40975;

	t29 = (x1025<<((x1026<x1027)+x1028));

	if (t29 != 12280) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1062 = INT8_MAX;
	volatile uint32_t x1063 = 5U;
	uint8_t x1064 = 0U;
	volatile int32_t t30 = -800;

	t30 = (x1061<<((x1062<x1063)+x1064));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint64_t x1145 = 18LLU;
	int32_t x1146 = -1;
	uint16_t x1147 = 58U;
	static volatile uint64_t t31 = 35LLU;

	t31 = (x1145<<((x1146<x1147)+x1148));

	if (t31 != 18LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1162 = 184339U;
	static int64_t x1163 = INT64_MAX;
	static uint32_t x1164 = UINT32_MAX;

	t32 = (x1161<<((x1162<x1163)+x1164));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1234 = 706LLU;
	int16_t x1235 = INT16_MIN;
	static int16_t x1236 = 1;
	volatile int32_t t33 = 1;

	t33 = (x1233<<((x1234<x1235)+x1236));

	if (t33 != 131068) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1243 = INT8_MIN;
	static int8_t x1244 = -1;
	volatile int32_t t34 = -352444112;

	t34 = (x1241<<((x1242<x1243)+x1244));

	if (t34 != 35) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1262 = INT64_MAX;
	int64_t x1263 = INT64_MAX;
	static uint8_t x1264 = 25U;
	uint64_t t35 = 71483308378LLU;

	t35 = (x1261<<((x1262<x1263)+x1264));

	if (t35 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1285 = UINT32_MAX;
	uint64_t x1286 = 245328983563346690LLU;
	static volatile int64_t x1287 = -49058LL;
	static uint32_t x1288 = 12U;
	static uint32_t t36 = 413560057U;

	t36 = (x1285<<((x1286<x1287)+x1288));

	if (t36 != 4294959104U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1305 = 53382505;
	static volatile int64_t x1307 = 123LL;
	int16_t x1308 = 1;
	volatile int32_t t37 = -26623366;

	t37 = (x1305<<((x1306<x1307)+x1308));

	if (t37 != 213530020) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1314 = INT32_MIN;
	int16_t x1315 = 1;
	uint32_t x1316 = UINT32_MAX;
	uint64_t t38 = 1411367519925879398LLU;

	t38 = (x1313<<((x1314<x1315)+x1316));

	if (t38 != 3719223LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1325 = 5277531423LL;
	int32_t x1326 = INT32_MIN;
	static int32_t x1327 = INT32_MIN;
	uint8_t x1328 = 2U;

	t39 = (x1325<<((x1326<x1327)+x1328));

	if (t39 != 21110125692LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1409 = INT64_MAX;
	uint32_t x1410 = 47065061U;
	int32_t x1411 = INT32_MIN;
	int8_t x1412 = -1;
	int64_t t40 = INT64_MAX;

	t40 = (x1409<<((x1410<x1411)+x1412));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x1514 = 21575355;
	volatile int16_t x1515 = INT16_MIN;
	uint8_t x1516 = 27U;
	int32_t t41 = 44456509;

	t41 = (x1513<<((x1514<x1515)+x1516));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1561 = 268778154210408LLU;
	int16_t x1562 = -1;
	int64_t x1563 = INT64_MAX;

	t42 = (x1561<<((x1562<x1563)+x1564));

	if (t42 != 268778154210408LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1598 = -1;
	volatile uint32_t x1599 = UINT32_MAX;
	volatile uint8_t x1600 = 15U;
	static int32_t t43 = 80757;

	t43 = (x1597<<((x1598<x1599)+x1600));

	if (t43 != 1073709056) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1605 = 30925U;
	int8_t x1607 = INT8_MIN;
	int16_t x1608 = -1;
	static int32_t t44 = 0;

	t44 = (x1605<<((x1606<x1607)+x1608));

	if (t44 != 30925) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1609 = 17U;
	int8_t x1610 = INT8_MIN;
	uint16_t x1611 = 5944U;
	volatile int32_t t45 = 217023;

	t45 = (x1609<<((x1610<x1611)+x1612));

	if (t45 != 4352) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1662 = INT32_MIN;
	uint64_t x1664 = UINT64_MAX;

	t46 = (x1661<<((x1662<x1663)+x1664));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1685 = UINT32_MAX;
	int8_t x1686 = 9;
	volatile uint32_t t47 = 3U;

	t47 = (x1685<<((x1686<x1687)+x1688));

	if (t47 != 4294963200U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x1693 = 110791LLU;
	volatile int16_t x1694 = INT16_MAX;
	uint64_t t48 = 1614077607447LLU;

	t48 = (x1693<<((x1694<x1695)+x1696));

	if (t48 != 443164LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x1717 = 1264984106216LLU;
	uint64_t t49 = 2126094205LLU;

	t49 = (x1717<<((x1718<x1719)+x1720));

	if (t49 != 5059936424864LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x1733 = 23608;
	static uint16_t x1734 = UINT16_MAX;
	volatile int64_t x1735 = INT64_MAX;
	int32_t t50 = 0;

	t50 = (x1733<<((x1734<x1735)+x1736));

	if (t50 != 23608) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1741 = 7597353244971LLU;
	int64_t x1742 = INT64_MIN;
	static uint8_t x1743 = 4U;
	volatile int32_t x1744 = -1;
	volatile uint64_t t51 = 2594LLU;

	t51 = (x1741<<((x1742<x1743)+x1744));

	if (t51 != 7597353244971LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1818 = INT64_MIN;
	static volatile uint32_t x1819 = 185U;
	volatile int32_t x1820 = -1;

	t52 = (x1817<<((x1818<x1819)+x1820));

	if (t52 != 39) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1853 = 3583LLU;
	volatile int16_t x1855 = -1;
	uint64_t t53 = 2278439LLU;

	t53 = (x1853<<((x1854<x1855)+x1856));

	if (t53 != 28664LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1862 = UINT16_MAX;
	int16_t x1863 = 7;
	uint8_t x1864 = 3U;
	volatile int32_t t54 = 67191;

	t54 = (x1861<<((x1862<x1863)+x1864));

	if (t54 != 2040) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1877 = UINT8_MAX;
	volatile int8_t x1878 = 41;
	uint64_t x1879 = UINT64_MAX;
	int64_t x1880 = -1LL;
	int32_t t55 = 117;

	t55 = (x1877<<((x1878<x1879)+x1880));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1881 = UINT16_MAX;
	int64_t x1882 = -1060LL;
	static int32_t x1883 = -1;
	static uint64_t x1884 = UINT64_MAX;
	int32_t t56 = 133689012;

	t56 = (x1881<<((x1882<x1883)+x1884));

	if (t56 != 65535) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x1954 = -443;
	uint64_t x1956 = UINT64_MAX;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x1953<<((x1954<x1955)+x1956));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x1993 = 2008LLU;
	volatile int8_t x1994 = -7;
	int16_t x1995 = INT16_MAX;
	static volatile uint8_t x1996 = 3U;
	uint64_t t58 = 454461329460LLU;

	t58 = (x1993<<((x1994<x1995)+x1996));

	if (t58 != 32128LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2001 = UINT16_MAX;
	static int64_t x2002 = INT64_MIN;
	static int16_t x2003 = INT16_MIN;
	volatile uint32_t x2004 = 1U;
	static int32_t t59 = 8;

	t59 = (x2001<<((x2002<x2003)+x2004));

	if (t59 != 262140) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2077 = UINT64_MAX;
	int8_t x2078 = INT8_MIN;
	uint32_t x2079 = 30392U;
	uint8_t x2080 = 2U;
	volatile uint64_t t60 = 476LLU;

	t60 = (x2077<<((x2078<x2079)+x2080));

	if (t60 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2089 = UINT16_MAX;
	int8_t x2091 = INT8_MIN;
	static int8_t x2092 = 1;
	volatile int32_t t61 = -22570194;

	t61 = (x2089<<((x2090<x2091)+x2092));

	if (t61 != 262140) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2133 = 28368266LLU;
	int32_t x2135 = INT32_MAX;
	uint8_t x2136 = 0U;
	static volatile uint64_t t62 = 751893LLU;

	t62 = (x2133<<((x2134<x2135)+x2136));

	if (t62 != 56736532LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2170 = INT8_MIN;
	static int16_t x2171 = -1;
	uint8_t x2172 = 0U;

	t63 = (x2169<<((x2170<x2171)+x2172));

	if (t63 != 254) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x2266 = INT64_MAX;
	volatile int8_t x2267 = 22;
	uint32_t x2268 = 17U;
	volatile uint32_t t64 = 5793884U;

	t64 = (x2265<<((x2266<x2267)+x2268));

	if (t64 != 4294836224U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2289 = UINT32_MAX;
	uint64_t x2291 = 14344LLU;
	int32_t x2292 = 7;

	t65 = (x2289<<((x2290<x2291)+x2292));

	if (t65 != 4294967168U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2297 = INT16_MAX;
	static uint16_t x2298 = 60U;
	volatile uint16_t x2299 = 0U;
	int16_t x2300 = 4;
	int32_t t66 = -365462810;

	t66 = (x2297<<((x2298<x2299)+x2300));

	if (t66 != 524272) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2318 = -1;
	int32_t x2319 = 1;
	volatile int64_t x2320 = -1LL;
	volatile int32_t t67 = 31561993;

	t67 = (x2317<<((x2318<x2319)+x2320));

	if (t67 != 30) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2337 = 168LLU;
	static int32_t x2338 = INT32_MAX;
	uint64_t x2339 = UINT64_MAX;
	int16_t x2340 = -1;

	t68 = (x2337<<((x2338<x2339)+x2340));

	if (t68 != 168LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2389 = INT8_MAX;
	int8_t x2391 = -1;
	volatile int32_t x2392 = -1;
	int32_t t69 = 1664662;

	t69 = (x2389<<((x2390<x2391)+x2392));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x2417 = 1U;
	uint64_t x2418 = 24LLU;
	volatile uint16_t x2419 = 0U;
	uint8_t x2420 = 18U;
	volatile int32_t t70 = -1;

	t70 = (x2417<<((x2418<x2419)+x2420));

	if (t70 != 262144) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x2434 = -29693;
	static int64_t x2436 = 0LL;

	t71 = (x2433<<((x2434<x2435)+x2436));

	if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x2438 = -9;
	int32_t x2439 = 7;
	uint8_t x2440 = 0U;
	volatile int32_t t72 = -427199238;

	t72 = (x2437<<((x2438<x2439)+x2440));

	if (t72 != 158) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x2445 = 0U;
	int8_t x2447 = -1;
	uint8_t x2448 = 0U;
	int32_t t73 = -1902;

	t73 = (x2445<<((x2446<x2447)+x2448));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x2525 = 1;
	uint64_t x2527 = 970LLU;
	int64_t x2528 = 2LL;

	t74 = (x2525<<((x2526<x2527)+x2528));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2533 = INT16_MAX;
	uint8_t x2534 = 33U;
	int32_t x2536 = 0;

	t75 = (x2533<<((x2534<x2535)+x2536));

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2547 = -2414;
	int32_t t76 = 3;

	t76 = (x2545<<((x2546<x2547)+x2548));

	if (t76 != 122880) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2565 = INT16_MAX;
	volatile int64_t x2566 = 362LL;
	uint16_t x2568 = 4U;
	int32_t t77 = 654206;

	t77 = (x2565<<((x2566<x2567)+x2568));

	if (t77 != 524272) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x2577 = INT16_MAX;
	uint64_t x2578 = 377088920193031LLU;
	int8_t x2579 = INT8_MIN;
	int64_t x2580 = -1LL;
	volatile int32_t t78 = 12030;

	t78 = (x2577<<((x2578<x2579)+x2580));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2653 = 32638151LLU;
	int32_t x2654 = INT32_MIN;
	static int16_t x2656 = 28;
	static uint64_t t79 = 509489721LLU;

	t79 = (x2653<<((x2654<x2655)+x2656));

	if (t79 != 17522473893363712LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2661 = UINT16_MAX;
	int16_t x2662 = INT16_MAX;
	uint8_t x2663 = 1U;
	static volatile int16_t x2664 = 8;
	volatile int32_t t80 = -1;

	t80 = (x2661<<((x2662<x2663)+x2664));

	if (t80 != 16776960) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x2665 = 15U;
	int64_t x2666 = INT64_MIN;
	int16_t x2667 = INT16_MIN;
	int32_t t81 = 0;

	t81 = (x2665<<((x2666<x2667)+x2668));

	if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x2675 = 0U;
	int16_t x2676 = -1;

	t82 = (x2673<<((x2674<x2675)+x2676));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x2681 = 10U;
	volatile int16_t x2682 = INT16_MIN;
	static uint8_t x2683 = 1U;
	uint32_t t83 = 88U;

	t83 = (x2681<<((x2682<x2683)+x2684));

	if (t83 != 10U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2686 = INT16_MIN;
	static volatile uint32_t x2687 = UINT32_MAX;
	static int16_t x2688 = -1;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x2685<<((x2686<x2687)+x2688));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2697 = 77U;
	int64_t x2699 = 1006LL;
	int64_t x2700 = 1LL;
	int32_t t85 = 1914211;

	t85 = (x2697<<((x2698<x2699)+x2700));

	if (t85 != 308) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x2709 = 31U;
	int64_t x2710 = 168LL;
	uint16_t x2712 = 0U;

	t86 = (x2709<<((x2710<x2711)+x2712));

	if (t86 != 31) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2753 = UINT16_MAX;
	uint16_t x2754 = 350U;
	static uint16_t x2755 = 1U;
	int32_t t87 = 2;

	t87 = (x2753<<((x2754<x2755)+x2756));

	if (t87 != 8388480) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2837 = 6387231371148014034LLU;
	int32_t x2839 = INT32_MIN;
	uint32_t x2840 = 1U;
	static volatile uint64_t t88 = 6266379347LLU;

	t88 = (x2837<<((x2838<x2839)+x2840));

	if (t88 != 12774462742296028068LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2873 = INT16_MAX;
	uint32_t x2876 = UINT32_MAX;
	volatile int32_t t89 = -365957049;

	t89 = (x2873<<((x2874<x2875)+x2876));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x2889 = 6166U;
	int32_t x2890 = INT32_MIN;
	uint64_t x2892 = UINT64_MAX;
	volatile uint32_t t90 = 554866218U;

	t90 = (x2889<<((x2890<x2891)+x2892));

	if (t90 != 6166U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x2905 = UINT8_MAX;
	volatile uint16_t x2906 = 1U;
	static int16_t x2907 = 526;
	uint16_t x2908 = 3U;
	static int32_t t91 = -98;

	t91 = (x2905<<((x2906<x2907)+x2908));

	if (t91 != 4080) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x2965 = 51790354U;
	int32_t x2966 = -27145;
	static uint8_t x2967 = 0U;
	volatile uint32_t t92 = 10002458U;

	t92 = (x2965<<((x2966<x2967)+x2968));

	if (t92 != 51790354U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3018 = -1;
	uint16_t x3019 = 13183U;
	static int16_t x3020 = -1;
	int32_t t93 = 983416970;

	t93 = (x3017<<((x3018<x3019)+x3020));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3033 = 1U;
	static int32_t x3035 = 92;
	static int32_t x3036 = 0;

	t94 = (x3033<<((x3034<x3035)+x3036));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x3062 = -1303402LL;
	uint64_t x3063 = 3404809383LLU;
	int8_t x3064 = 1;
	static volatile uint32_t t95 = 96U;

	t95 = (x3061<<((x3062<x3063)+x3064));

	if (t95 != 176150U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3077 = 30U;
	int64_t x3078 = INT64_MIN;
	volatile uint16_t x3079 = 2724U;
	static int64_t x3080 = -1LL;
	int32_t t96 = -2416113;

	t96 = (x3077<<((x3078<x3079)+x3080));

	if (t96 != 30) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x3081 = 462435747675908LLU;
	int8_t x3082 = 10;
	int16_t x3084 = -1;
	volatile uint64_t t97 = 6425735206625576LLU;

	t97 = (x3081<<((x3082<x3083)+x3084));

	if (t97 != 462435747675908LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3165 = UINT32_MAX;
	int32_t x3166 = INT32_MIN;
	volatile int16_t x3167 = -4;
	uint16_t x3168 = 10U;
	volatile uint32_t t98 = 0U;

	t98 = (x3165<<((x3166<x3167)+x3168));

	if (t98 != 4294965248U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3181 = 65054043U;
	int32_t x3182 = INT32_MIN;
	int32_t x3183 = INT32_MAX;
	uint64_t x3184 = 0LLU;
	uint32_t t99 = 1U;

	t99 = (x3181<<((x3182<x3183)+x3184));

	if (t99 != 130108086U) { NG(); } else { ; }
	
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

