#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = 5;
int64_t x49 = 40135LL;
static int8_t x52 = 4;
uint16_t x85 = 112U;
int16_t x88 = 2;
int64_t t2 = 152335LL;
int16_t x118 = INT16_MAX;
int8_t x215 = -1;
int16_t x241 = INT16_MAX;
uint16_t x314 = 4U;
volatile int32_t x371 = 701;
volatile uint64_t t12 = 180936652240834LLU;
static volatile uint32_t x509 = UINT32_MAX;
static uint32_t t13 = 56U;
volatile int64_t t16 = -36148097247695826LL;
uint8_t x664 = 1U;
volatile uint16_t x733 = UINT16_MAX;
static int32_t x769 = INT32_MIN;
volatile uint64_t x1057 = 336835432584251LLU;
uint64_t x1185 = UINT64_MAX;
int8_t x1187 = 0;
int8_t x1351 = INT8_MIN;
int64_t t31 = 7398LL;
int8_t x1377 = -11;
int8_t x1380 = 1;
int8_t x1421 = INT8_MIN;
int16_t x1447 = -3;
static volatile uint8_t x1448 = 1U;
uint64_t x1550 = UINT64_MAX;
uint32_t x1607 = UINT32_MAX;
uint32_t x1643 = 1U;
int8_t x1683 = -1;
volatile int32_t t42 = 2732;
int16_t x1726 = INT16_MIN;
int32_t t45 = INT32_MAX;
volatile int32_t x1798 = 28523;
int64_t x1845 = INT64_MIN;
int8_t x1846 = INT8_MIN;
int16_t x1847 = -1;
int16_t x1938 = -1;
int32_t x2178 = -1;
volatile int64_t x2231 = -1LL;
int8_t x2232 = 2;
static uint64_t t53 = 24104810589886672LLU;
int64_t x2243 = 92303LL;
static volatile uint16_t x2284 = 1U;
static int32_t x2310 = -1;
int32_t t57 = -63063;
uint64_t x2396 = 8LLU;
int64_t t58 = -776828598561039LL;
int16_t x2593 = INT16_MIN;
int16_t x2594 = INT16_MAX;
int8_t x2596 = 16;
int16_t x2627 = INT16_MIN;
static volatile uint64_t t61 = 12814204706329336LLU;
uint64_t x2669 = UINT64_MAX;
uint16_t x2672 = 24U;
int32_t x2673 = INT32_MIN;
volatile uint8_t x2694 = UINT8_MAX;
volatile int16_t x2696 = 2;
int8_t x2809 = -6;
int16_t x2811 = INT16_MIN;
volatile uint8_t x2871 = 0U;
int8_t x2972 = 12;
int8_t x3073 = INT8_MAX;
uint32_t x3159 = 5616U;
static int64_t x3166 = -1LL;
volatile int8_t x3167 = -1;
int32_t x3176 = 1;
uint64_t t76 = 570LLU;
static volatile uint32_t x3190 = 55U;
int32_t x3191 = INT32_MAX;
int64_t x3192 = 0LL;
uint64_t t77 = 176884976318LLU;
uint8_t x3212 = 2U;
int32_t x3245 = -1;
uint32_t x3290 = UINT32_MAX;
volatile int16_t x3292 = 16;
static int32_t x3303 = 2007300;
volatile uint32_t t82 = 10U;
int32_t x3357 = INT32_MIN;
uint32_t t83 = 1U;
static uint16_t x3389 = 101U;
int8_t x3390 = INT8_MAX;
volatile int16_t x3409 = -81;
int64_t x3414 = INT64_MIN;
uint16_t x3419 = 2579U;
int64_t x3466 = -1671322211591337378LL;
static volatile int64_t t89 = 176LL;
volatile int64_t t90 = 2790826316197077085LL;
uint16_t x3529 = UINT16_MAX;
int8_t x3530 = 12;
static uint32_t x3531 = 29471473U;
volatile uint8_t x3532 = 14U;
volatile int64_t x3653 = INT64_MAX;
int64_t x3709 = -1LL;
uint64_t x3710 = 21448542LLU;
int8_t x3825 = -1;
volatile uint8_t x3828 = 1U;


void f0(void) {
	static uint32_t x9 = UINT32_MAX;
	int8_t x10 = INT8_MIN;
	int16_t x11 = INT16_MIN;
	volatile uint32_t t0 = 167848U;

	t0 = (((x9%x10)-x11)>>x12);

	if (t0 != 1027U) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x50 = INT8_MIN;
	int16_t x51 = INT16_MIN;
	volatile int64_t t1 = -27LL;

	t1 = (((x49%x50)-x51)>>x52);

	if (t1 != 2052LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x86 = -1LL;
	int16_t x87 = INT16_MIN;

	t2 = (((x85%x86)-x87)>>x88);

	if (t2 != 8192LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x117 = 855U;
	volatile uint32_t x119 = UINT32_MAX;
	static volatile uint8_t x120 = 24U;
	uint32_t t3 = 75787U;

	t3 = (((x117%x118)-x119)>>x120);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x121 = 7411324117518LLU;
	uint64_t x122 = 1334196363718814LLU;
	int32_t x123 = INT32_MIN;
	static uint8_t x124 = 14U;
	static volatile uint64_t t4 = 72989808LLU;

	t4 = (((x121%x122)-x123)>>x124);

	if (t4 != 452482397LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x213 = 0U;
	volatile int8_t x214 = INT8_MIN;
	int8_t x216 = 3;
	static int32_t t5 = 76;

	t5 = (((x213%x214)-x215)>>x216);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 67U;
	volatile int8_t x244 = 1;
	volatile int32_t t6 = 1;

	t6 = (((x241%x242)-x243)>>x244);

	if (t6 != 16350) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x269 = 9752972708328581LLU;
	static int16_t x270 = INT16_MAX;
	uint32_t x271 = 623U;
	uint16_t x272 = 1U;
	volatile uint64_t t7 = 3LLU;

	t7 = (((x269%x270)-x271)>>x272);

	if (t7 != 4076LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x289 = UINT16_MAX;
	volatile int8_t x290 = INT8_MIN;
	volatile int32_t x291 = -9114;
	int8_t x292 = 2;
	volatile int32_t t8 = -133642;

	t8 = (((x289%x290)-x291)>>x292);

	if (t8 != 2310) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x313 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	uint32_t x316 = 0U;
	int32_t t9 = 43097;

	t9 = (((x313%x314)-x315)>>x316);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x337 = 19550774228424518LLU;
	int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	static int8_t x340 = 57;
	uint64_t t10 = 8376LLU;

	t10 = (((x337%x338)-x339)>>x340);

	if (t10 != 64LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x369 = INT64_MAX;
	volatile uint64_t x370 = 1174913LLU;
	int8_t x372 = 1;
	uint64_t t11 = 441233643629LLU;

	t11 = (((x369%x370)-x371)>>x372);

	if (t11 != 476303LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x489 = -8643;
	static uint64_t x490 = UINT64_MAX;
	uint8_t x491 = UINT8_MAX;
	static int16_t x492 = 3;

	t12 = (((x489%x490)-x491)>>x492);

	if (t12 != 2305843009213692839LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x510 = -956;
	volatile uint8_t x511 = 28U;
	volatile int32_t x512 = 5;

	t13 = (((x509%x510)-x511)>>x512);

	if (t13 != 28U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x541 = -1LL;
	int32_t x542 = INT32_MAX;
	int32_t x543 = -1;
	volatile uint16_t x544 = 0U;
	volatile int64_t t14 = -7623140339560256LL;

	t14 = (((x541%x542)-x543)>>x544);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x649 = 178431U;
	volatile uint8_t x650 = 76U;
	volatile uint16_t x651 = UINT16_MAX;
	volatile uint16_t x652 = 1U;
	static uint32_t t15 = 75013U;

	t15 = (((x649%x650)-x651)>>x652);

	if (t15 != 2147450910U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x657 = INT64_MAX;
	int16_t x658 = INT16_MAX;
	int32_t x659 = -1;
	static int16_t x660 = 3;

	t16 = (((x657%x658)-x659)>>x660);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x661 = 73U;
	int8_t x662 = 1;
	uint8_t x663 = 0U;
	int32_t t17 = 57546;

	t17 = (((x661%x662)-x663)>>x664);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x713 = INT8_MIN;
	uint8_t x714 = 13U;
	uint32_t x715 = 1382377010U;
	static volatile int8_t x716 = 4;
	volatile uint32_t t18 = 21835U;

	t18 = (((x713%x714)-x715)>>x716);

	if (t18 != 182036892U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x734 = 10LLU;
	int16_t x735 = INT16_MIN;
	uint32_t x736 = 17U;
	uint64_t t19 = 6280369LLU;

	t19 = (((x733%x734)-x735)>>x736);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x770 = 11U;
	static int32_t x771 = INT32_MIN;
	uint8_t x772 = 1U;
	volatile int32_t t20 = 6708122;

	t20 = (((x769%x770)-x771)>>x772);

	if (t20 != 1073741823) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x849 = UINT16_MAX;
	uint16_t x850 = 26U;
	int64_t x851 = -365278156743334237LL;
	uint8_t x852 = 6U;
	volatile int64_t t21 = -1LL;

	t21 = (((x849%x850)-x851)>>x852);

	if (t21 != 5707471199114597LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x873 = 178U;
	static int16_t x874 = INT16_MIN;
	static int16_t x875 = INT16_MIN;
	int16_t x876 = 11;
	volatile int32_t t22 = 2783514;

	t22 = (((x873%x874)-x875)>>x876);

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x885 = UINT32_MAX;
	int16_t x886 = -1;
	int32_t x887 = -1;
	volatile uint32_t x888 = 14U;
	static uint32_t t23 = 206257725U;

	t23 = (((x885%x886)-x887)>>x888);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x957 = INT16_MIN;
	int32_t x958 = -422;
	volatile uint32_t x959 = 1716747563U;
	uint16_t x960 = 4U;
	uint32_t t24 = 13555666U;

	t24 = (((x957%x958)-x959)>>x960);

	if (t24 != 161138716U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x985 = INT8_MIN;
	static uint16_t x986 = 966U;
	int64_t x987 = INT64_MIN;
	volatile int16_t x988 = 2;
	static volatile int64_t t25 = -104437057262889744LL;

	t25 = (((x985%x986)-x987)>>x988);

	if (t25 != 2305843009213693920LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1058 = 284395U;
	uint32_t x1059 = 1452U;
	uint8_t x1060 = 1U;
	uint64_t t26 = 2429697LLU;

	t26 = (((x1057%x1058)-x1059)>>x1060);

	if (t26 != 68169LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1073 = INT32_MIN;
	uint8_t x1074 = 39U;
	int32_t x1075 = INT32_MIN;
	static uint16_t x1076 = 2U;
	volatile int32_t t27 = -18;

	t27 = (((x1073%x1074)-x1075)>>x1076);

	if (t27 != 536870909) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1165 = -1;
	int8_t x1166 = INT8_MAX;
	uint64_t x1167 = 13580262690LLU;
	uint8_t x1168 = 20U;
	uint64_t t28 = 104329875514LLU;

	t28 = (((x1165%x1166)-x1167)>>x1168);

	if (t28 != 17592186031464LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1173 = INT32_MAX;
	int32_t x1174 = INT32_MAX;
	int32_t x1175 = -285540181;
	volatile int16_t x1176 = 3;
	static int32_t t29 = -1;

	t29 = (((x1173%x1174)-x1175)>>x1176);

	if (t29 != 35692522) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1186 = UINT8_MAX;
	uint16_t x1188 = 6U;
	volatile uint64_t t30 = 2229049017658823569LLU;

	t30 = (((x1185%x1186)-x1187)>>x1188);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1349 = INT64_MAX;
	uint8_t x1350 = 1U;
	static int16_t x1352 = 37;

	t31 = (((x1349%x1350)-x1351)>>x1352);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1357 = UINT64_MAX;
	static int32_t x1358 = INT32_MAX;
	static int64_t x1359 = INT64_MIN;
	uint16_t x1360 = 5U;
	volatile uint64_t t32 = 442380834LLU;

	t32 = (((x1357%x1358)-x1359)>>x1360);

	if (t32 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1373 = 7015851LLU;
	volatile int32_t x1374 = -937;
	volatile int16_t x1375 = 65;
	static volatile uint8_t x1376 = 15U;
	volatile uint64_t t33 = 216182LLU;

	t33 = (((x1373%x1374)-x1375)>>x1376);

	if (t33 != 214LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1378 = 2U;
	uint8_t x1379 = UINT8_MAX;
	uint32_t t34 = 1U;

	t34 = (((x1377%x1378)-x1379)>>x1380);

	if (t34 != 2147483521U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1422 = UINT16_MAX;
	int64_t x1423 = INT64_MIN;
	volatile uint8_t x1424 = 1U;
	int64_t t35 = -54486LL;

	t35 = (((x1421%x1422)-x1423)>>x1424);

	if (t35 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1445 = 397698486LLU;
	static volatile uint16_t x1446 = UINT16_MAX;
	volatile uint64_t t36 = 2388544163LLU;

	t36 = (((x1445%x1446)-x1447)>>x1448);

	if (t36 != 16054LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x1457 = 1U;
	uint16_t x1458 = 4U;
	static volatile uint64_t x1459 = UINT64_MAX;
	uint8_t x1460 = 0U;
	volatile uint64_t t37 = 1567LLU;

	t37 = (((x1457%x1458)-x1459)>>x1460);

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1545 = INT8_MIN;
	static uint16_t x1546 = UINT16_MAX;
	volatile uint32_t x1547 = 50456940U;
	static volatile int16_t x1548 = 6;
	volatile uint32_t t38 = 251692913U;

	t38 = (((x1545%x1546)-x1547)>>x1548);

	if (t38 != 66320472U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x1549 = 20;
	int64_t x1551 = INT64_MAX;
	uint8_t x1552 = 47U;
	uint64_t t39 = 164429248209LLU;

	t39 = (((x1549%x1550)-x1551)>>x1552);

	if (t39 != 65536LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1605 = 247071;
	int16_t x1606 = -1;
	int16_t x1608 = 8;
	uint32_t t40 = 2154861U;

	t40 = (((x1605%x1606)-x1607)>>x1608);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1641 = INT8_MIN;
	static int32_t x1642 = INT32_MIN;
	int16_t x1644 = 0;
	uint32_t t41 = 22672597U;

	t41 = (((x1641%x1642)-x1643)>>x1644);

	if (t41 != 4294967167U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1681 = INT16_MAX;
	int16_t x1682 = 28;
	uint16_t x1684 = 5U;

	t42 = (((x1681%x1682)-x1683)>>x1684);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1705 = INT32_MAX;
	uint64_t x1706 = UINT64_MAX;
	static uint16_t x1707 = 258U;
	uint16_t x1708 = 48U;
	volatile uint64_t t43 = 1972492285595LLU;

	t43 = (((x1705%x1706)-x1707)>>x1708);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1725 = UINT64_MAX;
	volatile int16_t x1727 = -228;
	int8_t x1728 = 0;
	uint64_t t44 = 378469393643890LLU;

	t44 = (((x1725%x1726)-x1727)>>x1728);

	if (t44 != 32995LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1777 = -1;
	int8_t x1778 = INT8_MIN;
	int32_t x1779 = INT32_MIN;
	static int32_t x1780 = 0;

	t45 = (((x1777%x1778)-x1779)>>x1780);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x1797 = 6986U;
	int8_t x1799 = INT8_MIN;
	uint32_t x1800 = 4U;
	volatile uint32_t t46 = 676323U;

	t46 = (((x1797%x1798)-x1799)>>x1800);

	if (t46 != 444U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1848 = 6U;
	volatile int64_t t47 = -12740544829782LL;

	t47 = (((x1845%x1846)-x1847)>>x1848);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1917 = -1LL;
	int8_t x1918 = 1;
	volatile int32_t x1919 = INT32_MIN;
	volatile int8_t x1920 = 63;
	volatile int64_t t48 = 334969470745628LL;

	t48 = (((x1917%x1918)-x1919)>>x1920);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1937 = INT16_MIN;
	volatile uint64_t x1939 = 55068749578707970LLU;
	int16_t x1940 = 2;
	volatile uint64_t t49 = 116LLU;

	t49 = (((x1937%x1938)-x1939)>>x1940);

	if (t49 != 4597918831032710911LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2105 = 51U;
	int8_t x2106 = INT8_MAX;
	int64_t x2107 = -35697130LL;
	uint16_t x2108 = 1U;
	int64_t t50 = 2650959747170107LL;

	t50 = (((x2105%x2106)-x2107)>>x2108);

	if (t50 != 17848590LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2177 = -1LL;
	uint64_t x2179 = 81LLU;
	int8_t x2180 = 26;
	uint64_t t51 = 513151LLU;

	t51 = (((x2177%x2178)-x2179)>>x2180);

	if (t51 != 274877906943LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x2181 = -4LL;
	volatile uint32_t x2182 = 834821884U;
	static int64_t x2183 = INT64_MIN;
	volatile uint16_t x2184 = 47U;
	volatile int64_t t52 = 155526406370LL;

	t52 = (((x2181%x2182)-x2183)>>x2184);

	if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2229 = UINT64_MAX;
	static volatile uint8_t x2230 = UINT8_MAX;

	t53 = (((x2229%x2230)-x2231)>>x2232);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2241 = 4099697724LLU;
	int32_t x2242 = INT32_MAX;
	static uint64_t x2244 = 6LLU;
	volatile uint64_t t54 = 32LLU;

	t54 = (((x2241%x2242)-x2243)>>x2244);

	if (t54 != 30501902LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2281 = 29433LLU;
	int8_t x2282 = INT8_MIN;
	int16_t x2283 = INT16_MAX;
	uint64_t t55 = 225873327499389LLU;

	t55 = (((x2281%x2282)-x2283)>>x2284);

	if (t55 != 9223372036854774141LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2297 = 31126LLU;
	volatile int32_t x2298 = INT32_MIN;
	static int64_t x2299 = INT64_MIN;
	static int8_t x2300 = 6;
	uint64_t t56 = 5497770903624LLU;

	t56 = (((x2297%x2298)-x2299)>>x2300);

	if (t56 != 144115188075856358LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2309 = 1U;
	static int32_t x2311 = -1;
	static uint32_t x2312 = 1U;

	t57 = (((x2309%x2310)-x2311)>>x2312);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2393 = INT64_MIN;
	int8_t x2394 = -5;
	int32_t x2395 = INT32_MIN;

	t58 = (((x2393%x2394)-x2395)>>x2396);

	if (t58 != 8388607LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x2545 = INT64_MIN;
	static int8_t x2546 = 1;
	int64_t x2547 = -1LL;
	uint16_t x2548 = 31U;
	volatile int64_t t59 = 4471690LL;

	t59 = (((x2545%x2546)-x2547)>>x2548);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2595 = INT8_MIN;
	int32_t t60 = 267029101;

	t60 = (((x2593%x2594)-x2595)>>x2596);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x2625 = UINT8_MAX;
	uint64_t x2626 = 2386LLU;
	uint8_t x2628 = 63U;

	t61 = (((x2625%x2626)-x2627)>>x2628);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x2629 = UINT8_MAX;
	volatile uint64_t x2630 = UINT64_MAX;
	int64_t x2631 = INT64_MAX;
	int16_t x2632 = 19;
	volatile uint64_t t62 = 2220867LLU;

	t62 = (((x2629%x2630)-x2631)>>x2632);

	if (t62 != 17592186044416LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2670 = -29;
	static int32_t x2671 = -29366;
	uint64_t t63 = 846469676LLU;

	t63 = (((x2669%x2670)-x2671)>>x2672);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x2674 = 15612044937822LLU;
	int8_t x2675 = INT8_MAX;
	uint16_t x2676 = 10U;
	uint64_t t64 = 250698LLU;

	t64 = (((x2673%x2674)-x2675)>>x2676);

	if (t64 != 4416342567LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2693 = INT16_MAX;
	uint64_t x2695 = UINT64_MAX;
	uint64_t t65 = 6156592LLU;

	t65 = (((x2693%x2694)-x2695)>>x2696);

	if (t65 != 32LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2733 = INT64_MAX;
	int64_t x2734 = -1LL;
	static int16_t x2735 = INT16_MIN;
	static int8_t x2736 = 1;
	int64_t t66 = -93636702LL;

	t66 = (((x2733%x2734)-x2735)>>x2736);

	if (t66 != 16384LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x2810 = INT64_MAX;
	int8_t x2812 = 21;
	static volatile int64_t t67 = 46LL;

	t67 = (((x2809%x2810)-x2811)>>x2812);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x2869 = 1001174204153LLU;
	uint8_t x2870 = UINT8_MAX;
	static uint64_t x2872 = 2LLU;
	static volatile uint64_t t68 = 1LLU;

	t68 = (((x2869%x2870)-x2871)>>x2872);

	if (t68 != 39LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x2949 = 1U;
	int32_t x2950 = INT32_MAX;
	volatile uint16_t x2951 = 5U;
	int16_t x2952 = 1;
	static volatile uint32_t t69 = 38U;

	t69 = (((x2949%x2950)-x2951)>>x2952);

	if (t69 != 2147483646U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2969 = INT32_MIN;
	int64_t x2970 = INT64_MIN;
	uint64_t x2971 = UINT64_MAX;
	uint64_t t70 = 8553870LLU;

	t70 = (((x2969%x2970)-x2971)>>x2972);

	if (t70 != 4503599626846208LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x3074 = 50606649U;
	int32_t x3075 = 2;
	int32_t x3076 = 21;
	uint32_t t71 = 223U;

	t71 = (((x3073%x3074)-x3075)>>x3076);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x3101 = 13U;
	int64_t x3102 = INT64_MIN;
	uint64_t x3103 = 5674530LLU;
	uint8_t x3104 = 13U;
	uint64_t t72 = 248031LLU;

	t72 = (((x3101%x3102)-x3103)>>x3104);

	if (t72 != 2251799813684555LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3133 = -1;
	int16_t x3134 = -7673;
	uint64_t x3135 = 9390397095432741LLU;
	static uint8_t x3136 = 56U;
	uint64_t t73 = 8491928694LLU;

	t73 = (((x3133%x3134)-x3135)>>x3136);

	if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3157 = 0U;
	int16_t x3158 = INT16_MIN;
	volatile uint32_t x3160 = 10U;
	uint32_t t74 = 81267U;

	t74 = (((x3157%x3158)-x3159)>>x3160);

	if (t74 != 4194298U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3165 = -19;
	static uint8_t x3168 = 7U;
	volatile int64_t t75 = 949LL;

	t75 = (((x3165%x3166)-x3167)>>x3168);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3173 = 4U;
	uint64_t x3174 = 299453985LLU;
	int16_t x3175 = INT16_MIN;

	t76 = (((x3173%x3174)-x3175)>>x3176);

	if (t76 != 16386LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3189 = 4451617617410LLU;

	t77 = (((x3189%x3190)-x3191)>>x3192);

	if (t77 != 18446744071562068009LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3209 = 61U;
	int64_t x3210 = 13822136473145894LL;
	int16_t x3211 = INT16_MIN;
	int64_t t78 = -485879881LL;

	t78 = (((x3209%x3210)-x3211)>>x3212);

	if (t78 != 8207LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x3241 = 1U;
	volatile int16_t x3242 = -1;
	volatile int64_t x3243 = -194721085578524438LL;
	uint8_t x3244 = 2U;
	volatile int64_t t79 = 21307221312LL;

	t79 = (((x3241%x3242)-x3243)>>x3244);

	if (t79 != 48680271394631109LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3246 = INT16_MIN;
	static int8_t x3247 = INT8_MIN;
	int8_t x3248 = 0;
	int32_t t80 = 41;

	t80 = (((x3245%x3246)-x3247)>>x3248);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3289 = UINT8_MAX;
	uint8_t x3291 = 11U;
	uint32_t t81 = 927876179U;

	t81 = (((x3289%x3290)-x3291)>>x3292);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3301 = INT32_MAX;
	uint32_t x3302 = 122883573U;
	uint8_t x3304 = 0U;

	t82 = (((x3301%x3302)-x3303)>>x3304);

	if (t82 != 56455606U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x3358 = 2662406U;
	static uint16_t x3359 = UINT16_MAX;
	uint8_t x3360 = 31U;

	t83 = (((x3357%x3358)-x3359)>>x3360);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x3391 = 5743861600LLU;
	static uint8_t x3392 = 18U;
	uint64_t t84 = 4LLU;

	t84 = (((x3389%x3390)-x3391)>>x3392);

	if (t84 != 70368744155752LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3401 = -32776949;
	int8_t x3402 = INT8_MIN;
	int32_t x3403 = INT32_MIN;
	static int16_t x3404 = 15;
	volatile int32_t t85 = -1886715;

	t85 = (((x3401%x3402)-x3403)>>x3404);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x3410 = 15U;
	uint16_t x3411 = 3052U;
	int8_t x3412 = 3;
	volatile uint32_t t86 = 514351818U;

	t86 = (((x3409%x3410)-x3411)>>x3412);

	if (t86 != 536870531U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x3413 = -10553LL;
	static int64_t x3415 = INT64_MIN;
	volatile uint64_t x3416 = 1LLU;
	volatile int64_t t87 = -679862170589318LL;

	t87 = (((x3413%x3414)-x3415)>>x3416);

	if (t87 != 4611686018427382627LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3417 = 94LLU;
	int8_t x3418 = INT8_MIN;
	uint8_t x3420 = 0U;
	uint64_t t88 = 11497128LLU;

	t88 = (((x3417%x3418)-x3419)>>x3420);

	if (t88 != 18446744073709549131LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x3465 = UINT8_MAX;
	volatile int8_t x3467 = INT8_MIN;
	uint8_t x3468 = 0U;

	t89 = (((x3465%x3466)-x3467)>>x3468);

	if (t89 != 383LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x3509 = -1;
	int8_t x3510 = INT8_MIN;
	static int64_t x3511 = -1LL;
	volatile uint8_t x3512 = 39U;

	t90 = (((x3509%x3510)-x3511)>>x3512);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t t91 = 6707872U;

	t91 = (((x3529%x3530)-x3531)>>x3532);

	if (t91 != 260345U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x3609 = UINT8_MAX;
	int8_t x3610 = INT8_MIN;
	int64_t x3611 = -1LL;
	volatile int16_t x3612 = 25;
	static int64_t t92 = 1910815941725491LL;

	t92 = (((x3609%x3610)-x3611)>>x3612);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3654 = 230303664U;
	static uint64_t x3655 = 149LLU;
	uint8_t x3656 = 22U;
	static volatile uint64_t t93 = 3690837496976342516LLU;

	t93 = (((x3653%x3654)-x3655)>>x3656);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3705 = 1;
	int8_t x3706 = INT8_MIN;
	static int16_t x3707 = INT16_MIN;
	int32_t x3708 = 0;
	int32_t t94 = 10;

	t94 = (((x3705%x3706)-x3707)>>x3708);

	if (t94 != 32769) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3711 = -1;
	static uint8_t x3712 = 2U;
	uint64_t t95 = 456LLU;

	t95 = (((x3709%x3710)-x3711)>>x3712);

	if (t95 != 287513LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x3793 = UINT32_MAX;
	volatile int64_t x3794 = INT64_MAX;
	volatile uint8_t x3795 = 1U;
	volatile int8_t x3796 = 14;
	static volatile int64_t t96 = -2085875319412LL;

	t96 = (((x3793%x3794)-x3795)>>x3796);

	if (t96 != 262143LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3805 = INT8_MIN;
	static uint16_t x3806 = 19221U;
	int16_t x3807 = INT16_MIN;
	uint8_t x3808 = 6U;
	static volatile int32_t t97 = -1;

	t97 = (((x3805%x3806)-x3807)>>x3808);

	if (t97 != 510) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3826 = 4254931253854LLU;
	volatile int32_t x3827 = INT32_MAX;
	uint64_t t98 = 879LLU;

	t98 = (((x3825%x3826)-x3827)>>x3828);

	if (t98 != 106114256724LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3905 = INT8_MAX;
	int16_t x3906 = 7;
	uint64_t x3907 = UINT64_MAX;
	uint8_t x3908 = 1U;
	static uint64_t t99 = 450837713417LLU;

	t99 = (((x3905%x3906)-x3907)>>x3908);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

