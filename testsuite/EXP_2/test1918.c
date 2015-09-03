#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 11;
uint8_t x8 = 1U;
volatile int32_t x86 = 1363;
uint8_t x96 = 2U;
int64_t x117 = INT64_MIN;
uint64_t x165 = 8154509496005734LLU;
uint64_t x166 = 5772456335931587921LLU;
static uint8_t x168 = 0U;
volatile uint64_t t7 = 89LLU;
int32_t x290 = INT32_MIN;
int8_t x291 = 59;
static volatile int32_t t8 = -29;
int8_t x458 = INT8_MIN;
static volatile uint32_t x573 = UINT32_MAX;
volatile int16_t x575 = 1;
uint64_t x685 = UINT64_MAX;
uint8_t x687 = 1U;
int16_t x688 = 3;
uint32_t x704 = 0U;
static int8_t x752 = 1;
volatile int64_t t17 = -552997747181LL;
static int64_t x794 = INT64_MIN;
uint64_t t19 = 24990821469LLU;
int64_t t21 = -3273880405216755901LL;
volatile uint32_t t26 = 100U;
int8_t x1060 = 4;
static volatile uint16_t x1093 = 17U;
volatile int32_t t28 = -421582502;
volatile uint8_t x1174 = 3U;
static int32_t x1202 = INT32_MIN;
uint64_t x1242 = 25469LLU;
uint64_t x1355 = 32294574292592830LLU;
uint32_t t36 = 49423137U;
uint64_t x1533 = 914496007841485LLU;
int32_t x1562 = 0;
static int64_t t40 = -109456LL;
uint32_t x1742 = 821156U;
int8_t x1744 = 6;
int16_t x1820 = 9;
uint8_t x1828 = 15U;
int32_t x1851 = -1;
int8_t x1852 = 3;
volatile int64_t t46 = -510555934031839LL;
uint64_t x1982 = 166156336871460LLU;
int32_t x2154 = INT32_MIN;
uint16_t x2155 = UINT16_MAX;
static int16_t x2234 = -322;
int16_t x2282 = INT16_MIN;
static volatile uint8_t x2485 = 3U;
static int8_t x2488 = 0;
int16_t x2561 = 2;
int16_t x2563 = -203;
volatile uint64_t x2714 = 510032972867082841LLU;
int8_t x2715 = INT8_MAX;
volatile uint64_t t59 = 2936455578995929LLU;
uint32_t t60 = 776U;
uint64_t t61 = 2425944698797927LLU;
int64_t x2859 = INT64_MIN;
uint64_t t62 = 212966534872970113LLU;
int16_t x2886 = -1;
static volatile uint8_t x2905 = 56U;
int8_t x2906 = INT8_MAX;
uint64_t x3006 = 4085778452849464LLU;
int8_t x3007 = 0;
uint64_t t65 = 39385107LLU;
int64_t t66 = 6465366LL;
uint64_t x3021 = 87752LLU;
static volatile uint32_t x3022 = UINT32_MAX;
static uint8_t x3185 = 14U;
int64_t x3186 = INT64_MIN;
uint16_t x3187 = 3U;
volatile int64_t t71 = 110958LL;
int8_t x3248 = 13;
int32_t x3347 = INT32_MIN;
static volatile uint8_t x3416 = 32U;
uint16_t x3436 = 3U;
int64_t x3474 = -1LL;
static volatile int32_t x3507 = -1;
volatile uint64_t t81 = 978LLU;
uint32_t x3537 = 1U;
int32_t x3725 = 0;
int32_t x3763 = INT32_MAX;
volatile uint32_t t90 = 44U;
int32_t t91 = -185848;
volatile int32_t x3894 = 544014;
int32_t t94 = 945576377;
uint8_t x3916 = 14U;


void f0(void) {
	int32_t x1 = 193318017;
	uint64_t x2 = UINT64_MAX;
	int32_t x3 = 17108078;
	uint8_t x4 = 12U;
	uint64_t t0 = 1814852486863338585LLU;

	t0 = ((x1%(x2|x3))>>x4);

	if (t0 != 47196LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = -54456868;
	static int32_t t1 = 17164155;

	t1 = ((x5%(x6|x7))>>x8);

	if (t1 != 5) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x21 = 26806784U;
	static uint32_t x22 = 0U;
	static uint8_t x23 = UINT8_MAX;
	uint16_t x24 = 2U;
	volatile uint32_t t2 = 33949U;

	t2 = ((x21%(x22|x23))>>x24);

	if (t2 != 41U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x85 = 0;
	volatile int16_t x87 = INT16_MIN;
	uint16_t x88 = 1U;
	int32_t t3 = 3649;

	t3 = ((x85%(x86|x87))>>x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = 80503331419833541LLU;
	int32_t x95 = -14196350;
	uint64_t t4 = 40982612633LLU;

	t4 = ((x93%(x94|x95))>>x96);

	if (t4 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x118 = UINT16_MAX;
	static int32_t x119 = -1;
	int8_t x120 = 5;
	volatile int64_t t5 = -137023774516601LL;

	t5 = ((x117%(x118|x119))>>x120);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	volatile int32_t x135 = INT32_MAX;
	uint16_t x136 = 1U;
	volatile uint32_t t6 = 36496U;

	t6 = ((x133%(x134|x135))>>x136);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x167 = UINT8_MAX;

	t7 = ((x165%(x166|x167))>>x168);

	if (t7 != 8154509496005734LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x289 = 58;
	uint16_t x292 = 11U;

	t8 = ((x289%(x290|x291))>>x292);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x333 = -62;
	static uint64_t x334 = 7359623625436215LLU;
	volatile uint8_t x335 = 5U;
	int8_t x336 = 2;
	static volatile uint64_t t9 = 2LLU;

	t9 = ((x333%(x334|x335))>>x336);

	if (t9 != 881817091599191LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x405 = 733655378444LLU;
	uint16_t x406 = 8U;
	volatile int32_t x407 = -29;
	int64_t x408 = 26LL;
	volatile uint64_t t10 = 2LLU;

	t10 = ((x405%(x406|x407))>>x408);

	if (t10 != 10932LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x457 = -1LL;
	volatile int16_t x459 = INT16_MAX;
	int8_t x460 = 0;
	int64_t t11 = 46360216280951655LL;

	t11 = ((x457%(x458|x459))>>x460);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x497 = 41352180027622090LLU;
	volatile uint16_t x498 = 2U;
	int8_t x499 = INT8_MAX;
	uint8_t x500 = 42U;
	static uint64_t t12 = 1601217947304LLU;

	t12 = ((x497%(x498|x499))>>x500);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x574 = -171015LL;
	int8_t x576 = 1;
	volatile int64_t t13 = -430274338863477LL;

	t13 = ((x573%(x574|x575))>>x576);

	if (t13 != 48292LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x593 = 1U;
	uint16_t x594 = 1052U;
	int16_t x595 = INT16_MIN;
	uint16_t x596 = 7U;
	volatile uint32_t t14 = 130314U;

	t14 = ((x593%(x594|x595))>>x596);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x686 = 20497316744LLU;
	volatile uint64_t t15 = 1310763LLU;

	t15 = ((x685%(x686|x687))>>x688);

	if (t15 != 1014449870LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MAX;
	volatile int16_t x703 = INT16_MIN;
	volatile int32_t t16 = 13952529;

	t16 = ((x701%(x702|x703))>>x704);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x749 = 9U;
	volatile int64_t x750 = -1LL;
	static int16_t x751 = -1;

	t17 = ((x749%(x750|x751))>>x752);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x773 = 642259544748751905LL;
	int32_t x774 = 112;
	uint16_t x775 = 53U;
	volatile uint8_t x776 = 3U;
	static int64_t t18 = 258343942063299852LL;

	t18 = ((x773%(x774|x775))>>x776);

	if (t18 != 13LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x793 = 987986434121243743LLU;
	volatile uint32_t x795 = 16105U;
	uint64_t x796 = 18LLU;

	t19 = ((x793%(x794|x795))>>x796);

	if (t19 != 3768869148716LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x833 = -1;
	int16_t x834 = INT16_MIN;
	int32_t x835 = INT32_MAX;
	uint8_t x836 = 30U;
	int32_t t20 = -3;

	t20 = ((x833%(x834|x835))>>x836);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x861 = INT32_MAX;
	int64_t x862 = -1LL;
	volatile uint32_t x863 = 32134U;
	uint8_t x864 = 26U;

	t21 = ((x861%(x862|x863))>>x864);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x969 = 87;
	volatile uint8_t x970 = UINT8_MAX;
	int8_t x971 = INT8_MIN;
	static uint8_t x972 = 6U;
	volatile int32_t t22 = 95;

	t22 = ((x969%(x970|x971))>>x972);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x973 = INT8_MAX;
	int16_t x974 = INT16_MIN;
	int16_t x975 = -1;
	static uint16_t x976 = 0U;
	int32_t t23 = 1442;

	t23 = ((x973%(x974|x975))>>x976);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x993 = 3199651U;
	volatile int16_t x994 = 10521;
	int16_t x995 = INT16_MIN;
	uint8_t x996 = 2U;
	volatile uint32_t t24 = 961U;

	t24 = ((x993%(x994|x995))>>x996);

	if (t24 != 799912U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1009 = UINT32_MAX;
	volatile uint16_t x1010 = UINT16_MAX;
	static uint64_t x1011 = UINT64_MAX;
	volatile uint16_t x1012 = 28U;
	volatile uint64_t t25 = 4619398181405330LLU;

	t25 = ((x1009%(x1010|x1011))>>x1012);

	if (t25 != 15LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1017 = UINT32_MAX;
	int8_t x1018 = INT8_MIN;
	uint8_t x1019 = 95U;
	uint8_t x1020 = 0U;

	t26 = ((x1017%(x1018|x1019))>>x1020);

	if (t26 != 32U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1057 = 27U;
	volatile int64_t x1058 = 5982610903LL;
	static int16_t x1059 = INT16_MAX;
	int64_t t27 = -11615LL;

	t27 = ((x1057%(x1058|x1059))>>x1060);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1094 = INT32_MAX;
	int8_t x1095 = -1;
	static uint8_t x1096 = 7U;

	t28 = ((x1093%(x1094|x1095))>>x1096);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1173 = 896919909;
	int32_t x1175 = INT32_MAX;
	int8_t x1176 = 1;
	int32_t t29 = 25860902;

	t29 = ((x1173%(x1174|x1175))>>x1176);

	if (t29 != 448459954) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1185 = INT16_MAX;
	uint8_t x1186 = UINT8_MAX;
	uint8_t x1187 = 3U;
	volatile uint8_t x1188 = 0U;
	static int32_t t30 = 0;

	t30 = ((x1185%(x1186|x1187))>>x1188);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1201 = 10U;
	int64_t x1203 = INT64_MAX;
	static uint32_t x1204 = 18U;
	int64_t t31 = 33914416LL;

	t31 = ((x1201%(x1202|x1203))>>x1204);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x1241 = 2U;
	uint16_t x1243 = 284U;
	volatile int8_t x1244 = 0;
	uint64_t t32 = 8923251206840343235LLU;

	t32 = ((x1241%(x1242|x1243))>>x1244);

	if (t32 != 2LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1329 = 48970170LLU;
	int16_t x1330 = -67;
	int64_t x1331 = 99022622342LL;
	uint8_t x1332 = 1U;
	uint64_t t33 = 2712715507LLU;

	t33 = ((x1329%(x1330|x1331))>>x1332);

	if (t33 != 24485085LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1353 = -1;
	int16_t x1354 = 5;
	static volatile int8_t x1356 = 3;
	volatile uint64_t t34 = 7814220963605LLU;

	t34 = ((x1353%(x1354|x1355))>>x1356);

	if (t34 != 817769079880639LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1381 = 2934U;
	int16_t x1382 = INT16_MAX;
	volatile int32_t x1383 = INT32_MIN;
	static uint8_t x1384 = 7U;
	volatile int32_t t35 = 2742714;

	t35 = ((x1381%(x1382|x1383))>>x1384);

	if (t35 != 22) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1401 = UINT32_MAX;
	int32_t x1402 = INT32_MIN;
	uint32_t x1403 = UINT32_MAX;
	uint32_t x1404 = 2U;

	t36 = ((x1401%(x1402|x1403))>>x1404);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1534 = INT32_MIN;
	int8_t x1535 = INT8_MAX;
	int8_t x1536 = 0;
	static uint64_t t37 = 45175LLU;

	t37 = ((x1533%(x1534|x1535))>>x1536);

	if (t37 != 914496007841485LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1561 = INT64_MIN;
	int32_t x1563 = -1;
	uint16_t x1564 = 3U;
	volatile int64_t t38 = -1LL;

	t38 = ((x1561%(x1562|x1563))>>x1564);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1689 = 503681663900800LL;
	uint32_t x1690 = 117U;
	int64_t x1691 = -1LL;
	static int32_t x1692 = 14;
	volatile int64_t t39 = -4LL;

	t39 = ((x1689%(x1690|x1691))>>x1692);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1701 = 988822LL;
	int64_t x1702 = INT64_MAX;
	int32_t x1703 = INT32_MAX;
	static volatile uint8_t x1704 = 53U;

	t40 = ((x1701%(x1702|x1703))>>x1704);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1737 = 2;
	uint64_t x1738 = UINT64_MAX;
	int64_t x1739 = 3647858706839LL;
	uint8_t x1740 = 4U;
	volatile uint64_t t41 = 5379838906939341LLU;

	t41 = ((x1737%(x1738|x1739))>>x1740);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1741 = UINT32_MAX;
	uint8_t x1743 = UINT8_MAX;
	static uint32_t t42 = 1443U;

	t42 = ((x1741%(x1742|x1743))>>x1744);

	if (t42 != 10417U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1745 = 55;
	int8_t x1746 = -56;
	int32_t x1747 = 30085;
	int16_t x1748 = 2;
	int32_t t43 = 20461;

	t43 = ((x1745%(x1746|x1747))>>x1748);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1817 = 278U;
	static int64_t x1818 = INT64_MIN;
	int64_t x1819 = INT64_MIN;
	volatile int64_t t44 = -336LL;

	t44 = ((x1817%(x1818|x1819))>>x1820);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1825 = UINT32_MAX;
	int16_t x1826 = -1;
	int32_t x1827 = -6683;
	uint32_t t45 = 2201987U;

	t45 = ((x1825%(x1826|x1827))>>x1828);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1849 = UINT16_MAX;
	int64_t x1850 = INT64_MIN;

	t46 = ((x1849%(x1850|x1851))>>x1852);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1981 = -1LL;
	volatile int64_t x1983 = INT64_MIN;
	uint8_t x1984 = 2U;
	uint64_t t47 = 126152103275718LLU;

	t47 = ((x1981%(x1982|x1983))>>x1984);

	if (t47 != 2305801470129476086LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2153 = 56;
	volatile int8_t x2156 = 18;
	volatile int32_t t48 = -95769;

	t48 = ((x2153%(x2154|x2155))>>x2156);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2177 = INT32_MAX;
	static volatile uint64_t x2178 = 1094983082727808LLU;
	uint64_t x2179 = 9364539LLU;
	int8_t x2180 = 4;
	uint64_t t49 = 5531847227LLU;

	t49 = ((x2177%(x2178|x2179))>>x2180);

	if (t49 != 134217727LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x2233 = INT8_MIN;
	uint32_t x2235 = 3085660U;
	int8_t x2236 = 11;
	uint32_t t50 = 64059685U;

	t50 = ((x2233%(x2234|x2235))>>x2236);

	if (t50 != 2097151U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2249 = 0;
	static int8_t x2250 = -1;
	volatile uint8_t x2251 = 37U;
	static uint8_t x2252 = 7U;
	int32_t t51 = 235726821;

	t51 = ((x2249%(x2250|x2251))>>x2252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2257 = -1LL;
	uint64_t x2258 = UINT64_MAX;
	static int64_t x2259 = INT64_MIN;
	volatile int8_t x2260 = 3;
	uint64_t t52 = 1627478609677186LLU;

	t52 = ((x2257%(x2258|x2259))>>x2260);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2281 = 345U;
	static int64_t x2283 = 31772LL;
	uint8_t x2284 = 60U;
	int64_t t53 = -62297344998LL;

	t53 = ((x2281%(x2282|x2283))>>x2284);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2321 = -1;
	static int32_t x2322 = -758427;
	uint64_t x2323 = 31LLU;
	uint8_t x2324 = 1U;
	volatile uint64_t t54 = 120927970087504911LLU;

	t54 = ((x2321%(x2322|x2323))>>x2324);

	if (t54 != 379200LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2369 = 910U;
	static int32_t x2370 = INT32_MAX;
	int64_t x2371 = -1LL;
	int8_t x2372 = 0;
	int64_t t55 = 33316943973380LL;

	t55 = ((x2369%(x2370|x2371))>>x2372);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2425 = 12856761965LLU;
	int64_t x2426 = INT64_MIN;
	int64_t x2427 = INT64_MIN;
	int16_t x2428 = 1;
	static volatile uint64_t t56 = 1036721854998LLU;

	t56 = ((x2425%(x2426|x2427))>>x2428);

	if (t56 != 6428380982LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2486 = INT32_MIN;
	int16_t x2487 = INT16_MAX;
	static volatile int32_t t57 = 118;

	t57 = ((x2485%(x2486|x2487))>>x2488);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x2562 = -3;
	uint64_t x2564 = 19LLU;
	int32_t t58 = 122743292;

	t58 = ((x2561%(x2562|x2563))>>x2564);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2713 = -1;
	static int16_t x2716 = 23;

	t59 = ((x2713%(x2714|x2715))>>x2716);

	if (t59 != 10199195205LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2769 = INT32_MAX;
	uint32_t x2770 = 307766U;
	volatile uint8_t x2771 = 0U;
	static uint8_t x2772 = 1U;

	t60 = ((x2769%(x2770|x2771))>>x2772);

	if (t60 != 100132U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2817 = INT32_MIN;
	uint32_t x2818 = UINT32_MAX;
	uint64_t x2819 = 171820940347832LLU;
	uint16_t x2820 = 47U;

	t61 = ((x2817%(x2818|x2819))>>x2820);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x2857 = 49044722U;
	static uint64_t x2858 = UINT64_MAX;
	uint8_t x2860 = 2U;

	t62 = ((x2857%(x2858|x2859))>>x2860);

	if (t62 != 12261180LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2885 = UINT16_MAX;
	volatile uint64_t x2887 = 10635LLU;
	static int8_t x2888 = 50;
	volatile uint64_t t63 = 9937048582570LLU;

	t63 = ((x2885%(x2886|x2887))>>x2888);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2907 = UINT16_MAX;
	int8_t x2908 = 1;
	int32_t t64 = -321595;

	t64 = ((x2905%(x2906|x2907))>>x2908);

	if (t64 != 28) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3005 = -1;
	uint64_t x3008 = 2LLU;

	t65 = ((x3005%(x3006|x3007))>>x3008);

	if (t65 != 885034386767779LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3013 = INT64_MAX;
	uint8_t x3014 = 24U;
	int16_t x3015 = -625;
	uint32_t x3016 = 0U;

	t66 = ((x3013%(x3014|x3015))>>x3016);

	if (t66 != 301LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3023 = 41U;
	int8_t x3024 = 6;
	uint64_t t67 = 402821370965519LLU;

	t67 = ((x3021%(x3022|x3023))>>x3024);

	if (t67 != 1371LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x3093 = 112U;
	volatile uint8_t x3094 = 3U;
	volatile int64_t x3095 = 144585073899LL;
	volatile int8_t x3096 = 41;
	static int64_t t68 = 1LL;

	t68 = ((x3093%(x3094|x3095))>>x3096);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x3105 = 2210188LLU;
	int16_t x3106 = -1;
	int8_t x3107 = INT8_MIN;
	int8_t x3108 = 10;
	volatile uint64_t t69 = 252444785624977977LLU;

	t69 = ((x3105%(x3106|x3107))>>x3108);

	if (t69 != 2158LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3157 = 122U;
	int8_t x3158 = -13;
	uint64_t x3159 = UINT64_MAX;
	int64_t x3160 = 2LL;
	uint64_t t70 = 1002109LLU;

	t70 = ((x3157%(x3158|x3159))>>x3160);

	if (t70 != 30LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3188 = 10U;

	t71 = ((x3185%(x3186|x3187))>>x3188);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3245 = -1;
	static int64_t x3246 = -1LL;
	int32_t x3247 = INT32_MIN;
	int64_t t72 = 8655063679233LL;

	t72 = ((x3245%(x3246|x3247))>>x3248);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3325 = 163U;
	uint64_t x3326 = 7056670261487285LLU;
	volatile int32_t x3327 = INT32_MIN;
	uint8_t x3328 = 17U;
	uint64_t t73 = 280735529542047LLU;

	t73 = ((x3325%(x3326|x3327))>>x3328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3345 = UINT64_MAX;
	static int8_t x3346 = 59;
	int8_t x3348 = 11;
	static volatile uint64_t t74 = 420LLU;

	t74 = ((x3345%(x3346|x3347))>>x3348);

	if (t74 != 1048575LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3353 = INT8_MIN;
	static uint8_t x3354 = 0U;
	volatile uint32_t x3355 = UINT32_MAX;
	int16_t x3356 = 1;
	volatile uint32_t t75 = 9U;

	t75 = ((x3353%(x3354|x3355))>>x3356);

	if (t75 != 2147483584U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x3385 = 440064275442043522LLU;
	int16_t x3386 = INT16_MIN;
	int32_t x3387 = INT32_MIN;
	static volatile uint16_t x3388 = 1U;
	static volatile uint64_t t76 = 147985LLU;

	t76 = ((x3385%(x3386|x3387))>>x3388);

	if (t76 != 220032137721021761LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3413 = 9297311LL;
	int16_t x3414 = -6230;
	int8_t x3415 = 4;
	static volatile int64_t t77 = 2900765839248198531LL;

	t77 = ((x3413%(x3414|x3415))>>x3416);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x3433 = -1;
	int64_t x3434 = -1LL;
	int16_t x3435 = -1;
	volatile int64_t t78 = 59LL;

	t78 = ((x3433%(x3434|x3435))>>x3436);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3473 = -1;
	static int32_t x3475 = INT32_MAX;
	static uint32_t x3476 = 2U;
	int64_t t79 = -81889154821586492LL;

	t79 = ((x3473%(x3474|x3475))>>x3476);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x3505 = 5U;
	volatile int16_t x3506 = -1;
	volatile uint16_t x3508 = 19U;
	volatile int32_t t80 = 0;

	t80 = ((x3505%(x3506|x3507))>>x3508);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3509 = 243U;
	int16_t x3510 = INT16_MAX;
	uint64_t x3511 = 27051335LLU;
	static uint16_t x3512 = 6U;

	t81 = ((x3509%(x3510|x3511))>>x3512);

	if (t81 != 3LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3538 = -1LL;
	int32_t x3539 = INT32_MIN;
	uint8_t x3540 = 8U;
	volatile int64_t t82 = 5LL;

	t82 = ((x3537%(x3538|x3539))>>x3540);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3565 = 1187255405776LLU;
	uint64_t x3566 = UINT64_MAX;
	uint8_t x3567 = UINT8_MAX;
	volatile uint8_t x3568 = 13U;
	uint64_t t83 = 7144LLU;

	t83 = ((x3565%(x3566|x3567))>>x3568);

	if (t83 != 144928638LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x3641 = -34974119879776LL;
	int16_t x3642 = -7;
	volatile int8_t x3643 = 0;
	volatile uint8_t x3644 = 2U;
	volatile int64_t t84 = 31754449079LL;

	t84 = ((x3641%(x3642|x3643))>>x3644);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x3677 = INT16_MAX;
	int32_t x3678 = INT32_MIN;
	static int64_t x3679 = -31646538417LL;
	static uint16_t x3680 = 14U;
	static int64_t t85 = -1568LL;

	t85 = ((x3677%(x3678|x3679))>>x3680);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x3693 = UINT8_MAX;
	volatile int64_t x3694 = INT64_MIN;
	volatile int64_t x3695 = 230988309LL;
	static int8_t x3696 = 1;
	static volatile int64_t t86 = -215521440LL;

	t86 = ((x3693%(x3694|x3695))>>x3696);

	if (t86 != 127LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3726 = 24130U;
	volatile int16_t x3727 = 453;
	uint32_t x3728 = 2U;
	int32_t t87 = -53;

	t87 = ((x3725%(x3726|x3727))>>x3728);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3729 = UINT32_MAX;
	int64_t x3730 = 2757447774723LL;
	uint8_t x3731 = 15U;
	uint16_t x3732 = 3U;
	static volatile int64_t t88 = 55605269696296LL;

	t88 = ((x3729%(x3730|x3731))>>x3732);

	if (t88 != 536870911LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x3761 = 27LL;
	uint32_t x3762 = 1928203U;
	uint64_t x3764 = 2LLU;
	volatile int64_t t89 = 129533176835260850LL;

	t89 = ((x3761%(x3762|x3763))>>x3764);

	if (t89 != 6LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3781 = -1;
	static volatile uint32_t x3782 = 3782679U;
	int8_t x3783 = -1;
	static uint16_t x3784 = 1U;

	t90 = ((x3781%(x3782|x3783))>>x3784);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x3793 = INT16_MAX;
	static int16_t x3794 = -1;
	static int8_t x3795 = INT8_MIN;
	volatile uint8_t x3796 = 10U;

	t91 = ((x3793%(x3794|x3795))>>x3796);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3805 = -2;
	volatile int8_t x3806 = INT8_MAX;
	volatile uint64_t x3807 = 2332978245086LLU;
	int32_t x3808 = 12;
	uint64_t t92 = 3900395712LLU;

	t92 = ((x3805%(x3806|x3807))>>x3808);

	if (t92 != 424430145LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x3873 = 22642U;
	int16_t x3874 = INT16_MIN;
	int8_t x3875 = INT8_MAX;
	static int8_t x3876 = 2;
	uint32_t t93 = 24584U;

	t93 = ((x3873%(x3874|x3875))>>x3876);

	if (t93 != 5660U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3893 = 0U;
	static uint16_t x3895 = 2823U;
	uint16_t x3896 = 20U;

	t94 = ((x3893%(x3894|x3895))>>x3896);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3897 = 1U;
	uint16_t x3898 = 9380U;
	uint64_t x3899 = 7970872747780390493LLU;
	volatile int32_t x3900 = 1;
	volatile uint64_t t95 = 51376631973LLU;

	t95 = ((x3897%(x3898|x3899))>>x3900);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3913 = 2U;
	int32_t x3914 = INT32_MIN;
	volatile int32_t x3915 = 7495;
	int32_t t96 = 221767;

	t96 = ((x3913%(x3914|x3915))>>x3916);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x3957 = INT64_MIN;
	int16_t x3958 = -1;
	int8_t x3959 = -45;
	uint8_t x3960 = 8U;
	static volatile int64_t t97 = -534174682780LL;

	t97 = ((x3957%(x3958|x3959))>>x3960);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x3993 = 27817941967768LLU;
	static uint32_t x3994 = UINT32_MAX;
	uint32_t x3995 = UINT32_MAX;
	volatile int8_t x3996 = 38;
	static volatile uint64_t t98 = 14797395370LLU;

	t98 = ((x3993%(x3994|x3995))>>x3996);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x4113 = -48786226;
	int16_t x4114 = -1;
	volatile uint8_t x4115 = UINT8_MAX;
	volatile uint8_t x4116 = 0U;
	int32_t t99 = 0;

	t99 = ((x4113%(x4114|x4115))>>x4116);

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

