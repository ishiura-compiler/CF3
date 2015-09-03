#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x44 = 16LL;
int16_t x101 = -3761;
volatile uint16_t x104 = 5U;
int32_t t3 = 0;
static int16_t x214 = INT16_MAX;
volatile uint8_t x216 = 0U;
int16_t x263 = INT16_MIN;
int8_t x299 = -1;
volatile int8_t x300 = 1;
volatile int32_t t7 = 0;
static int8_t x323 = 0;
int16_t x324 = 1;
volatile int32_t t8 = -10654420;
static int64_t x465 = INT64_MIN;
uint16_t x468 = 3U;
static int8_t x496 = 1;
uint8_t x517 = UINT8_MAX;
int32_t x518 = -10745590;
volatile int32_t t12 = 33495;
int32_t x537 = 10912803;
uint8_t x538 = 88U;
uint64_t x545 = 13559266247929LLU;
volatile int32_t t15 = -1;
static int32_t x805 = 24371;
static volatile int8_t x808 = 4;
int32_t t19 = -2877195;
int8_t x869 = INT8_MAX;
uint32_t x901 = 2019967101U;
static int8_t x907 = -13;
uint64_t x973 = 12LLU;
static int32_t x1021 = -1;
int16_t x1022 = -1539;
volatile int64_t x1081 = INT64_MAX;
static volatile int8_t x1082 = -1;
static int32_t x1083 = -1;
volatile int32_t t29 = 25358574;
uint8_t x1108 = 0U;
int8_t x1112 = 15;
volatile uint32_t x1171 = 8U;
uint32_t x1223 = UINT32_MAX;
int8_t x1332 = 0;
static int32_t t39 = -800850832;
static volatile int32_t t40 = -188715;
uint16_t x1359 = 71U;
int32_t t41 = -97588802;
static uint8_t x1376 = 6U;
volatile int32_t t43 = -16420;
int16_t x1433 = INT16_MAX;
volatile int64_t x1435 = INT64_MIN;
static int16_t x1513 = -696;
volatile int32_t t46 = 385;
int8_t x1593 = INT8_MIN;
static int16_t x1669 = INT16_MIN;
volatile uint8_t x1670 = UINT8_MAX;
int16_t x1671 = -1;
static uint8_t x1672 = 0U;
int8_t x1710 = INT8_MIN;
uint32_t x1728 = 31U;
static volatile int32_t t51 = -1336;
static int8_t x1729 = -1;
int32_t x1777 = -1;
volatile int32_t t53 = -186558154;
int32_t t55 = 25787330;
static uint32_t x1820 = 1U;
uint64_t x1832 = 14LLU;
static volatile int32_t t58 = 15406097;
int32_t x1911 = 29;
volatile uint16_t x1912 = 29U;
volatile int32_t x2066 = INT32_MAX;
static int64_t x2067 = INT64_MIN;
volatile int32_t t63 = -20006928;
uint32_t x2069 = 110U;
static volatile int32_t t66 = -900;
int32_t t67 = 114;
volatile uint64_t x2281 = 309074987755258LLU;
int32_t x2287 = 158419;
int32_t t73 = 8794343;
int8_t x2293 = INT8_MIN;
static int16_t x2296 = 1;
static volatile int16_t x2318 = INT16_MAX;
uint16_t x2320 = 17U;
int8_t x2325 = INT8_MIN;
int8_t x2344 = 0;
int32_t t78 = -31146745;
int8_t x2347 = 0;
int32_t t79 = 49816498;
uint64_t x2405 = 253530716891848641LLU;
static volatile uint32_t x2408 = 7U;
volatile int32_t t80 = 69;
int8_t x2417 = -4;
int32_t t84 = 88993495;
volatile uint16_t x2587 = 109U;
static int16_t x2592 = 3;
volatile int32_t t88 = 16;
int32_t x2619 = -125196;
int16_t x2635 = -1;
int32_t t90 = -5967;
static int8_t x2679 = INT8_MAX;
static volatile uint64_t x2680 = 0LLU;
uint8_t x2726 = 78U;
static int8_t x2729 = -1;
int64_t x2734 = 1021781582986075LL;
static int64_t x2775 = INT64_MAX;
volatile int16_t x2833 = INT16_MAX;
int64_t x2845 = -1LL;
int16_t x2847 = -1;
volatile int32_t t99 = -886633;


void f0(void) {
	uint64_t x41 = 3869414937959LLU;
	volatile uint16_t x42 = 29U;
	static int8_t x43 = -41;
	static volatile int32_t t0 = -14;

	t0 = ((x41==(x42<x43))<<x44);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x102 = -66;
	int16_t x103 = INT16_MAX;
	static int32_t t1 = -6;

	t1 = ((x101==(x102<x103))<<x104);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x137 = -1;
	int16_t x138 = INT16_MIN;
	static uint8_t x139 = UINT8_MAX;
	uint32_t x140 = 13U;
	int32_t t2 = 1893425;

	t2 = ((x137==(x138<x139))<<x140);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = 45U;
	volatile int8_t x151 = -1;
	uint16_t x152 = 16U;

	t3 = ((x149==(x150<x151))<<x152);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x197 = 0;
	static int8_t x198 = INT8_MIN;
	volatile uint64_t x199 = 6509799644002882LLU;
	uint32_t x200 = 1U;
	int32_t t4 = -1471;

	t4 = ((x197==(x198<x199))<<x200);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x215 = 24;
	volatile int32_t t5 = 5400292;

	t5 = ((x213==(x214<x215))<<x216);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x261 = INT64_MAX;
	volatile int8_t x262 = -2;
	int32_t x264 = 3;
	volatile int32_t t6 = -424;

	t6 = ((x261==(x262<x263))<<x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x297 = 438075388LLU;
	volatile int8_t x298 = 1;

	t7 = ((x297==(x298<x299))<<x300);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x321 = -10429539628089LL;
	int64_t x322 = INT64_MAX;

	t8 = ((x321==(x322<x323))<<x324);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x449 = 4223915688569440LLU;
	int32_t x450 = -1;
	int64_t x451 = 34641235345727LL;
	uint32_t x452 = 2U;
	int32_t t9 = -177;

	t9 = ((x449==(x450<x451))<<x452);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	int32_t t10 = -96781;

	t10 = ((x465==(x466<x467))<<x468);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x493 = 226;
	uint8_t x494 = 28U;
	uint64_t x495 = 64917LLU;
	volatile int32_t t11 = 61643;

	t11 = ((x493==(x494<x495))<<x496);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x519 = -388;
	uint8_t x520 = 0U;

	t12 = ((x517==(x518<x519))<<x520);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x539 = INT8_MIN;
	uint16_t x540 = 5U;
	static volatile int32_t t13 = 32;

	t13 = ((x537==(x538<x539))<<x540);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x546 = -1;
	volatile uint8_t x547 = 15U;
	volatile uint8_t x548 = 1U;
	static volatile int32_t t14 = -1;

	t14 = ((x545==(x546<x547))<<x548);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x549 = -1;
	uint8_t x550 = 1U;
	int64_t x551 = -1LL;
	int16_t x552 = 6;

	t15 = ((x549==(x550<x551))<<x552);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x569 = 35;
	volatile uint64_t x570 = UINT64_MAX;
	static int32_t x571 = INT32_MIN;
	uint16_t x572 = 3U;
	static int32_t t16 = -27048;

	t16 = ((x569==(x570<x571))<<x572);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x713 = UINT32_MAX;
	int32_t x714 = 2097;
	static int32_t x715 = 1751667;
	static uint16_t x716 = 3U;
	volatile int32_t t17 = 1009105;

	t17 = ((x713==(x714<x715))<<x716);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x749 = -304;
	int64_t x750 = -113807922094LL;
	int8_t x751 = 1;
	uint8_t x752 = 3U;
	volatile int32_t t18 = -73;

	t18 = ((x749==(x750<x751))<<x752);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x806 = UINT8_MAX;
	uint64_t x807 = 9LLU;

	t19 = ((x805==(x806<x807))<<x808);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x853 = 24;
	uint16_t x854 = 1U;
	int8_t x855 = INT8_MIN;
	static int32_t x856 = 6;
	static int32_t t20 = -101603;

	t20 = ((x853==(x854<x855))<<x856);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x861 = INT8_MIN;
	static int8_t x862 = 1;
	volatile int16_t x863 = -1;
	uint8_t x864 = 0U;
	volatile int32_t t21 = 7915872;

	t21 = ((x861==(x862<x863))<<x864);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x870 = INT64_MIN;
	uint8_t x871 = 3U;
	uint32_t x872 = 13U;
	volatile int32_t t22 = 1320;

	t22 = ((x869==(x870<x871))<<x872);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x902 = 6LLU;
	volatile int32_t x903 = INT32_MIN;
	static uint8_t x904 = 6U;
	volatile int32_t t23 = -1;

	t23 = ((x901==(x902<x903))<<x904);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x905 = -1;
	static int16_t x906 = INT16_MAX;
	static int16_t x908 = 5;
	volatile int32_t t24 = -2;

	t24 = ((x905==(x906<x907))<<x908);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x961 = -1LL;
	int8_t x962 = -5;
	int64_t x963 = INT64_MAX;
	uint16_t x964 = 1U;
	int32_t t25 = 0;

	t25 = ((x961==(x962<x963))<<x964);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x974 = INT32_MAX;
	volatile uint32_t x975 = 110U;
	int8_t x976 = 6;
	int32_t t26 = -3081;

	t26 = ((x973==(x974<x975))<<x976);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x989 = INT16_MAX;
	volatile int64_t x990 = INT64_MIN;
	int32_t x991 = -1;
	volatile int8_t x992 = 5;
	volatile int32_t t27 = -512360;

	t27 = ((x989==(x990<x991))<<x992);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1023 = 25U;
	uint16_t x1024 = 20U;
	volatile int32_t t28 = 1350035;

	t28 = ((x1021==(x1022<x1023))<<x1024);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1084 = 6U;

	t29 = ((x1081==(x1082<x1083))<<x1084);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1105 = UINT32_MAX;
	int32_t x1106 = INT32_MIN;
	static int64_t x1107 = -674039041LL;
	volatile int32_t t30 = -2;

	t30 = ((x1105==(x1106<x1107))<<x1108);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1109 = INT8_MAX;
	uint8_t x1110 = 7U;
	int32_t x1111 = -10;
	int32_t t31 = -394788;

	t31 = ((x1109==(x1110<x1111))<<x1112);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1169 = 43LLU;
	static int8_t x1170 = INT8_MAX;
	static uint8_t x1172 = 3U;
	int32_t t32 = -26613250;

	t32 = ((x1169==(x1170<x1171))<<x1172);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1173 = -23;
	uint32_t x1174 = 188491U;
	volatile int64_t x1175 = -1LL;
	uint32_t x1176 = 7U;
	volatile int32_t t33 = -115;

	t33 = ((x1173==(x1174<x1175))<<x1176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1221 = 1U;
	volatile uint16_t x1222 = UINT16_MAX;
	int32_t x1224 = 0;
	volatile int32_t t34 = 1376;

	t34 = ((x1221==(x1222<x1223))<<x1224);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1237 = INT8_MAX;
	int32_t x1238 = INT32_MIN;
	uint64_t x1239 = 772157755LLU;
	int8_t x1240 = 3;
	volatile int32_t t35 = -1;

	t35 = ((x1237==(x1238<x1239))<<x1240);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1301 = INT8_MIN;
	int16_t x1302 = -7;
	static uint8_t x1303 = 28U;
	static int16_t x1304 = 1;
	int32_t t36 = -1;

	t36 = ((x1301==(x1302<x1303))<<x1304);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1317 = 493U;
	uint32_t x1318 = 94670U;
	uint16_t x1319 = 0U;
	static uint8_t x1320 = 12U;
	volatile int32_t t37 = 16593;

	t37 = ((x1317==(x1318<x1319))<<x1320);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1329 = INT8_MIN;
	int64_t x1330 = INT64_MAX;
	uint8_t x1331 = 25U;
	volatile int32_t t38 = -1936;

	t38 = ((x1329==(x1330<x1331))<<x1332);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1349 = 2826360297LLU;
	volatile int16_t x1350 = INT16_MAX;
	int8_t x1351 = -1;
	int32_t x1352 = 0;

	t39 = ((x1349==(x1350<x1351))<<x1352);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1353 = INT64_MIN;
	static int16_t x1354 = INT16_MIN;
	int64_t x1355 = -1LL;
	uint8_t x1356 = 4U;

	t40 = ((x1353==(x1354<x1355))<<x1356);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1357 = INT8_MIN;
	int8_t x1358 = INT8_MIN;
	int8_t x1360 = 1;

	t41 = ((x1357==(x1358<x1359))<<x1360);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1373 = -3;
	int16_t x1374 = 295;
	static volatile uint64_t x1375 = 3272349048663449460LLU;
	static int32_t t42 = 109;

	t42 = ((x1373==(x1374<x1375))<<x1376);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1393 = INT16_MAX;
	int16_t x1394 = INT16_MAX;
	volatile int32_t x1395 = INT32_MIN;
	uint16_t x1396 = 15U;

	t43 = ((x1393==(x1394<x1395))<<x1396);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1434 = UINT64_MAX;
	uint8_t x1436 = 1U;
	int32_t t44 = -11965514;

	t44 = ((x1433==(x1434<x1435))<<x1436);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1514 = INT16_MIN;
	static uint64_t x1515 = 258473470LLU;
	uint64_t x1516 = 0LLU;
	int32_t t45 = 34;

	t45 = ((x1513==(x1514<x1515))<<x1516);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1541 = INT32_MIN;
	int8_t x1542 = INT8_MIN;
	static uint16_t x1543 = UINT16_MAX;
	int8_t x1544 = 4;

	t46 = ((x1541==(x1542<x1543))<<x1544);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1594 = -201402583018463261LL;
	static int16_t x1595 = INT16_MIN;
	int8_t x1596 = 6;
	volatile int32_t t47 = 81787;

	t47 = ((x1593==(x1594<x1595))<<x1596);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t t48 = -856;

	t48 = ((x1669==(x1670<x1671))<<x1672);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1685 = INT64_MAX;
	int16_t x1686 = INT16_MAX;
	int64_t x1687 = INT64_MAX;
	static int16_t x1688 = 0;
	volatile int32_t t49 = 18;

	t49 = ((x1685==(x1686<x1687))<<x1688);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1709 = 1;
	int32_t x1711 = INT32_MIN;
	int32_t x1712 = 0;
	volatile int32_t t50 = -1133133;

	t50 = ((x1709==(x1710<x1711))<<x1712);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1725 = 19121892U;
	static int8_t x1726 = 12;
	uint32_t x1727 = 189U;

	t51 = ((x1725==(x1726<x1727))<<x1728);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x1730 = 563986LL;
	static volatile int64_t x1731 = INT64_MIN;
	static int8_t x1732 = 8;
	int32_t t52 = 19497380;

	t52 = ((x1729==(x1730<x1731))<<x1732);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x1778 = -1;
	int32_t x1779 = INT32_MIN;
	uint8_t x1780 = 0U;

	t53 = ((x1777==(x1778<x1779))<<x1780);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1785 = -1;
	int64_t x1786 = -1LL;
	uint8_t x1787 = UINT8_MAX;
	uint16_t x1788 = 12U;
	volatile int32_t t54 = -6;

	t54 = ((x1785==(x1786<x1787))<<x1788);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x1805 = 54754;
	int64_t x1806 = 203842953533229LL;
	static volatile int64_t x1807 = INT64_MIN;
	int16_t x1808 = 2;

	t55 = ((x1805==(x1806<x1807))<<x1808);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1817 = INT64_MIN;
	int64_t x1818 = INT64_MAX;
	static int64_t x1819 = 10937LL;
	int32_t t56 = 6;

	t56 = ((x1817==(x1818<x1819))<<x1820);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1829 = 2167179736933LLU;
	int16_t x1830 = 1;
	volatile uint32_t x1831 = UINT32_MAX;
	volatile int32_t t57 = 573516;

	t57 = ((x1829==(x1830<x1831))<<x1832);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x1877 = -1;
	static uint8_t x1878 = 1U;
	uint64_t x1879 = UINT64_MAX;
	volatile uint8_t x1880 = 6U;

	t58 = ((x1877==(x1878<x1879))<<x1880);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x1909 = INT8_MIN;
	volatile uint32_t x1910 = UINT32_MAX;
	int32_t t59 = 0;

	t59 = ((x1909==(x1910<x1911))<<x1912);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1929 = INT64_MIN;
	int8_t x1930 = INT8_MIN;
	uint64_t x1931 = 184LLU;
	uint16_t x1932 = 1U;
	static int32_t t60 = -132677;

	t60 = ((x1929==(x1930<x1931))<<x1932);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1981 = -4539458196LL;
	static int8_t x1982 = INT8_MIN;
	int64_t x1983 = -1LL;
	uint16_t x1984 = 13U;
	volatile int32_t t61 = -6;

	t61 = ((x1981==(x1982<x1983))<<x1984);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1985 = 0;
	int64_t x1986 = 831590629475469LL;
	uint8_t x1987 = UINT8_MAX;
	uint8_t x1988 = 3U;
	volatile int32_t t62 = 310;

	t62 = ((x1985==(x1986<x1987))<<x1988);

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x2065 = UINT16_MAX;
	uint32_t x2068 = 3U;

	t63 = ((x2065==(x2066<x2067))<<x2068);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2070 = 2;
	static int8_t x2071 = 1;
	uint8_t x2072 = 1U;
	int32_t t64 = -451184;

	t64 = ((x2069==(x2070<x2071))<<x2072);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2081 = INT32_MAX;
	int64_t x2082 = INT64_MIN;
	int16_t x2083 = INT16_MAX;
	volatile uint8_t x2084 = 2U;
	volatile int32_t t65 = 805119279;

	t65 = ((x2081==(x2082<x2083))<<x2084);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x2105 = INT64_MIN;
	static int16_t x2106 = -1;
	int32_t x2107 = -13229;
	int16_t x2108 = 1;

	t66 = ((x2105==(x2106<x2107))<<x2108);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2149 = -31;
	volatile uint64_t x2150 = 7679LLU;
	static int32_t x2151 = 30474;
	volatile int16_t x2152 = 1;

	t67 = ((x2149==(x2150<x2151))<<x2152);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2173 = -121528917;
	int16_t x2174 = INT16_MIN;
	static uint32_t x2175 = UINT32_MAX;
	int8_t x2176 = 0;
	int32_t t68 = -128623781;

	t68 = ((x2173==(x2174<x2175))<<x2176);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2177 = INT8_MAX;
	uint8_t x2178 = UINT8_MAX;
	static uint64_t x2179 = UINT64_MAX;
	volatile int8_t x2180 = 5;
	volatile int32_t t69 = -7189;

	t69 = ((x2177==(x2178<x2179))<<x2180);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2221 = 933U;
	int8_t x2222 = -1;
	volatile uint64_t x2223 = 12760746368LLU;
	int8_t x2224 = 4;
	volatile int32_t t70 = -3478;

	t70 = ((x2221==(x2222<x2223))<<x2224);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x2225 = 1;
	int64_t x2226 = INT64_MIN;
	static int16_t x2227 = -5439;
	int8_t x2228 = 0;
	volatile int32_t t71 = 76;

	t71 = ((x2225==(x2226<x2227))<<x2228);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x2282 = 3LLU;
	volatile int32_t x2283 = -1;
	uint32_t x2284 = 6U;
	volatile int32_t t72 = 463612;

	t72 = ((x2281==(x2282<x2283))<<x2284);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2285 = 40U;
	volatile int32_t x2286 = -1;
	uint8_t x2288 = 0U;

	t73 = ((x2285==(x2286<x2287))<<x2288);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x2294 = 790U;
	volatile int32_t x2295 = INT32_MIN;
	int32_t t74 = 0;

	t74 = ((x2293==(x2294<x2295))<<x2296);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2305 = -22;
	uint8_t x2306 = 2U;
	static int16_t x2307 = -1;
	uint8_t x2308 = 1U;
	int32_t t75 = -15;

	t75 = ((x2305==(x2306<x2307))<<x2308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2317 = -1;
	int64_t x2319 = 3684LL;
	int32_t t76 = 3501376;

	t76 = ((x2317==(x2318<x2319))<<x2320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2326 = 19U;
	volatile int32_t x2327 = -1;
	uint32_t x2328 = 30U;
	volatile int32_t t77 = 2531218;

	t77 = ((x2325==(x2326<x2327))<<x2328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x2341 = 497840LL;
	static uint8_t x2342 = 4U;
	uint64_t x2343 = 2162181764439LLU;

	t78 = ((x2341==(x2342<x2343))<<x2344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x2345 = -1;
	volatile int32_t x2346 = -629960664;
	uint8_t x2348 = 1U;

	t79 = ((x2345==(x2346<x2347))<<x2348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x2406 = UINT64_MAX;
	volatile int32_t x2407 = 34579000;

	t80 = ((x2405==(x2406<x2407))<<x2408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2418 = UINT32_MAX;
	int64_t x2419 = -19653429035229527LL;
	uint64_t x2420 = 22LLU;
	volatile int32_t t81 = 811961;

	t81 = ((x2417==(x2418<x2419))<<x2420);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2445 = -1;
	volatile uint16_t x2446 = UINT16_MAX;
	int8_t x2447 = INT8_MIN;
	uint8_t x2448 = 23U;
	static volatile int32_t t82 = 173;

	t82 = ((x2445==(x2446<x2447))<<x2448);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2553 = 805080126U;
	static volatile int8_t x2554 = -1;
	int32_t x2555 = INT32_MIN;
	int32_t x2556 = 0;
	static volatile int32_t t83 = 6987;

	t83 = ((x2553==(x2554<x2555))<<x2556);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2565 = -1;
	int8_t x2566 = 1;
	int64_t x2567 = -1LL;
	uint8_t x2568 = 0U;

	t84 = ((x2565==(x2566<x2567))<<x2568);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2577 = 2774U;
	static int8_t x2578 = -20;
	int16_t x2579 = INT16_MAX;
	static uint16_t x2580 = 7U;
	static int32_t t85 = -4118;

	t85 = ((x2577==(x2578<x2579))<<x2580);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x2585 = INT32_MAX;
	int16_t x2586 = -1;
	volatile uint8_t x2588 = 0U;
	int32_t t86 = -173;

	t86 = ((x2585==(x2586<x2587))<<x2588);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2589 = 3U;
	volatile uint8_t x2590 = 3U;
	uint32_t x2591 = 35422234U;
	volatile int32_t t87 = -1;

	t87 = ((x2589==(x2590<x2591))<<x2592);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x2609 = 4218U;
	volatile int64_t x2610 = -1LL;
	static int32_t x2611 = -1;
	int32_t x2612 = 0;

	t88 = ((x2609==(x2610<x2611))<<x2612);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2617 = -1;
	uint64_t x2618 = 13303940850560LLU;
	uint16_t x2620 = 13U;
	static volatile int32_t t89 = 28;

	t89 = ((x2617==(x2618<x2619))<<x2620);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2633 = INT32_MIN;
	int16_t x2634 = -3127;
	int8_t x2636 = 7;

	t90 = ((x2633==(x2634<x2635))<<x2636);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2677 = 107092U;
	int32_t x2678 = INT32_MAX;
	int32_t t91 = 483253841;

	t91 = ((x2677==(x2678<x2679))<<x2680);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x2725 = UINT32_MAX;
	int8_t x2727 = -1;
	uint8_t x2728 = 3U;
	int32_t t92 = -429;

	t92 = ((x2725==(x2726<x2727))<<x2728);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2730 = 6700511703371LLU;
	int16_t x2731 = -6;
	uint32_t x2732 = 2U;
	volatile int32_t t93 = -326;

	t93 = ((x2729==(x2730<x2731))<<x2732);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2733 = INT16_MAX;
	volatile uint64_t x2735 = UINT64_MAX;
	uint32_t x2736 = 7U;
	int32_t t94 = 6;

	t94 = ((x2733==(x2734<x2735))<<x2736);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2773 = -1772LL;
	int8_t x2774 = 0;
	volatile int64_t x2776 = 2LL;
	volatile int32_t t95 = 12172904;

	t95 = ((x2773==(x2774<x2775))<<x2776);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x2805 = 353038356457560645LL;
	uint16_t x2806 = 0U;
	static uint16_t x2807 = UINT16_MAX;
	int8_t x2808 = 5;
	static volatile int32_t t96 = 28891;

	t96 = ((x2805==(x2806<x2807))<<x2808);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x2834 = 199U;
	volatile int64_t x2835 = INT64_MAX;
	uint8_t x2836 = 28U;
	int32_t t97 = 11769;

	t97 = ((x2833==(x2834<x2835))<<x2836);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2846 = INT16_MIN;
	int16_t x2848 = 1;
	volatile int32_t t98 = -969;

	t98 = ((x2845==(x2846<x2847))<<x2848);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2857 = UINT64_MAX;
	int64_t x2858 = INT64_MIN;
	int8_t x2859 = -1;
	uint64_t x2860 = 0LLU;

	t99 = ((x2857==(x2858<x2859))<<x2860);

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

