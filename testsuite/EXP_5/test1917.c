#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
static volatile int32_t t0 = 0;
uint64_t x22 = UINT64_MAX;
int64_t x23 = 28371331979966342LL;
uint32_t x87 = UINT32_MAX;
volatile uint64_t t4 = UINT64_MAX;
int64_t x186 = -495LL;
volatile int32_t t5 = -4646;
int32_t x203 = 1;
int64_t x205 = 160789207LL;
static uint8_t x206 = 26U;
volatile int32_t t8 = -18276168;
uint64_t x241 = UINT64_MAX;
volatile uint16_t x313 = UINT16_MAX;
int32_t x314 = INT32_MIN;
int32_t x315 = INT32_MIN;
int8_t x350 = INT8_MIN;
int64_t x352 = -1LL;
int32_t t15 = INT32_MAX;
int8_t x520 = -1;
int8_t x576 = -1;
int64_t x741 = INT64_MAX;
int8_t x819 = INT8_MIN;
volatile uint64_t t25 = UINT64_MAX;
int64_t x852 = -1LL;
int8_t x866 = 0;
int16_t x868 = -1;
int32_t x1117 = 3;
volatile int32_t t31 = -1;
int32_t x1137 = INT32_MAX;
int16_t x1139 = INT16_MIN;
static volatile int64_t x1196 = -1LL;
int64_t x1254 = -1LL;
uint8_t x1256 = 1U;
uint64_t t35 = 98LLU;
volatile uint8_t x1282 = UINT8_MAX;
static int64_t x1314 = INT64_MIN;
static int32_t x1316 = INT32_MIN;
volatile uint32_t x1330 = UINT32_MAX;
uint16_t x1345 = 160U;
uint64_t x1370 = UINT64_MAX;
uint16_t x1417 = 0U;
uint32_t x1444 = UINT32_MAX;
static uint16_t x1447 = UINT16_MAX;
uint8_t x1448 = 87U;
uint32_t x1505 = UINT32_MAX;
int16_t x1508 = INT16_MAX;
volatile int8_t x1542 = -1;
int16_t x1566 = 1;
uint8_t x1580 = 3U;
volatile int32_t t49 = -2300;
static int8_t x1607 = 1;
int16_t x1661 = INT16_MAX;
int16_t x1823 = -1;
uint16_t x1842 = 2092U;
static int16_t x1975 = 16195;
int32_t t60 = 1;
int64_t x2071 = INT64_MAX;
uint16_t x2086 = 144U;
static int8_t x2106 = -1;
uint16_t x2108 = UINT16_MAX;
volatile int32_t t64 = INT32_MAX;
int8_t x2198 = 0;
static uint16_t x2201 = 19557U;
static uint8_t x2204 = 15U;
static int32_t t68 = 782;
volatile uint16_t x2214 = UINT16_MAX;
static volatile uint32_t t69 = 3U;
static int16_t x2218 = INT16_MIN;
int16_t x2244 = -1;
uint32_t x2581 = UINT32_MAX;
volatile int32_t x2582 = -1;
static uint32_t t75 = UINT32_MAX;
volatile uint64_t x2625 = 10950626318LLU;
static uint16_t x2629 = UINT16_MAX;
int64_t x2690 = -510LL;
static int64_t x2691 = -9927945072649LL;
int8_t x2692 = -1;
int8_t x2813 = INT8_MAX;
int32_t x2816 = -1;
static int32_t t80 = 129649337;
volatile int8_t x2904 = -1;
static int8_t x2975 = 7;
uint64_t x2976 = 7LLU;
volatile uint64_t t86 = UINT64_MAX;
int64_t x3063 = 1098812405610238155LL;
int8_t x3126 = -8;
volatile int64_t x3193 = INT64_MAX;
int64_t x3194 = 7LL;
uint8_t x3233 = 6U;
volatile int32_t t93 = -29916615;
int32_t x3243 = INT32_MAX;
volatile uint32_t x3249 = 920U;
uint16_t x3251 = 7884U;
int16_t x3252 = 6;
int16_t x3256 = INT16_MAX;
int32_t t96 = -13691287;
uint64_t x3267 = 317226354145922118LLU;
int16_t x3280 = -1;
int64_t t99 = -11602152056LL;


void f0(void) {
	int16_t x6 = INT16_MAX;
	volatile int8_t x7 = 5;
	volatile int32_t x8 = -1;

	t0 = (x5<<((x6|x7)%x8));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	uint8_t x24 = 3U;
	static volatile int32_t t1 = -1;

	t1 = (x21<<((x22|x23)%x24));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x81 = 5U;
	volatile int8_t x82 = -2;
	volatile uint32_t x83 = 0U;
	volatile int64_t x84 = -1LL;
	volatile int32_t t2 = 11112065;

	t2 = (x81<<((x82|x83)%x84));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x85 = 268113173;
	int16_t x86 = -20;
	uint16_t x88 = UINT16_MAX;
	int32_t t3 = 95;

	t3 = (x85<<((x86|x87)%x88));

	if (t3 != 268113173) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x149 = UINT64_MAX;
	static int64_t x150 = INT64_MIN;
	uint16_t x151 = 4U;
	static int16_t x152 = 1;

	t4 = (x149<<((x150|x151)%x152));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x185 = 1;
	uint64_t x187 = 5793074357LLU;
	uint16_t x188 = 1U;

	t5 = (x185<<((x186|x187)%x188));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x201 = 17161U;
	volatile int64_t x202 = INT64_MAX;
	int32_t x204 = INT32_MAX;
	volatile uint32_t t6 = 739U;

	t6 = (x201<<((x202|x203)%x204));

	if (t6 != 34322U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x207 = 2U;
	uint8_t x208 = 3U;
	volatile int64_t t7 = 811332130299998LL;

	t7 = (x205<<((x206|x207)%x208));

	if (t7 != 643156828LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x209 = 371;
	static volatile uint16_t x210 = UINT16_MAX;
	volatile uint16_t x211 = 5U;
	int64_t x212 = -1LL;

	t8 = (x209<<((x210|x211)%x212));

	if (t8 != 371) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x242 = INT32_MAX;
	int32_t x243 = -1375616;
	int32_t x244 = -1;
	uint64_t t9 = UINT64_MAX;

	t9 = (x241<<((x242|x243)%x244));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x316 = -1;
	static int32_t t10 = 1623;

	t10 = (x313<<((x314|x315)%x316));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x349 = 3470U;
	volatile int16_t x351 = INT16_MIN;
	int32_t t11 = -671;

	t11 = (x349<<((x350|x351)%x352));

	if (t11 != 3470) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x417 = UINT64_MAX;
	volatile int64_t x418 = INT64_MAX;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (x417<<((x418|x419)%x420));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x425 = 2;
	int64_t x426 = INT64_MIN;
	int16_t x427 = -1;
	int8_t x428 = -1;
	volatile int32_t t13 = -358018;

	t13 = (x425<<((x426|x427)%x428));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x457 = 1U;
	int16_t x458 = INT16_MAX;
	static uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 1U;
	int32_t t14 = 119229;

	t14 = (x457<<((x458|x459)%x460));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x481 = INT32_MAX;
	int16_t x482 = -8256;
	int16_t x483 = INT16_MAX;
	volatile uint32_t x484 = UINT32_MAX;

	t15 = (x481<<((x482|x483)%x484));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x517 = 187694U;
	int64_t x518 = -1LL;
	int32_t x519 = 1;
	volatile uint32_t t16 = 442923447U;

	t16 = (x517<<((x518|x519)%x520));

	if (t16 != 187694U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x573 = 324599LL;
	static int16_t x574 = -110;
	uint32_t x575 = UINT32_MAX;
	int64_t t17 = 4025296169LL;

	t17 = (x573<<((x574|x575)%x576));

	if (t17 != 324599LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x609 = 0U;
	static int8_t x610 = INT8_MIN;
	int16_t x611 = -6126;
	uint32_t x612 = 4U;
	volatile uint32_t t18 = 27037U;

	t18 = (x609<<((x610|x611)%x612));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x645 = 2902U;
	static int8_t x646 = INT8_MAX;
	uint32_t x647 = UINT32_MAX;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t19 = -40;

	t19 = (x645<<((x646|x647)%x648));

	if (t19 != 2902) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x677 = INT64_MAX;
	static int16_t x678 = 3;
	static uint8_t x679 = 89U;
	static int64_t x680 = -1LL;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x677<<((x678|x679)%x680));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x689 = 1U;
	uint64_t x690 = UINT64_MAX;
	static uint16_t x691 = UINT16_MAX;
	uint16_t x692 = 4U;
	volatile int32_t t21 = 9566;

	t21 = (x689<<((x690|x691)%x692));

	if (t21 != 8) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x725 = 303411;
	int32_t x726 = 1;
	int32_t x727 = -1;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t22 = 6943955;

	t22 = (x725<<((x726|x727)%x728));

	if (t22 != 303411) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x742 = 78806U;
	static int64_t x743 = INT64_MIN;
	static volatile int32_t x744 = -1;
	int64_t t23 = INT64_MAX;

	t23 = (x741<<((x742|x743)%x744));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x761 = UINT32_MAX;
	static uint32_t x762 = 2U;
	uint64_t x763 = 248941276527LLU;
	volatile uint16_t x764 = 40U;
	static volatile uint32_t t24 = 445U;

	t24 = (x761<<((x762|x763)%x764));

	if (t24 != 4294967168U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x817 = UINT64_MAX;
	uint8_t x818 = 106U;
	int8_t x820 = 1;

	t25 = (x817<<((x818|x819)%x820));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x829 = 37U;
	int32_t x830 = 3;
	uint16_t x831 = 2745U;
	int16_t x832 = -1;
	uint32_t t26 = 210813998U;

	t26 = (x829<<((x830|x831)%x832));

	if (t26 != 37U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x849 = UINT32_MAX;
	int8_t x850 = INT8_MAX;
	int16_t x851 = -1;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x849<<((x850|x851)%x852));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x865 = INT8_MAX;
	int8_t x867 = INT8_MAX;
	static volatile int32_t t28 = -7108;

	t28 = (x865<<((x866|x867)%x868));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x929 = 3103;
	static int8_t x930 = INT8_MAX;
	static uint16_t x931 = UINT16_MAX;
	volatile int8_t x932 = -6;
	int32_t t29 = -4058688;

	t29 = (x929<<((x930|x931)%x932));

	if (t29 != 24824) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1109 = 0;
	int8_t x1110 = 1;
	uint64_t x1111 = UINT64_MAX;
	static volatile int32_t x1112 = -1;
	volatile int32_t t30 = -6276;

	t30 = (x1109<<((x1110|x1111)%x1112));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1118 = INT8_MAX;
	int16_t x1119 = INT16_MAX;
	int8_t x1120 = -1;

	t31 = (x1117<<((x1118|x1119)%x1120));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1138 = UINT32_MAX;
	volatile uint8_t x1140 = 1U;
	static int32_t t32 = INT32_MAX;

	t32 = (x1137<<((x1138|x1139)%x1140));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1193 = 44;
	volatile int64_t x1194 = INT64_MIN;
	static uint32_t x1195 = 1190213655U;
	volatile int32_t t33 = 5227;

	t33 = (x1193<<((x1194|x1195)%x1196));

	if (t33 != 44) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1225 = 1U;
	volatile int8_t x1226 = 6;
	uint8_t x1227 = 8U;
	volatile int8_t x1228 = INT8_MIN;
	volatile int32_t t34 = 121434;

	t34 = (x1225<<((x1226|x1227)%x1228));

	if (t34 != 16384) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1253 = 105LLU;
	int32_t x1255 = 1238705;

	t35 = (x1253<<((x1254|x1255)%x1256));

	if (t35 != 105LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1265 = 2916400608663588LLU;
	static int16_t x1266 = INT16_MAX;
	int64_t x1267 = -1LL;
	int32_t x1268 = -1;
	static uint64_t t36 = 511LLU;

	t36 = (x1265<<((x1266|x1267)%x1268));

	if (t36 != 2916400608663588LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1281 = 44;
	uint32_t x1283 = 1928803234U;
	static uint32_t x1284 = 10U;
	volatile int32_t t37 = 106304228;

	t37 = (x1281<<((x1282|x1283)%x1284));

	if (t37 != 5632) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1313 = 416317U;
	volatile int32_t x1315 = INT32_MIN;
	volatile uint32_t t38 = 751989U;

	t38 = (x1313<<((x1314|x1315)%x1316));

	if (t38 != 416317U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1329 = 448233U;
	int8_t x1331 = -7;
	int8_t x1332 = INT8_MAX;
	volatile uint32_t t39 = 86U;

	t39 = (x1329<<((x1330|x1331)%x1332));

	if (t39 != 1802797056U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1346 = INT16_MIN;
	uint8_t x1347 = 10U;
	uint8_t x1348 = 1U;
	int32_t t40 = -11048942;

	t40 = (x1345<<((x1346|x1347)%x1348));

	if (t40 != 160) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1369 = 606293;
	int64_t x1371 = INT64_MIN;
	uint8_t x1372 = UINT8_MAX;
	static volatile int32_t t41 = -10;

	t41 = (x1369<<((x1370|x1371)%x1372));

	if (t41 != 606293) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1418 = 11853;
	int32_t x1419 = INT32_MIN;
	int32_t x1420 = -1;
	static volatile int32_t t42 = 2;

	t42 = (x1417<<((x1418|x1419)%x1420));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1441 = 2724LLU;
	int16_t x1442 = INT16_MIN;
	uint16_t x1443 = UINT16_MAX;
	volatile uint64_t t43 = 428640LLU;

	t43 = (x1441<<((x1442|x1443)%x1444));

	if (t43 != 2724LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1445 = UINT64_MAX;
	static int64_t x1446 = 3792817LL;
	volatile uint64_t t44 = 2754235356351857958LLU;

	t44 = (x1445<<((x1446|x1447)%x1448));

	if (t44 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1493 = UINT16_MAX;
	int64_t x1494 = -241773614LL;
	uint16_t x1495 = UINT16_MAX;
	int8_t x1496 = -1;
	int32_t t45 = 232;

	t45 = (x1493<<((x1494|x1495)%x1496));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1506 = INT8_MAX;
	static volatile uint32_t x1507 = UINT32_MAX;
	volatile uint32_t t46 = 795U;

	t46 = (x1505<<((x1506|x1507)%x1508));

	if (t46 != 4294967288U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x1541 = 14217U;
	int8_t x1543 = INT8_MIN;
	static int8_t x1544 = -1;
	uint32_t t47 = 1U;

	t47 = (x1541<<((x1542|x1543)%x1544));

	if (t47 != 14217U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1565 = 55684U;
	static uint8_t x1567 = 0U;
	uint8_t x1568 = 13U;
	volatile uint32_t t48 = 11906455U;

	t48 = (x1565<<((x1566|x1567)%x1568));

	if (t48 != 111368U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x1577 = 122U;
	static int16_t x1578 = INT16_MAX;
	uint64_t x1579 = UINT64_MAX;

	t49 = (x1577<<((x1578|x1579)%x1580));

	if (t49 != 122) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1605 = 115922494613135404LLU;
	static uint8_t x1606 = UINT8_MAX;
	int8_t x1608 = -7;
	volatile uint64_t t50 = 101908467179LLU;

	t50 = (x1605<<((x1606|x1607)%x1608));

	if (t50 != 927379956905083232LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1662 = INT64_MIN;
	int8_t x1663 = INT8_MAX;
	int8_t x1664 = -1;
	volatile int32_t t51 = -8631;

	t51 = (x1661<<((x1662|x1663)%x1664));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1669 = 3664344797307LLU;
	int32_t x1670 = INT32_MAX;
	int16_t x1671 = 0;
	int16_t x1672 = -29;
	uint64_t t52 = 184830342008157LLU;

	t52 = (x1669<<((x1670|x1671)%x1672));

	if (t52 != 469036134055296LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x1821 = 5U;
	uint16_t x1822 = 1U;
	static int8_t x1824 = -1;
	static int32_t t53 = 38;

	t53 = (x1821<<((x1822|x1823)%x1824));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x1841 = 4U;
	volatile int32_t x1843 = INT32_MAX;
	int32_t x1844 = -1;
	uint32_t t54 = 2U;

	t54 = (x1841<<((x1842|x1843)%x1844));

	if (t54 != 4U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1849 = 335586102U;
	uint32_t x1850 = UINT32_MAX;
	volatile int8_t x1851 = -1;
	static volatile uint32_t x1852 = UINT32_MAX;
	uint32_t t55 = 7776U;

	t55 = (x1849<<((x1850|x1851)%x1852));

	if (t55 != 335586102U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x1869 = UINT32_MAX;
	uint64_t x1870 = UINT64_MAX;
	uint8_t x1871 = UINT8_MAX;
	int64_t x1872 = INT64_MAX;
	uint32_t t56 = 197U;

	t56 = (x1869<<((x1870|x1871)%x1872));

	if (t56 != 4294967294U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1877 = INT16_MAX;
	int16_t x1878 = -1;
	static volatile int32_t x1879 = 31;
	volatile uint64_t x1880 = UINT64_MAX;
	static volatile int32_t t57 = -9415;

	t57 = (x1877<<((x1878|x1879)%x1880));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x1973 = 42LLU;
	static int32_t x1974 = -1;
	int64_t x1976 = -1LL;
	volatile uint64_t t58 = 204126610102888LLU;

	t58 = (x1973<<((x1974|x1975)%x1976));

	if (t58 != 42LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2001 = 3U;
	uint16_t x2002 = 8729U;
	int8_t x2003 = INT8_MIN;
	static volatile int8_t x2004 = -1;
	volatile int32_t t59 = 6;

	t59 = (x2001<<((x2002|x2003)%x2004));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2017 = INT8_MAX;
	uint32_t x2018 = 2323393U;
	int64_t x2019 = INT64_MAX;
	int16_t x2020 = INT16_MAX;

	t60 = (x2017<<((x2018|x2019)%x2020));

	if (t60 != 16256) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x2065 = 140U;
	uint8_t x2066 = 104U;
	static int64_t x2067 = -1LL;
	int64_t x2068 = -1LL;
	uint32_t t61 = 19998149U;

	t61 = (x2065<<((x2066|x2067)%x2068));

	if (t61 != 140U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2069 = UINT16_MAX;
	volatile uint16_t x2070 = 10049U;
	volatile int64_t x2072 = INT64_MAX;
	int32_t t62 = 11437953;

	t62 = (x2069<<((x2070|x2071)%x2072));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2085 = UINT16_MAX;
	int32_t x2087 = 932;
	volatile uint8_t x2088 = 6U;
	static int32_t t63 = 0;

	t63 = (x2085<<((x2086|x2087)%x2088));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x2105 = INT32_MAX;
	uint64_t x2107 = 1433064665532653593LLU;

	t64 = (x2105<<((x2106|x2107)%x2108));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2161 = UINT64_MAX;
	uint32_t x2162 = 464U;
	int32_t x2163 = -1;
	static uint8_t x2164 = UINT8_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = (x2161<<((x2162|x2163)%x2164));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2181 = UINT8_MAX;
	static int32_t x2182 = -5203179;
	volatile int64_t x2183 = INT64_MAX;
	int64_t x2184 = -1LL;
	static volatile int32_t t66 = 188129548;

	t66 = (x2181<<((x2182|x2183)%x2184));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2197 = 124U;
	uint16_t x2199 = 2U;
	static uint64_t x2200 = 20862504574771LLU;
	int32_t t67 = 274;

	t67 = (x2197<<((x2198|x2199)%x2200));

	if (t67 != 496) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2202 = 1U;
	static uint32_t x2203 = 1659U;

	t68 = (x2201<<((x2202|x2203)%x2204));

	if (t68 != 10013184) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x2213 = UINT32_MAX;
	uint16_t x2215 = UINT16_MAX;
	uint8_t x2216 = 62U;

	t69 = (x2213<<((x2214|x2215)%x2216));

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2217 = INT32_MAX;
	int8_t x2219 = -1;
	volatile int8_t x2220 = -1;
	static int32_t t70 = INT32_MAX;

	t70 = (x2217<<((x2218|x2219)%x2220));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2241 = 403455945U;
	int8_t x2242 = -1;
	static uint8_t x2243 = UINT8_MAX;
	volatile uint32_t t71 = 1814U;

	t71 = (x2241<<((x2242|x2243)%x2244));

	if (t71 != 403455945U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2257 = 11U;
	static int16_t x2258 = INT16_MIN;
	int16_t x2259 = 148;
	volatile uint32_t x2260 = 5U;
	static volatile uint32_t t72 = 5687U;

	t72 = (x2257<<((x2258|x2259)%x2260));

	if (t72 != 22U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2409 = 1;
	int16_t x2410 = 15880;
	volatile int64_t x2411 = 65LL;
	int8_t x2412 = 1;
	int32_t t73 = -111060;

	t73 = (x2409<<((x2410|x2411)%x2412));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x2457 = UINT32_MAX;
	uint8_t x2458 = 1U;
	int64_t x2459 = -323615194163LL;
	int8_t x2460 = -1;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x2457<<((x2458|x2459)%x2460));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2583 = 16U;
	uint8_t x2584 = UINT8_MAX;

	t75 = (x2581<<((x2582|x2583)%x2584));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2626 = 5;
	int16_t x2627 = 6634;
	int8_t x2628 = INT8_MAX;
	volatile uint64_t t76 = 12054LLU;

	t76 = (x2625<<((x2626|x2627)%x2628));

	if (t76 != 7325773778024136704LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x2630 = 943U;
	volatile int8_t x2631 = 1;
	int32_t x2632 = -1;
	volatile int32_t t77 = 0;

	t77 = (x2629<<((x2630|x2631)%x2632));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2689 = 488688228U;
	uint32_t t78 = 13U;

	t78 = (x2689<<((x2690|x2691)%x2692));

	if (t78 != 488688228U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2741 = 2U;
	volatile uint64_t x2742 = UINT64_MAX;
	static uint32_t x2743 = UINT32_MAX;
	volatile int64_t x2744 = -1LL;
	int32_t t79 = -984;

	t79 = (x2741<<((x2742|x2743)%x2744));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2814 = UINT32_MAX;
	static int64_t x2815 = INT64_MIN;

	t80 = (x2813<<((x2814|x2815)%x2816));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2849 = UINT16_MAX;
	int64_t x2850 = INT64_MIN;
	static uint16_t x2851 = 8102U;
	static int64_t x2852 = -1LL;
	static int32_t t81 = 115192;

	t81 = (x2849<<((x2850|x2851)%x2852));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2901 = 1U;
	int8_t x2902 = -1;
	uint8_t x2903 = 7U;
	int32_t t82 = 2;

	t82 = (x2901<<((x2902|x2903)%x2904));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2929 = 932LLU;
	volatile int64_t x2930 = -1LL;
	uint64_t x2931 = 2399961LLU;
	int8_t x2932 = -1;
	uint64_t t83 = 1911245LLU;

	t83 = (x2929<<((x2930|x2931)%x2932));

	if (t83 != 932LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x2933 = 5963U;
	volatile int16_t x2934 = INT16_MAX;
	int32_t x2935 = INT32_MAX;
	static int32_t x2936 = INT32_MAX;
	int32_t t84 = -402416;

	t84 = (x2933<<((x2934|x2935)%x2936));

	if (t84 != 5963) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2973 = INT16_MAX;
	int16_t x2974 = INT16_MIN;
	volatile int32_t t85 = -344516909;

	t85 = (x2973<<((x2974|x2975)%x2976));

	if (t85 != 65534) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x2981 = UINT64_MAX;
	volatile uint8_t x2982 = UINT8_MAX;
	uint64_t x2983 = 12LLU;
	uint8_t x2984 = UINT8_MAX;

	t86 = (x2981<<((x2982|x2983)%x2984));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3061 = 1U;
	int32_t x3062 = INT32_MAX;
	int16_t x3064 = -107;
	volatile int32_t t87 = -13698;

	t87 = (x3061<<((x3062|x3063)%x3064));

	if (t87 != 2097152) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x3125 = INT64_MAX;
	uint8_t x3127 = UINT8_MAX;
	int8_t x3128 = 1;
	static int64_t t88 = INT64_MAX;

	t88 = (x3125<<((x3126|x3127)%x3128));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x3137 = INT16_MAX;
	int8_t x3138 = -1;
	uint64_t x3139 = 103926358463698993LLU;
	static uint8_t x3140 = UINT8_MAX;
	int32_t t89 = 62673770;

	t89 = (x3137<<((x3138|x3139)%x3140));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3195 = -1;
	int16_t x3196 = -1;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (x3193<<((x3194|x3195)%x3196));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3197 = INT16_MAX;
	static int64_t x3198 = 1893810LL;
	uint64_t x3199 = UINT64_MAX;
	uint32_t x3200 = UINT32_MAX;
	int32_t t91 = 327;

	t91 = (x3197<<((x3198|x3199)%x3200));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3201 = 1565U;
	int32_t x3202 = INT32_MIN;
	int8_t x3203 = INT8_MIN;
	int8_t x3204 = INT8_MIN;
	int32_t t92 = -15598;

	t92 = (x3201<<((x3202|x3203)%x3204));

	if (t92 != 1565) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3234 = INT16_MIN;
	uint32_t x3235 = 1157U;
	static volatile uint16_t x3236 = 1U;

	t93 = (x3233<<((x3234|x3235)%x3236));

	if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x3241 = UINT64_MAX;
	static uint8_t x3242 = 52U;
	int8_t x3244 = 1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x3241<<((x3242|x3243)%x3244));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x3250 = 124U;
	static uint32_t t95 = 17455359U;

	t95 = (x3249<<((x3250|x3251)%x3252));

	if (t95 != 920U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x3253 = INT8_MAX;
	int32_t x3254 = INT32_MAX;
	uint32_t x3255 = 3102572U;

	t96 = (x3253<<((x3254|x3255)%x3256));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3265 = 238493146031LLU;
	int16_t x3266 = -1;
	uint64_t x3268 = UINT64_MAX;
	static uint64_t t97 = 307939230308823818LLU;

	t97 = (x3265<<((x3266|x3267)%x3268));

	if (t97 != 238493146031LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3277 = INT8_MAX;
	static int8_t x3278 = INT8_MAX;
	volatile uint8_t x3279 = UINT8_MAX;
	volatile int32_t t98 = 8;

	t98 = (x3277<<((x3278|x3279)%x3280));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x3301 = 43LL;
	uint8_t x3302 = 1U;
	volatile uint64_t x3303 = UINT64_MAX;
	volatile uint16_t x3304 = UINT16_MAX;

	t99 = (x3301<<((x3302|x3303)%x3304));

	if (t99 != 43LL) { NG(); } else { ; }
	
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

