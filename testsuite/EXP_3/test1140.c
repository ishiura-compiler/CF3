#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 2529858;
int32_t x33 = 1;
int64_t x71 = INT64_MAX;
static volatile uint8_t x72 = 48U;
int64_t x73 = -112801187LL;
int32_t t3 = -135147907;
int16_t x158 = -9;
uint32_t x179 = UINT32_MAX;
int16_t x180 = 0;
int32_t x226 = INT32_MIN;
static uint32_t x263 = 2335509U;
static int8_t x312 = 1;
int32_t x334 = -15257;
uint8_t x336 = 15U;
int64_t x351 = 1238LL;
int64_t x369 = 6471LL;
int32_t t13 = -57058117;
int16_t x477 = -1;
volatile uint8_t x479 = 47U;
volatile int32_t t16 = 138112670;
int64_t x481 = INT64_MIN;
int8_t x484 = 1;
uint32_t x515 = 95607U;
uint16_t x516 = 5U;
int64_t x543 = 4385499516017LL;
int64_t x598 = INT64_MIN;
static volatile uint8_t x760 = 0U;
int8_t x768 = 46;
int32_t t26 = 1;
int32_t t28 = -56807533;
volatile uint8_t x1175 = UINT8_MAX;
uint32_t x1354 = UINT32_MAX;
int8_t x1366 = -1;
static int64_t x1437 = -1LL;
int64_t x1461 = INT64_MIN;
static volatile int32_t t37 = 0;
uint32_t x1517 = 102842959U;
static uint32_t x1519 = UINT32_MAX;
uint16_t x1563 = 7U;
volatile int64_t x1669 = -1LL;
volatile uint32_t x1670 = 199365966U;
static int32_t t40 = -3311;
volatile uint16_t x1766 = 2707U;
volatile uint8_t x1767 = 2U;
static int32_t t42 = -14;
int16_t x1782 = INT16_MAX;
uint16_t x1784 = 5U;
volatile int64_t x1818 = INT64_MIN;
static int16_t x2191 = 152;
static int32_t t49 = 408736970;
int8_t x2218 = 1;
int64_t x2278 = INT64_MIN;
int32_t x2280 = 1;
int32_t t52 = 57;
volatile int32_t t54 = 3793382;
int8_t x2648 = 0;
volatile uint64_t x2803 = 42LLU;
static volatile uint16_t x3027 = 3403U;
int32_t t61 = -1958856;
volatile int64_t x3068 = 20LL;
uint64_t x3129 = UINT64_MAX;
int32_t x3130 = INT32_MIN;
int8_t x3131 = 1;
uint16_t x3132 = 15U;
uint16_t x3272 = 4U;
static int8_t x3347 = 13;
int64_t x3428 = 0LL;
static int16_t x3606 = 6565;
int32_t x3635 = 61419199;
int64_t x3709 = -1LL;
int64_t x3726 = INT64_MIN;
volatile int32_t x3881 = INT32_MAX;
volatile int32_t t74 = -3;
static int16_t x3892 = 0;
int32_t t76 = -12;
int8_t x4049 = 0;
int64_t x4198 = -295LL;
volatile int16_t x4261 = 0;
uint16_t x4263 = 108U;
uint8_t x4264 = 2U;
int8_t x4329 = INT8_MAX;
int32_t x4334 = INT32_MAX;
int32_t x4335 = 3146608;
volatile int32_t t81 = 1942;
volatile uint16_t x4340 = 0U;
int32_t t82 = -1;
volatile int16_t x4365 = INT16_MAX;
static uint8_t x4366 = UINT8_MAX;
volatile int32_t t84 = -362659;
int8_t x4544 = 1;
int32_t t86 = -195496;
volatile int32_t t89 = 10089;
int64_t x4849 = INT64_MAX;
static uint16_t x4911 = 5U;
int16_t x4925 = INT16_MIN;
uint16_t x4928 = 2U;
static int32_t t94 = 1;
int32_t t95 = -2;
volatile uint16_t x5089 = UINT16_MAX;
int32_t x5167 = INT32_MAX;
int64_t x5199 = INT64_MAX;
volatile int32_t t99 = -1876990;


void f0(void) {
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MAX;
	uint8_t x4 = 1U;
	int32_t t0 = 277785;

	t0 = ((x1<=x2)<(x3>>x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x34 = 48U;
	int8_t x35 = INT8_MAX;
	volatile uint8_t x36 = 0U;
	volatile int32_t t1 = -208283;

	t1 = ((x33<=x34)<(x35>>x36));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x69 = 23620LL;
	uint64_t x70 = UINT64_MAX;
	volatile int32_t t2 = -46884;

	t2 = ((x69<=x70)<(x71>>x72));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x74 = INT32_MAX;
	uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 2U;

	t3 = ((x73<=x74)<(x75>>x76));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x157 = -15254;
	static uint32_t x159 = 26053035U;
	int8_t x160 = 1;
	volatile int32_t t4 = -2;

	t4 = ((x157<=x158)<(x159>>x160));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	int32_t t5 = -76253;

	t5 = ((x177<=x178)<(x179>>x180));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x225 = 2107168713308293109LL;
	int16_t x227 = INT16_MAX;
	uint8_t x228 = 4U;
	int32_t t6 = 4074316;

	t6 = ((x225<=x226)<(x227>>x228));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x261 = UINT64_MAX;
	static int64_t x262 = INT64_MIN;
	int8_t x264 = 0;
	volatile int32_t t7 = 9110704;

	t7 = ((x261<=x262)<(x263>>x264));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x285 = UINT8_MAX;
	static int32_t x286 = -76037;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = 0;
	volatile int32_t t8 = 29015;

	t8 = ((x285<=x286)<(x287>>x288));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x293 = -1;
	int32_t x294 = INT32_MAX;
	static volatile int64_t x295 = INT64_MAX;
	uint16_t x296 = 11U;
	volatile int32_t t9 = 231;

	t9 = ((x293<=x294)<(x295>>x296));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x309 = -1;
	uint64_t x310 = 739612053341465991LLU;
	static int16_t x311 = 1825;
	int32_t t10 = 32900192;

	t10 = ((x309<=x310)<(x311>>x312));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x333 = 66U;
	uint8_t x335 = UINT8_MAX;
	int32_t t11 = 669270042;

	t11 = ((x333<=x334)<(x335>>x336));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x349 = INT32_MAX;
	int32_t x350 = INT32_MAX;
	static volatile int8_t x352 = 0;
	int32_t t12 = -158953608;

	t12 = ((x349<=x350)<(x351>>x352));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x370 = -21314612;
	uint32_t x371 = UINT32_MAX;
	int8_t x372 = 0;

	t13 = ((x369<=x370)<(x371>>x372));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x373 = -32;
	int32_t x374 = INT32_MAX;
	uint64_t x375 = 66812573LLU;
	volatile int64_t x376 = 5LL;
	static volatile int32_t t14 = -3762270;

	t14 = ((x373<=x374)<(x375>>x376));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x449 = -1;
	uint64_t x450 = UINT64_MAX;
	int8_t x451 = 1;
	volatile uint8_t x452 = 4U;
	int32_t t15 = -449946;

	t15 = ((x449<=x450)<(x451>>x452));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x478 = 47;
	int32_t x480 = 13;

	t16 = ((x477<=x478)<(x479>>x480));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x482 = INT8_MAX;
	int8_t x483 = 10;
	int32_t t17 = 59517092;

	t17 = ((x481<=x482)<(x483>>x484));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x513 = INT64_MIN;
	int16_t x514 = INT16_MIN;
	volatile int32_t t18 = -900046504;

	t18 = ((x513<=x514)<(x515>>x516));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x537 = UINT16_MAX;
	int32_t x538 = -35;
	volatile int16_t x539 = 31;
	int8_t x540 = 4;
	int32_t t19 = -9216;

	t19 = ((x537<=x538)<(x539>>x540));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x541 = INT16_MAX;
	uint32_t x542 = 4933538U;
	int8_t x544 = 10;
	volatile int32_t t20 = 22475556;

	t20 = ((x541<=x542)<(x543>>x544));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x577 = INT64_MIN;
	int8_t x578 = -2;
	int8_t x579 = 40;
	volatile uint64_t x580 = 3LLU;
	int32_t t21 = -36809;

	t21 = ((x577<=x578)<(x579>>x580));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x597 = INT32_MIN;
	int8_t x599 = 2;
	uint16_t x600 = 7U;
	static volatile int32_t t22 = -656;

	t22 = ((x597<=x598)<(x599>>x600));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x757 = 263958;
	volatile int8_t x758 = -1;
	volatile uint32_t x759 = 207U;
	volatile int32_t t23 = 476290;

	t23 = ((x757<=x758)<(x759>>x760));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x765 = INT64_MIN;
	int8_t x766 = INT8_MAX;
	static volatile uint64_t x767 = 4014268LLU;
	int32_t t24 = -8306;

	t24 = ((x765<=x766)<(x767>>x768));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x873 = -1LL;
	int64_t x874 = -1LL;
	static int32_t x875 = INT32_MAX;
	static int8_t x876 = 1;
	volatile int32_t t25 = 1815;

	t25 = ((x873<=x874)<(x875>>x876));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x909 = INT64_MIN;
	static uint64_t x910 = 265438690961LLU;
	volatile int32_t x911 = INT32_MAX;
	volatile uint8_t x912 = 10U;

	t26 = ((x909<=x910)<(x911>>x912));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1073 = -1;
	int64_t x1074 = -999262831LL;
	uint64_t x1075 = 253329477814079LLU;
	static uint16_t x1076 = 15U;
	int32_t t27 = -60;

	t27 = ((x1073<=x1074)<(x1075>>x1076));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1129 = UINT8_MAX;
	static volatile int8_t x1130 = 1;
	static uint8_t x1131 = UINT8_MAX;
	uint8_t x1132 = 1U;

	t28 = ((x1129<=x1130)<(x1131>>x1132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1133 = 8593549544382405LLU;
	static int8_t x1134 = INT8_MIN;
	int16_t x1135 = 9;
	volatile uint16_t x1136 = 0U;
	int32_t t29 = 3038;

	t29 = ((x1133<=x1134)<(x1135>>x1136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1173 = INT64_MIN;
	int8_t x1174 = INT8_MIN;
	uint32_t x1176 = 28U;
	volatile int32_t t30 = -1;

	t30 = ((x1173<=x1174)<(x1175>>x1176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1193 = INT16_MIN;
	int32_t x1194 = -1;
	int8_t x1195 = 1;
	uint16_t x1196 = 25U;
	volatile int32_t t31 = 4574687;

	t31 = ((x1193<=x1194)<(x1195>>x1196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1353 = INT32_MIN;
	int8_t x1355 = 7;
	static volatile int8_t x1356 = 0;
	volatile int32_t t32 = 4968;

	t32 = ((x1353<=x1354)<(x1355>>x1356));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1365 = INT16_MIN;
	uint32_t x1367 = 17651099U;
	uint16_t x1368 = 1U;
	int32_t t33 = -172426;

	t33 = ((x1365<=x1366)<(x1367>>x1368));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1381 = 26274U;
	uint16_t x1382 = 479U;
	uint32_t x1383 = 231467643U;
	static uint8_t x1384 = 8U;
	int32_t t34 = -354640444;

	t34 = ((x1381<=x1382)<(x1383>>x1384));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1438 = 3577258LLU;
	int8_t x1439 = 2;
	static int16_t x1440 = 0;
	volatile int32_t t35 = 167050258;

	t35 = ((x1437<=x1438)<(x1439>>x1440));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1462 = 107543637113LL;
	uint16_t x1463 = 26911U;
	uint16_t x1464 = 11U;
	volatile int32_t t36 = -137;

	t36 = ((x1461<=x1462)<(x1463>>x1464));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1473 = INT8_MAX;
	int8_t x1474 = INT8_MIN;
	uint16_t x1475 = 1333U;
	int16_t x1476 = 1;

	t37 = ((x1473<=x1474)<(x1475>>x1476));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1518 = 4U;
	uint8_t x1520 = 4U;
	static volatile int32_t t38 = -7379;

	t38 = ((x1517<=x1518)<(x1519>>x1520));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1561 = -1;
	uint8_t x1562 = 23U;
	static int8_t x1564 = 0;
	static volatile int32_t t39 = 104831176;

	t39 = ((x1561<=x1562)<(x1563>>x1564));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1671 = INT32_MAX;
	static uint8_t x1672 = 6U;

	t40 = ((x1669<=x1670)<(x1671>>x1672));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1741 = INT16_MAX;
	int8_t x1742 = -1;
	uint8_t x1743 = 2U;
	volatile int16_t x1744 = 0;
	int32_t t41 = -4174838;

	t41 = ((x1741<=x1742)<(x1743>>x1744));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1765 = 113LLU;
	uint16_t x1768 = 4U;

	t42 = ((x1765<=x1766)<(x1767>>x1768));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x1781 = INT32_MAX;
	static int32_t x1783 = INT32_MAX;
	volatile int32_t t43 = 133;

	t43 = ((x1781<=x1782)<(x1783>>x1784));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1813 = -1LL;
	int16_t x1814 = -14035;
	int32_t x1815 = 20;
	static uint8_t x1816 = 11U;
	static int32_t t44 = 2448;

	t44 = ((x1813<=x1814)<(x1815>>x1816));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1817 = UINT32_MAX;
	static volatile uint16_t x1819 = 245U;
	int8_t x1820 = 6;
	int32_t t45 = -1620003;

	t45 = ((x1817<=x1818)<(x1819>>x1820));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1877 = -1;
	int16_t x1878 = -134;
	int8_t x1879 = 1;
	uint8_t x1880 = 2U;
	int32_t t46 = 2003;

	t46 = ((x1877<=x1878)<(x1879>>x1880));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2077 = INT64_MIN;
	volatile uint16_t x2078 = UINT16_MAX;
	int64_t x2079 = INT64_MAX;
	int16_t x2080 = 7;
	volatile int32_t t47 = -2174345;

	t47 = ((x2077<=x2078)<(x2079>>x2080));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2189 = INT8_MIN;
	int64_t x2190 = INT64_MIN;
	int8_t x2192 = 7;
	volatile int32_t t48 = -41788840;

	t48 = ((x2189<=x2190)<(x2191>>x2192));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x2193 = 122U;
	volatile int64_t x2194 = 178505291055LL;
	int64_t x2195 = 27686035992276771LL;
	static uint16_t x2196 = 18U;

	t49 = ((x2193<=x2194)<(x2195>>x2196));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2217 = INT16_MIN;
	uint8_t x2219 = 63U;
	volatile uint64_t x2220 = 20LLU;
	volatile int32_t t50 = 1389731;

	t50 = ((x2217<=x2218)<(x2219>>x2220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2277 = INT64_MIN;
	uint8_t x2279 = 2U;
	volatile int32_t t51 = 395799;

	t51 = ((x2277<=x2278)<(x2279>>x2280));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2293 = INT32_MIN;
	int32_t x2294 = -29849;
	uint16_t x2295 = 0U;
	uint8_t x2296 = 2U;

	t52 = ((x2293<=x2294)<(x2295>>x2296));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2301 = 1U;
	volatile int64_t x2302 = INT64_MAX;
	int16_t x2303 = INT16_MAX;
	volatile int16_t x2304 = 4;
	static int32_t t53 = 15585374;

	t53 = ((x2301<=x2302)<(x2303>>x2304));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2549 = INT8_MIN;
	volatile int64_t x2550 = INT64_MIN;
	uint16_t x2551 = 26U;
	static int32_t x2552 = 15;

	t54 = ((x2549<=x2550)<(x2551>>x2552));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2645 = UINT32_MAX;
	int16_t x2646 = INT16_MIN;
	uint16_t x2647 = 2U;
	volatile int32_t t55 = -1;

	t55 = ((x2645<=x2646)<(x2647>>x2648));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2793 = INT32_MAX;
	int8_t x2794 = -1;
	uint16_t x2795 = 4U;
	static volatile uint32_t x2796 = 3U;
	volatile int32_t t56 = 7;

	t56 = ((x2793<=x2794)<(x2795>>x2796));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2801 = UINT64_MAX;
	int64_t x2802 = -1LL;
	volatile int16_t x2804 = 1;
	int32_t t57 = -5;

	t57 = ((x2801<=x2802)<(x2803>>x2804));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x2869 = INT64_MIN;
	int64_t x2870 = INT64_MIN;
	static uint64_t x2871 = 5098911LLU;
	uint16_t x2872 = 3U;
	int32_t t58 = 70338;

	t58 = ((x2869<=x2870)<(x2871>>x2872));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2945 = INT32_MIN;
	int32_t x2946 = INT32_MIN;
	volatile uint32_t x2947 = 7138U;
	uint16_t x2948 = 6U;
	volatile int32_t t59 = -3387016;

	t59 = ((x2945<=x2946)<(x2947>>x2948));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2949 = UINT32_MAX;
	int16_t x2950 = INT16_MIN;
	static volatile int16_t x2951 = INT16_MAX;
	volatile uint64_t x2952 = 0LLU;
	int32_t t60 = -8691;

	t60 = ((x2949<=x2950)<(x2951>>x2952));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3025 = UINT8_MAX;
	uint8_t x3026 = 50U;
	volatile uint8_t x3028 = 2U;

	t61 = ((x3025<=x3026)<(x3027>>x3028));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3065 = 30U;
	int8_t x3066 = INT8_MIN;
	int16_t x3067 = INT16_MAX;
	int32_t t62 = -1;

	t62 = ((x3065<=x3066)<(x3067>>x3068));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t t63 = -150225;

	t63 = ((x3129<=x3130)<(x3131>>x3132));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3269 = UINT64_MAX;
	int16_t x3270 = 4645;
	uint8_t x3271 = 0U;
	int32_t t64 = -14347839;

	t64 = ((x3269<=x3270)<(x3271>>x3272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x3345 = 25;
	volatile uint16_t x3346 = 22019U;
	int8_t x3348 = 6;
	int32_t t65 = -17661785;

	t65 = ((x3345<=x3346)<(x3347>>x3348));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x3381 = 421451411264186179LLU;
	uint16_t x3382 = 8288U;
	uint32_t x3383 = UINT32_MAX;
	uint64_t x3384 = 0LLU;
	int32_t t66 = 2373216;

	t66 = ((x3381<=x3382)<(x3383>>x3384));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3425 = -1;
	int64_t x3426 = INT64_MIN;
	uint8_t x3427 = 2U;
	volatile int32_t t67 = 279840209;

	t67 = ((x3425<=x3426)<(x3427>>x3428));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3605 = INT16_MAX;
	uint16_t x3607 = 2564U;
	uint8_t x3608 = 0U;
	volatile int32_t t68 = -188;

	t68 = ((x3605<=x3606)<(x3607>>x3608));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3633 = -27;
	volatile int64_t x3634 = -1LL;
	uint16_t x3636 = 9U;
	volatile int32_t t69 = 2143;

	t69 = ((x3633<=x3634)<(x3635>>x3636));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3710 = INT8_MAX;
	uint16_t x3711 = 4U;
	volatile int8_t x3712 = 17;
	volatile int32_t t70 = -6135;

	t70 = ((x3709<=x3710)<(x3711>>x3712));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3725 = 110507U;
	uint64_t x3727 = 1037923209262716LLU;
	uint8_t x3728 = 11U;
	volatile int32_t t71 = -9290508;

	t71 = ((x3725<=x3726)<(x3727>>x3728));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3837 = -1LL;
	static volatile int8_t x3838 = INT8_MAX;
	static uint16_t x3839 = 10778U;
	uint8_t x3840 = 15U;
	int32_t t72 = 510184377;

	t72 = ((x3837<=x3838)<(x3839>>x3840));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3882 = UINT64_MAX;
	volatile uint16_t x3883 = UINT16_MAX;
	static uint8_t x3884 = 2U;
	static volatile int32_t t73 = 47;

	t73 = ((x3881<=x3882)<(x3883>>x3884));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x3885 = INT32_MAX;
	int8_t x3886 = INT8_MAX;
	int8_t x3887 = 7;
	uint16_t x3888 = 8U;

	t74 = ((x3885<=x3886)<(x3887>>x3888));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3889 = UINT8_MAX;
	int16_t x3890 = -10073;
	volatile uint8_t x3891 = 3U;
	int32_t t75 = -112880655;

	t75 = ((x3889<=x3890)<(x3891>>x3892));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3969 = UINT64_MAX;
	volatile int16_t x3970 = INT16_MAX;
	volatile int32_t x3971 = 247828;
	static int8_t x3972 = 0;

	t76 = ((x3969<=x3970)<(x3971>>x3972));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4050 = 6U;
	int8_t x4051 = INT8_MAX;
	int8_t x4052 = 15;
	static volatile int32_t t77 = -5810821;

	t77 = ((x4049<=x4050)<(x4051>>x4052));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4197 = INT64_MAX;
	volatile int64_t x4199 = 71426309635LL;
	static uint16_t x4200 = 7U;
	int32_t t78 = 8201;

	t78 = ((x4197<=x4198)<(x4199>>x4200));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4262 = INT16_MIN;
	int32_t t79 = 1017112170;

	t79 = ((x4261<=x4262)<(x4263>>x4264));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x4330 = INT32_MIN;
	int64_t x4331 = 170303006LL;
	int8_t x4332 = 1;
	volatile int32_t t80 = 1;

	t80 = ((x4329<=x4330)<(x4331>>x4332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4333 = -1;
	volatile uint8_t x4336 = 7U;

	t81 = ((x4333<=x4334)<(x4335>>x4336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4337 = INT64_MIN;
	int64_t x4338 = INT64_MIN;
	int8_t x4339 = 14;

	t82 = ((x4337<=x4338)<(x4339>>x4340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4349 = -1315;
	int64_t x4350 = -1LL;
	int16_t x4351 = INT16_MAX;
	uint16_t x4352 = 7U;
	int32_t t83 = 5;

	t83 = ((x4349<=x4350)<(x4351>>x4352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4367 = 23U;
	uint8_t x4368 = 8U;

	t84 = ((x4365<=x4366)<(x4367>>x4368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4457 = UINT8_MAX;
	int32_t x4458 = -1;
	static uint32_t x4459 = 45190U;
	static uint16_t x4460 = 24U;
	int32_t t85 = 2847293;

	t85 = ((x4457<=x4458)<(x4459>>x4460));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4541 = 7486067160LLU;
	uint32_t x4542 = UINT32_MAX;
	int16_t x4543 = INT16_MAX;

	t86 = ((x4541<=x4542)<(x4543>>x4544));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4553 = INT64_MIN;
	volatile uint8_t x4554 = UINT8_MAX;
	uint64_t x4555 = 322351047356LLU;
	uint8_t x4556 = 0U;
	int32_t t87 = 1017247;

	t87 = ((x4553<=x4554)<(x4555>>x4556));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4589 = 709;
	int64_t x4590 = -315292075934736282LL;
	volatile uint8_t x4591 = 3U;
	volatile uint16_t x4592 = 18U;
	int32_t t88 = -195316;

	t88 = ((x4589<=x4590)<(x4591>>x4592));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4593 = 7U;
	static int8_t x4594 = INT8_MAX;
	volatile uint16_t x4595 = 306U;
	volatile int8_t x4596 = 0;

	t89 = ((x4593<=x4594)<(x4595>>x4596));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4829 = 0;
	uint32_t x4830 = 9U;
	int64_t x4831 = 6563204048020451LL;
	volatile int32_t x4832 = 18;
	volatile int32_t t90 = 85;

	t90 = ((x4829<=x4830)<(x4831>>x4832));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4850 = INT8_MAX;
	uint16_t x4851 = UINT16_MAX;
	volatile uint64_t x4852 = 5LLU;
	int32_t t91 = -171780;

	t91 = ((x4849<=x4850)<(x4851>>x4852));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4873 = INT64_MIN;
	int64_t x4874 = INT64_MIN;
	volatile int8_t x4875 = INT8_MAX;
	uint16_t x4876 = 1U;
	volatile int32_t t92 = -626175;

	t92 = ((x4873<=x4874)<(x4875>>x4876));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x4909 = 442891U;
	uint64_t x4910 = 54266324055LLU;
	int16_t x4912 = 1;
	volatile int32_t t93 = 1801857;

	t93 = ((x4909<=x4910)<(x4911>>x4912));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4926 = 3448;
	volatile int16_t x4927 = INT16_MAX;

	t94 = ((x4925<=x4926)<(x4927>>x4928));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5081 = INT64_MIN;
	static int64_t x5082 = 1208LL;
	uint16_t x5083 = UINT16_MAX;
	uint8_t x5084 = 1U;

	t95 = ((x5081<=x5082)<(x5083>>x5084));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5090 = INT32_MAX;
	int64_t x5091 = INT64_MAX;
	uint64_t x5092 = 1LLU;
	volatile int32_t t96 = 93140;

	t96 = ((x5089<=x5090)<(x5091>>x5092));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5097 = 1;
	uint32_t x5098 = 133886032U;
	uint8_t x5099 = 71U;
	uint16_t x5100 = 0U;
	int32_t t97 = -17;

	t97 = ((x5097<=x5098)<(x5099>>x5100));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5165 = -1;
	int8_t x5166 = -1;
	uint32_t x5168 = 3U;
	static volatile int32_t t98 = -1;

	t98 = ((x5165<=x5166)<(x5167>>x5168));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x5197 = INT32_MAX;
	uint64_t x5198 = 32856112410290007LLU;
	volatile int8_t x5200 = 0;

	t99 = ((x5197<=x5198)<(x5199>>x5200));

	if (t99 != 1) { NG(); } else { ; }
	
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

