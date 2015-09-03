#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x14 = INT64_MAX;
int32_t x88 = 0;
int8_t x138 = -1;
volatile int32_t x151 = -1;
int32_t t5 = -125930;
int32_t t6 = 7237;
int64_t x305 = 985845LL;
int64_t x313 = INT64_MIN;
uint64_t x314 = UINT64_MAX;
int16_t x343 = -1;
static uint8_t x365 = 11U;
int32_t x434 = INT32_MAX;
volatile int64_t x436 = INT64_MIN;
volatile int16_t x448 = INT16_MIN;
static int32_t x481 = 10;
volatile uint32_t x484 = UINT32_MAX;
int32_t t19 = -164;
int8_t x752 = -1;
static int32_t t22 = 1350;
int8_t x785 = INT8_MIN;
volatile uint8_t x833 = UINT8_MAX;
int8_t x836 = -7;
int32_t t25 = -98;
int8_t x896 = INT8_MIN;
uint8_t x1078 = 1U;
int32_t x1218 = 1;
uint64_t x1219 = UINT64_MAX;
int16_t x1220 = -1;
int8_t x1273 = INT8_MIN;
uint32_t x1278 = UINT32_MAX;
int16_t x1349 = -775;
static volatile int32_t t37 = -2374;
int8_t x1360 = -1;
int16_t x1402 = INT16_MIN;
uint16_t x1466 = UINT16_MAX;
uint64_t x1549 = 40811LLU;
int32_t x1586 = 20438787;
uint16_t x1587 = 0U;
int64_t x1588 = -1LL;
int32_t t45 = 3253;
static uint32_t x1645 = UINT32_MAX;
int32_t x1686 = INT32_MAX;
volatile int16_t x2051 = -1;
int32_t x2198 = -1;
volatile int16_t x2207 = -1;
uint16_t x2278 = 396U;
volatile int16_t x2344 = -1;
uint16_t x2353 = 29267U;
static int8_t x2354 = INT8_MIN;
uint64_t x2413 = 1882614LLU;
static uint64_t x2418 = 2046522LLU;
int32_t x2530 = INT32_MIN;
int16_t x2585 = -1;
int16_t x2586 = 192;
int16_t x2587 = INT16_MAX;
int32_t x2641 = -1;
uint64_t x2678 = UINT64_MAX;
int16_t x2949 = -998;
static uint16_t x2950 = 48U;
volatile int32_t t78 = -37768481;
uint8_t x3018 = 20U;
uint64_t x3020 = UINT64_MAX;
volatile uint32_t x3030 = UINT32_MAX;
volatile int32_t x3053 = INT32_MAX;
int32_t t81 = 3;
volatile int32_t t82 = -7984059;
static uint8_t x3129 = UINT8_MAX;
int64_t x3130 = 4153070082366050349LL;
volatile int32_t t85 = -564;
int8_t x3247 = -1;
int8_t x3372 = -1;
uint32_t x3519 = UINT32_MAX;
int32_t t95 = 2889732;
int32_t x3622 = 2;
volatile int32_t t96 = 157828899;
static uint32_t x3652 = UINT32_MAX;
static volatile uint32_t x3753 = UINT32_MAX;
int16_t x3754 = 487;
volatile int32_t t99 = 211332791;


void f0(void) {
	int8_t x13 = INT8_MIN;
	int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	int32_t t0 = 0;

	t0 = ((x13==x14)<<(x15-x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x37 = INT8_MIN;
	int8_t x38 = 1;
	uint32_t x39 = UINT32_MAX;
	volatile int16_t x40 = -3;
	int32_t t1 = -202;

	t1 = ((x37==x38)<<(x39-x40));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x85 = 48LLU;
	int32_t x86 = 1;
	uint32_t x87 = 3U;
	volatile int32_t t2 = 27084391;

	t2 = ((x85==x86)<<(x87-x88));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x137 = 3U;
	uint32_t x139 = UINT32_MAX;
	int16_t x140 = -1;
	static volatile int32_t t3 = -176540502;

	t3 = ((x137==x138)<<(x139-x140));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x149 = 1;
	uint16_t x150 = 0U;
	int8_t x152 = -1;
	volatile int32_t t4 = -3;

	t4 = ((x149==x150)<<(x151-x152));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x173 = 0U;
	static int64_t x174 = -1LL;
	int16_t x175 = -1;
	int8_t x176 = -1;

	t5 = ((x173==x174)<<(x175-x176));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x201 = -6;
	volatile int8_t x202 = INT8_MIN;
	static volatile int16_t x203 = -726;
	int16_t x204 = -755;

	t6 = ((x201==x202)<<(x203-x204));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x306 = 0;
	int64_t x307 = -1LL;
	static volatile int16_t x308 = -1;
	int32_t t7 = -5169691;

	t7 = ((x305==x306)<<(x307-x308));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t8 = -449240202;

	t8 = ((x313==x314)<<(x315-x316));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x333 = 308LLU;
	int8_t x334 = 1;
	int8_t x335 = -1;
	int16_t x336 = -1;
	volatile int32_t t9 = -54764;

	t9 = ((x333==x334)<<(x335-x336));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x341 = 0;
	int8_t x342 = INT8_MIN;
	int16_t x344 = -1;
	int32_t t10 = 15;

	t10 = ((x341==x342)<<(x343-x344));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x349 = -4102914;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 0U;
	int16_t x352 = -1;
	int32_t t11 = -5089;

	t11 = ((x349==x350)<<(x351-x352));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x366 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = -1;
	int32_t t12 = 54426;

	t12 = ((x365==x366)<<(x367-x368));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x397 = 11918632305122591LLU;
	static int16_t x398 = -1;
	static volatile int16_t x399 = 3;
	static int8_t x400 = -1;
	static int32_t t13 = -556467545;

	t13 = ((x397==x398)<<(x399-x400));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x417 = 3167753737644938921LLU;
	uint8_t x418 = UINT8_MAX;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -3;
	volatile int32_t t14 = 32272061;

	t14 = ((x417==x418)<<(x419-x420));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x425 = -1LL;
	static volatile int32_t x426 = -1;
	static int16_t x427 = INT16_MIN;
	int16_t x428 = INT16_MIN;
	volatile int32_t t15 = -3083476;

	t15 = ((x425==x426)<<(x427-x428));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x433 = UINT8_MAX;
	int64_t x435 = INT64_MIN;
	volatile int32_t t16 = -12155;

	t16 = ((x433==x434)<<(x435-x436));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x445 = INT32_MIN;
	volatile int64_t x446 = INT64_MIN;
	static int16_t x447 = INT16_MIN;
	volatile int32_t t17 = -6;

	t17 = ((x445==x446)<<(x447-x448));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x482 = -1;
	uint32_t x483 = 9U;
	static int32_t t18 = -163246;

	t18 = ((x481==x482)<<(x483-x484));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x557 = INT32_MAX;
	static volatile int32_t x558 = -1;
	volatile int8_t x559 = INT8_MIN;
	static int8_t x560 = INT8_MIN;

	t19 = ((x557==x558)<<(x559-x560));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x609 = INT32_MAX;
	static int8_t x610 = -21;
	int32_t x611 = -1;
	static volatile int16_t x612 = -1;
	static volatile int32_t t20 = 182;

	t20 = ((x609==x610)<<(x611-x612));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x657 = -58;
	int64_t x658 = INT64_MIN;
	int16_t x659 = -1;
	static int64_t x660 = -1LL;
	int32_t t21 = 0;

	t21 = ((x657==x658)<<(x659-x660));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x749 = UINT64_MAX;
	uint32_t x750 = 375453902U;
	int32_t x751 = -1;

	t22 = ((x749==x750)<<(x751-x752));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x786 = UINT8_MAX;
	uint8_t x787 = 1U;
	uint64_t x788 = UINT64_MAX;
	static int32_t t23 = -89256;

	t23 = ((x785==x786)<<(x787-x788));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x834 = 1LLU;
	int8_t x835 = 14;
	int32_t t24 = -870788;

	t24 = ((x833==x834)<<(x835-x836));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x841 = 120511U;
	int32_t x842 = INT32_MIN;
	uint8_t x843 = UINT8_MAX;
	static uint8_t x844 = UINT8_MAX;

	t25 = ((x841==x842)<<(x843-x844));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x893 = INT16_MIN;
	int32_t x894 = INT32_MIN;
	volatile int8_t x895 = INT8_MIN;
	static int32_t t26 = 17;

	t26 = ((x893==x894)<<(x895-x896));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x937 = INT16_MAX;
	volatile uint64_t x938 = 5296201664861682095LLU;
	volatile uint8_t x939 = 2U;
	int8_t x940 = -1;
	volatile int32_t t27 = 107;

	t27 = ((x937==x938)<<(x939-x940));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1077 = -1LL;
	static uint64_t x1079 = UINT64_MAX;
	uint64_t x1080 = UINT64_MAX;
	int32_t t28 = -1;

	t28 = ((x1077==x1078)<<(x1079-x1080));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1141 = -1LL;
	volatile int8_t x1142 = INT8_MIN;
	static uint32_t x1143 = 20U;
	static uint8_t x1144 = 0U;
	volatile int32_t t29 = 1;

	t29 = ((x1141==x1142)<<(x1143-x1144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1173 = INT32_MAX;
	int8_t x1174 = INT8_MIN;
	int16_t x1175 = 2;
	int32_t x1176 = 0;
	volatile int32_t t30 = 54952601;

	t30 = ((x1173==x1174)<<(x1175-x1176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1205 = -1LL;
	int64_t x1206 = INT64_MIN;
	volatile int8_t x1207 = 3;
	volatile uint64_t x1208 = UINT64_MAX;
	static int32_t t31 = -18833675;

	t31 = ((x1205==x1206)<<(x1207-x1208));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1217 = -1;
	int32_t t32 = 1777890;

	t32 = ((x1217==x1218)<<(x1219-x1220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1225 = 23;
	volatile int16_t x1226 = INT16_MAX;
	uint32_t x1227 = 0U;
	uint32_t x1228 = UINT32_MAX;
	volatile int32_t t33 = -3820;

	t33 = ((x1225==x1226)<<(x1227-x1228));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1274 = INT8_MAX;
	int16_t x1275 = INT16_MAX;
	static volatile int16_t x1276 = INT16_MAX;
	volatile int32_t t34 = -7685;

	t34 = ((x1273==x1274)<<(x1275-x1276));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1277 = -1LL;
	uint32_t x1279 = UINT32_MAX;
	int16_t x1280 = -1;
	static int32_t t35 = -118401;

	t35 = ((x1277==x1278)<<(x1279-x1280));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1313 = INT8_MAX;
	int32_t x1314 = INT32_MIN;
	volatile uint8_t x1315 = 1U;
	uint64_t x1316 = UINT64_MAX;
	int32_t t36 = -609;

	t36 = ((x1313==x1314)<<(x1315-x1316));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1350 = 249813860275LLU;
	int32_t x1351 = INT32_MAX;
	int32_t x1352 = INT32_MAX;

	t37 = ((x1349==x1350)<<(x1351-x1352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1357 = INT64_MAX;
	volatile int16_t x1358 = INT16_MIN;
	static int64_t x1359 = -1LL;
	int32_t t38 = -15;

	t38 = ((x1357==x1358)<<(x1359-x1360));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1369 = 8511;
	volatile int64_t x1370 = -1LL;
	int8_t x1371 = -1;
	static int8_t x1372 = -1;
	int32_t t39 = -1402;

	t39 = ((x1369==x1370)<<(x1371-x1372));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1401 = UINT64_MAX;
	uint16_t x1403 = UINT16_MAX;
	uint16_t x1404 = UINT16_MAX;
	int32_t t40 = 109;

	t40 = ((x1401==x1402)<<(x1403-x1404));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x1465 = -1LL;
	int8_t x1467 = -1;
	volatile uint32_t x1468 = UINT32_MAX;
	volatile int32_t t41 = -19;

	t41 = ((x1465==x1466)<<(x1467-x1468));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1529 = -1;
	uint8_t x1530 = UINT8_MAX;
	uint8_t x1531 = 1U;
	static volatile int32_t x1532 = -1;
	int32_t t42 = -1;

	t42 = ((x1529==x1530)<<(x1531-x1532));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x1550 = -1;
	int16_t x1551 = -1;
	int64_t x1552 = -1LL;
	static int32_t t43 = 260963;

	t43 = ((x1549==x1550)<<(x1551-x1552));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1565 = 62;
	int32_t x1566 = INT32_MAX;
	static volatile int8_t x1567 = -1;
	static volatile int8_t x1568 = -1;
	int32_t t44 = -126;

	t44 = ((x1565==x1566)<<(x1567-x1568));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1585 = INT64_MIN;

	t45 = ((x1585==x1586)<<(x1587-x1588));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1646 = INT32_MAX;
	volatile int8_t x1647 = 1;
	static int16_t x1648 = -1;
	static int32_t t46 = 41701;

	t46 = ((x1645==x1646)<<(x1647-x1648));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x1661 = -2;
	static int16_t x1662 = INT16_MAX;
	uint8_t x1663 = 1U;
	int64_t x1664 = -1LL;
	volatile int32_t t47 = -130215013;

	t47 = ((x1661==x1662)<<(x1663-x1664));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1685 = 1LL;
	int8_t x1687 = -1;
	int8_t x1688 = -1;
	volatile int32_t t48 = -520252497;

	t48 = ((x1685==x1686)<<(x1687-x1688));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1741 = INT32_MIN;
	int32_t x1742 = INT32_MAX;
	volatile int32_t x1743 = -1;
	int16_t x1744 = -1;
	int32_t t49 = -720496;

	t49 = ((x1741==x1742)<<(x1743-x1744));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1853 = -16;
	int32_t x1854 = INT32_MAX;
	volatile int8_t x1855 = 11;
	int16_t x1856 = -1;
	int32_t t50 = 181;

	t50 = ((x1853==x1854)<<(x1855-x1856));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2009 = UINT32_MAX;
	int8_t x2010 = INT8_MIN;
	static int8_t x2011 = INT8_MIN;
	volatile int8_t x2012 = INT8_MIN;
	int32_t t51 = 833;

	t51 = ((x2009==x2010)<<(x2011-x2012));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2029 = INT32_MIN;
	int64_t x2030 = INT64_MAX;
	int16_t x2031 = -1;
	volatile int8_t x2032 = -1;
	int32_t t52 = -18076;

	t52 = ((x2029==x2030)<<(x2031-x2032));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2049 = UINT64_MAX;
	int8_t x2050 = -1;
	int16_t x2052 = -1;
	int32_t t53 = 6;

	t53 = ((x2049==x2050)<<(x2051-x2052));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2169 = -1127861552664978327LL;
	uint32_t x2170 = 20624008U;
	int8_t x2171 = 1;
	int8_t x2172 = -1;
	volatile int32_t t54 = -507315;

	t54 = ((x2169==x2170)<<(x2171-x2172));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2189 = 82U;
	int16_t x2190 = -1;
	int8_t x2191 = -1;
	int64_t x2192 = -1LL;
	static volatile int32_t t55 = 83041921;

	t55 = ((x2189==x2190)<<(x2191-x2192));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2197 = -1;
	int16_t x2199 = 1;
	int32_t x2200 = -1;
	int32_t t56 = 5619824;

	t56 = ((x2197==x2198)<<(x2199-x2200));

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2205 = 0;
	int32_t x2206 = 1;
	int32_t x2208 = -1;
	volatile int32_t t57 = -61042265;

	t57 = ((x2205==x2206)<<(x2207-x2208));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2277 = 7U;
	int32_t x2279 = -1;
	int8_t x2280 = -1;
	int32_t t58 = 2;

	t58 = ((x2277==x2278)<<(x2279-x2280));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2313 = 54710038U;
	int8_t x2314 = -7;
	int64_t x2315 = -1LL;
	volatile int16_t x2316 = -1;
	int32_t t59 = 193069;

	t59 = ((x2313==x2314)<<(x2315-x2316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2341 = -327;
	uint16_t x2342 = UINT16_MAX;
	int64_t x2343 = -1LL;
	volatile int32_t t60 = 1;

	t60 = ((x2341==x2342)<<(x2343-x2344));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2355 = -1;
	uint32_t x2356 = UINT32_MAX;
	int32_t t61 = 7126;

	t61 = ((x2353==x2354)<<(x2355-x2356));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2389 = UINT64_MAX;
	int8_t x2390 = INT8_MAX;
	volatile uint16_t x2391 = 8U;
	static volatile int16_t x2392 = -17;
	int32_t t62 = 0;

	t62 = ((x2389==x2390)<<(x2391-x2392));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x2414 = 60LLU;
	static int32_t x2415 = INT32_MIN;
	volatile int32_t x2416 = INT32_MIN;
	volatile int32_t t63 = -793147511;

	t63 = ((x2413==x2414)<<(x2415-x2416));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x2417 = 3984407090260LLU;
	int8_t x2419 = INT8_MAX;
	volatile int8_t x2420 = INT8_MAX;
	volatile int32_t t64 = 92453747;

	t64 = ((x2417==x2418)<<(x2419-x2420));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2441 = INT16_MIN;
	static uint32_t x2442 = 13U;
	int8_t x2443 = 0;
	volatile int8_t x2444 = 0;
	int32_t t65 = 189745;

	t65 = ((x2441==x2442)<<(x2443-x2444));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2493 = -3;
	volatile int64_t x2494 = INT64_MIN;
	int32_t x2495 = -1;
	int16_t x2496 = -1;
	volatile int32_t t66 = 297;

	t66 = ((x2493==x2494)<<(x2495-x2496));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2509 = INT16_MIN;
	int64_t x2510 = 649818101LL;
	uint64_t x2511 = UINT64_MAX;
	volatile int32_t x2512 = -1;
	volatile int32_t t67 = 24786;

	t67 = ((x2509==x2510)<<(x2511-x2512));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2529 = INT8_MAX;
	int8_t x2531 = -1;
	static int8_t x2532 = -1;
	int32_t t68 = -657809016;

	t68 = ((x2529==x2530)<<(x2531-x2532));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2588 = INT16_MAX;
	int32_t t69 = 2679;

	t69 = ((x2585==x2586)<<(x2587-x2588));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2589 = INT8_MIN;
	volatile uint64_t x2590 = 24LLU;
	static int16_t x2591 = 1;
	static int16_t x2592 = -1;
	volatile int32_t t70 = -30;

	t70 = ((x2589==x2590)<<(x2591-x2592));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2642 = -2;
	int8_t x2643 = 7;
	int16_t x2644 = -1;
	volatile int32_t t71 = 41;

	t71 = ((x2641==x2642)<<(x2643-x2644));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2653 = INT8_MAX;
	int8_t x2654 = INT8_MAX;
	uint8_t x2655 = 44U;
	uint8_t x2656 = 23U;
	static int32_t t72 = 1240;

	t72 = ((x2653==x2654)<<(x2655-x2656));

	if (t72 != 2097152) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x2677 = 11;
	int8_t x2679 = INT8_MAX;
	static int8_t x2680 = INT8_MAX;
	volatile int32_t t73 = -30576;

	t73 = ((x2677==x2678)<<(x2679-x2680));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2745 = INT32_MIN;
	int64_t x2746 = INT64_MIN;
	volatile int32_t x2747 = -1;
	int16_t x2748 = -1;
	volatile int32_t t74 = 1087243;

	t74 = ((x2745==x2746)<<(x2747-x2748));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2809 = 4881U;
	int16_t x2810 = -1;
	int64_t x2811 = -1LL;
	volatile int32_t x2812 = -1;
	volatile int32_t t75 = -313820858;

	t75 = ((x2809==x2810)<<(x2811-x2812));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2917 = -1LL;
	uint64_t x2918 = 10625358965548LLU;
	volatile int64_t x2919 = INT64_MIN;
	volatile int64_t x2920 = INT64_MIN;
	int32_t t76 = 172660973;

	t76 = ((x2917==x2918)<<(x2919-x2920));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2951 = UINT64_MAX;
	int64_t x2952 = -1LL;
	volatile int32_t t77 = 207;

	t77 = ((x2949==x2950)<<(x2951-x2952));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2973 = 1;
	int8_t x2974 = 13;
	int8_t x2975 = -1;
	int64_t x2976 = -1LL;

	t78 = ((x2973==x2974)<<(x2975-x2976));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x3017 = -1;
	int64_t x3019 = -1LL;
	volatile int32_t t79 = 7398858;

	t79 = ((x3017==x3018)<<(x3019-x3020));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3029 = 12U;
	uint8_t x3031 = 2U;
	int32_t x3032 = -2;
	int32_t t80 = -272;

	t80 = ((x3029==x3030)<<(x3031-x3032));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3054 = INT32_MAX;
	uint32_t x3055 = 15U;
	int64_t x3056 = -1LL;

	t81 = ((x3053==x3054)<<(x3055-x3056));

	if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3065 = -129779982789788LL;
	uint16_t x3066 = 19U;
	static int8_t x3067 = INT8_MIN;
	static volatile int8_t x3068 = INT8_MIN;

	t82 = ((x3065==x3066)<<(x3067-x3068));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3131 = UINT32_MAX;
	int32_t x3132 = -1;
	volatile int32_t t83 = -993;

	t83 = ((x3129==x3130)<<(x3131-x3132));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3213 = INT64_MAX;
	int16_t x3214 = INT16_MIN;
	uint16_t x3215 = 3U;
	volatile int8_t x3216 = -1;
	static int32_t t84 = 702282;

	t84 = ((x3213==x3214)<<(x3215-x3216));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x3241 = 459668LLU;
	int32_t x3242 = INT32_MIN;
	int64_t x3243 = INT64_MIN;
	int64_t x3244 = INT64_MIN;

	t85 = ((x3241==x3242)<<(x3243-x3244));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3245 = -5;
	int8_t x3246 = INT8_MAX;
	int16_t x3248 = -1;
	static volatile int32_t t86 = 47495286;

	t86 = ((x3245==x3246)<<(x3247-x3248));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x3313 = INT64_MIN;
	int64_t x3314 = INT64_MAX;
	int64_t x3315 = 0LL;
	volatile int16_t x3316 = -1;
	int32_t t87 = -136534328;

	t87 = ((x3313==x3314)<<(x3315-x3316));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3321 = INT16_MIN;
	int8_t x3322 = -1;
	static uint64_t x3323 = UINT64_MAX;
	int32_t x3324 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x3321==x3322)<<(x3323-x3324));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3333 = 23984577U;
	int16_t x3334 = -1;
	static volatile uint32_t x3335 = UINT32_MAX;
	static int16_t x3336 = -1;
	static int32_t t89 = 18626546;

	t89 = ((x3333==x3334)<<(x3335-x3336));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x3365 = INT16_MIN;
	static int32_t x3366 = INT32_MAX;
	volatile uint64_t x3367 = UINT64_MAX;
	uint64_t x3368 = UINT64_MAX;
	volatile int32_t t90 = 24022740;

	t90 = ((x3365==x3366)<<(x3367-x3368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3369 = -51;
	uint8_t x3370 = UINT8_MAX;
	static int32_t x3371 = -1;
	volatile int32_t t91 = -30;

	t91 = ((x3369==x3370)<<(x3371-x3372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x3373 = UINT64_MAX;
	int8_t x3374 = INT8_MAX;
	volatile uint16_t x3375 = 8U;
	int8_t x3376 = 0;
	volatile int32_t t92 = 119999;

	t92 = ((x3373==x3374)<<(x3375-x3376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3429 = INT64_MIN;
	static int16_t x3430 = INT16_MAX;
	volatile uint64_t x3431 = UINT64_MAX;
	int32_t x3432 = -1;
	static int32_t t93 = -8964;

	t93 = ((x3429==x3430)<<(x3431-x3432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x3453 = UINT16_MAX;
	uint8_t x3454 = UINT8_MAX;
	int8_t x3455 = INT8_MIN;
	int8_t x3456 = INT8_MIN;
	int32_t t94 = 127949305;

	t94 = ((x3453==x3454)<<(x3455-x3456));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x3517 = UINT64_MAX;
	int32_t x3518 = INT32_MAX;
	int32_t x3520 = -1;

	t95 = ((x3517==x3518)<<(x3519-x3520));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3621 = UINT8_MAX;
	uint64_t x3623 = UINT64_MAX;
	uint64_t x3624 = UINT64_MAX;

	t96 = ((x3621==x3622)<<(x3623-x3624));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3649 = 61LL;
	int8_t x3650 = -54;
	static int8_t x3651 = 15;
	int32_t t97 = -29731;

	t97 = ((x3649==x3650)<<(x3651-x3652));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3713 = -1;
	volatile int32_t x3714 = INT32_MAX;
	uint8_t x3715 = 1U;
	volatile int32_t x3716 = -15;
	static volatile int32_t t98 = -4014;

	t98 = ((x3713==x3714)<<(x3715-x3716));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x3755 = INT32_MIN;
	int32_t x3756 = INT32_MIN;

	t99 = ((x3753==x3754)<<(x3755-x3756));

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

