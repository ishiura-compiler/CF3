#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 393765;
int64_t x73 = -1LL;
int8_t x74 = INT8_MIN;
uint32_t x76 = 3U;
static int8_t x83 = INT8_MIN;
uint8_t x96 = 0U;
volatile uint16_t x301 = UINT16_MAX;
uint8_t x452 = 18U;
int32_t x555 = INT32_MAX;
uint32_t x591 = 123065824U;
volatile uint8_t x592 = 1U;
uint64_t x694 = 234587650187121374LLU;
volatile int32_t t15 = 31555;
static uint32_t x770 = UINT32_MAX;
static int8_t x796 = 1;
int64_t x849 = -1707746LL;
uint32_t x858 = UINT32_MAX;
volatile int8_t x860 = 1;
volatile uint8_t x920 = 2U;
volatile int32_t t20 = 1;
int16_t x975 = INT16_MAX;
uint16_t x1060 = 8U;
int8_t x1080 = 0;
static int32_t t24 = -10;
int32_t x1085 = 1;
uint8_t x1086 = UINT8_MAX;
int32_t t28 = -19;
volatile int8_t x1200 = 1;
int32_t x1215 = -1;
int32_t t32 = -123;
uint16_t x1304 = 3U;
int8_t x1333 = INT8_MIN;
uint64_t x1355 = 16067894LLU;
volatile uint8_t x1368 = 3U;
uint64_t x1462 = UINT64_MAX;
static volatile int32_t t41 = -1541972;
int16_t x1513 = INT16_MIN;
uint32_t x1539 = 4U;
int32_t t44 = -369909697;
int32_t x1721 = -1;
volatile int32_t t45 = 2228761;
uint32_t x1757 = UINT32_MAX;
static uint32_t x1758 = 6U;
int32_t x1759 = INT32_MIN;
int32_t t48 = -981800;
static int8_t x1918 = 8;
uint8_t x1977 = UINT8_MAX;
int8_t x2034 = INT8_MIN;
volatile int32_t t52 = 248736;
int64_t x2131 = INT64_MAX;
uint32_t x2132 = 9U;
int32_t t55 = -7870;
int64_t x2194 = -1LL;
static volatile uint8_t x2264 = 1U;
static volatile int32_t t58 = -1;
int8_t x2274 = INT8_MAX;
uint16_t x2312 = 0U;
uint64_t x2390 = 382155609623972LLU;
uint8_t x2392 = 15U;
volatile int32_t t63 = 369;
int8_t x2542 = -1;
int32_t x2544 = 0;
int16_t x2646 = INT16_MAX;
int32_t t66 = -7041;
uint16_t x2660 = 2U;
int32_t t67 = 1;
int16_t x2707 = 3363;
static int32_t t69 = -15;
int8_t x2737 = 0;
uint8_t x2747 = 85U;
static volatile int16_t x2857 = -1;
volatile int32_t t72 = -7;
volatile int32_t x2953 = -20442920;
static volatile int32_t x2956 = 1;
static volatile int64_t x3019 = INT64_MIN;
int16_t x3027 = INT16_MAX;
uint8_t x3028 = 4U;
static uint16_t x3087 = UINT16_MAX;
int8_t x3142 = -26;
int8_t x3177 = INT8_MIN;
int64_t x3186 = -1LL;
uint64_t x3187 = UINT64_MAX;
volatile int32_t x3233 = -1;
static volatile int64_t x3267 = INT64_MIN;
static volatile uint16_t x3332 = 1U;
int32_t t86 = 5029653;
int32_t x3349 = INT32_MIN;
int32_t x3351 = INT32_MIN;
int32_t x3423 = INT32_MIN;
static int32_t t90 = 743;
volatile int32_t t91 = -415;
volatile uint32_t x3463 = 285113U;
uint8_t x3520 = 29U;
volatile int32_t t93 = 625148247;
int32_t t95 = -9103109;
int8_t x3563 = INT8_MIN;
int32_t t96 = 271874;
static int16_t x3565 = -1;
uint8_t x3582 = UINT8_MAX;
static int16_t x3583 = -1;
int16_t x3625 = -1;
volatile int32_t x3627 = 37808194;
static volatile int32_t t99 = 6;


void f0(void) {
	static volatile int8_t x13 = INT8_MIN;
	int16_t x14 = INT16_MIN;
	int16_t x15 = -1;
	uint8_t x16 = 0U;

	t0 = (((x13*x14)<x15)<<x16);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x41 = 74667;
	int32_t x42 = -1;
	uint8_t x43 = 52U;
	uint8_t x44 = 5U;
	volatile int32_t t1 = -17704406;

	t1 = (((x41*x42)<x43)<<x44);

	if (t1 != 32) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x75 = -1;
	static int32_t t2 = -7;

	t2 = (((x73*x74)<x75)<<x76);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x77 = INT32_MIN;
	uint8_t x78 = 1U;
	static int64_t x79 = INT64_MIN;
	volatile int64_t x80 = 0LL;
	static volatile int32_t t3 = 132591002;

	t3 = (((x77*x78)<x79)<<x80);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = 1;
	uint64_t x84 = 19LLU;
	int32_t t4 = 556348;

	t4 = (((x81*x82)<x83)<<x84);

	if (t4 != 524288) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x93 = 3176LLU;
	static int64_t x94 = -16LL;
	static int16_t x95 = INT16_MIN;
	int32_t t5 = 305683;

	t5 = (((x93*x94)<x95)<<x96);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x261 = UINT8_MAX;
	int8_t x262 = -1;
	static volatile uint32_t x263 = 491299U;
	static uint8_t x264 = 15U;
	int32_t t6 = -12;

	t6 = (((x261*x262)<x263)<<x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	static uint32_t x287 = UINT32_MAX;
	int8_t x288 = 1;
	volatile int32_t t7 = 176017393;

	t7 = (((x285*x286)<x287)<<x288);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	static int16_t x304 = 0;
	volatile int32_t t8 = -2;

	t8 = (((x301*x302)<x303)<<x304);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x449 = INT16_MAX;
	volatile uint16_t x450 = 1U;
	uint16_t x451 = UINT16_MAX;
	volatile int32_t t9 = -22966723;

	t9 = (((x449*x450)<x451)<<x452);

	if (t9 != 262144) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x553 = UINT16_MAX;
	uint32_t x554 = UINT32_MAX;
	int32_t x556 = 18;
	int32_t t10 = -3;

	t10 = (((x553*x554)<x555)<<x556);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x589 = 1;
	int32_t x590 = -1;
	volatile int32_t t11 = 2;

	t11 = (((x589*x590)<x591)<<x592);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x597 = UINT64_MAX;
	uint16_t x598 = 738U;
	int32_t x599 = INT32_MIN;
	uint16_t x600 = 10U;
	int32_t t12 = 1;

	t12 = (((x597*x598)<x599)<<x600);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x693 = INT16_MIN;
	static int64_t x695 = INT64_MIN;
	static uint64_t x696 = 5LLU;
	volatile int32_t t13 = -40;

	t13 = (((x693*x694)<x695)<<x696);

	if (t13 != 32) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x733 = -3;
	int32_t x734 = -150050;
	int32_t x735 = -1;
	volatile int32_t x736 = 1;
	int32_t t14 = -54038;

	t14 = (((x733*x734)<x735)<<x736);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x745 = INT32_MIN;
	uint32_t x746 = 2275U;
	static uint8_t x747 = UINT8_MAX;
	static volatile int8_t x748 = 22;

	t15 = (((x745*x746)<x747)<<x748);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x769 = 0LL;
	static volatile int16_t x771 = 2345;
	uint64_t x772 = 0LLU;
	volatile int32_t t16 = -894502;

	t16 = (((x769*x770)<x771)<<x772);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x793 = 507233LLU;
	static int8_t x794 = 25;
	uint32_t x795 = 1U;
	int32_t t17 = -580;

	t17 = (((x793*x794)<x795)<<x796);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x850 = UINT32_MAX;
	uint16_t x851 = 60U;
	uint8_t x852 = 14U;
	volatile int32_t t18 = 0;

	t18 = (((x849*x850)<x851)<<x852);

	if (t18 != 16384) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x857 = -35607LL;
	static int16_t x859 = INT16_MIN;
	volatile int32_t t19 = 83;

	t19 = (((x857*x858)<x859)<<x860);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x917 = -1;
	uint64_t x918 = UINT64_MAX;
	int32_t x919 = -1086114;

	t20 = (((x917*x918)<x919)<<x920);

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x973 = 23840;
	uint8_t x974 = 3U;
	uint8_t x976 = 1U;
	int32_t t21 = -121072954;

	t21 = (((x973*x974)<x975)<<x976);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x977 = 2;
	int16_t x978 = INT16_MIN;
	int64_t x979 = INT64_MIN;
	uint8_t x980 = 29U;
	volatile int32_t t22 = -3138;

	t22 = (((x977*x978)<x979)<<x980);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1057 = -729935805;
	uint32_t x1058 = 1U;
	int64_t x1059 = INT64_MIN;
	static volatile int32_t t23 = -2101037;

	t23 = (((x1057*x1058)<x1059)<<x1060);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1077 = 6210LL;
	volatile uint8_t x1078 = 27U;
	int64_t x1079 = INT64_MIN;

	t24 = (((x1077*x1078)<x1079)<<x1080);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1087 = INT32_MIN;
	uint8_t x1088 = 1U;
	int32_t t25 = 1;

	t25 = (((x1085*x1086)<x1087)<<x1088);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1093 = 65LLU;
	int8_t x1094 = -6;
	int8_t x1095 = -1;
	uint8_t x1096 = 18U;
	volatile int32_t t26 = 10541948;

	t26 = (((x1093*x1094)<x1095)<<x1096);

	if (t26 != 262144) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1105 = UINT32_MAX;
	int16_t x1106 = INT16_MIN;
	volatile uint64_t x1107 = UINT64_MAX;
	uint8_t x1108 = 7U;
	volatile int32_t t27 = 33184368;

	t27 = (((x1105*x1106)<x1107)<<x1108);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1173 = 21363LLU;
	uint64_t x1174 = 1064LLU;
	int32_t x1175 = -210533;
	uint8_t x1176 = 2U;

	t28 = (((x1173*x1174)<x1175)<<x1176);

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1197 = 223414678LL;
	int16_t x1198 = INT16_MIN;
	int32_t x1199 = INT32_MAX;
	volatile int32_t t29 = 54181;

	t29 = (((x1197*x1198)<x1199)<<x1200);

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1213 = UINT8_MAX;
	static volatile uint32_t x1214 = 51731U;
	static uint8_t x1216 = 0U;
	int32_t t30 = -24665;

	t30 = (((x1213*x1214)<x1215)<<x1216);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1253 = INT64_MIN;
	static uint64_t x1254 = 276507190470150536LLU;
	static int8_t x1255 = 10;
	volatile uint16_t x1256 = 7U;
	int32_t t31 = 268135405;

	t31 = (((x1253*x1254)<x1255)<<x1256);

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1285 = INT8_MIN;
	int8_t x1286 = INT8_MIN;
	volatile int32_t x1287 = -1;
	uint8_t x1288 = 31U;

	t32 = (((x1285*x1286)<x1287)<<x1288);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1301 = 2548930261116LLU;
	int64_t x1302 = INT64_MIN;
	uint16_t x1303 = 31U;
	volatile int32_t t33 = -4579231;

	t33 = (((x1301*x1302)<x1303)<<x1304);

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1313 = -34;
	uint32_t x1314 = 190121286U;
	uint16_t x1315 = UINT16_MAX;
	uint8_t x1316 = 1U;
	int32_t t34 = -2109;

	t34 = (((x1313*x1314)<x1315)<<x1316);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1334 = -12;
	int32_t x1335 = -1;
	volatile int32_t x1336 = 3;
	int32_t t35 = -186;

	t35 = (((x1333*x1334)<x1335)<<x1336);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1353 = INT32_MAX;
	uint32_t x1354 = 32193U;
	int16_t x1356 = 0;
	volatile int32_t t36 = -114;

	t36 = (((x1353*x1354)<x1355)<<x1356);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1357 = -1;
	static uint32_t x1358 = UINT32_MAX;
	uint64_t x1359 = UINT64_MAX;
	static uint8_t x1360 = 1U;
	volatile int32_t t37 = -1;

	t37 = (((x1357*x1358)<x1359)<<x1360);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1365 = -1LL;
	volatile int16_t x1366 = -1;
	static uint32_t x1367 = UINT32_MAX;
	volatile int32_t t38 = 6;

	t38 = (((x1365*x1366)<x1367)<<x1368);

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1373 = -1;
	int16_t x1374 = INT16_MIN;
	volatile int64_t x1375 = -12472394150679LL;
	volatile uint8_t x1376 = 24U;
	static int32_t t39 = 27672261;

	t39 = (((x1373*x1374)<x1375)<<x1376);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1417 = 0U;
	uint8_t x1418 = UINT8_MAX;
	static int8_t x1419 = -1;
	uint16_t x1420 = 0U;
	volatile int32_t t40 = -42909;

	t40 = (((x1417*x1418)<x1419)<<x1420);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1461 = UINT64_MAX;
	volatile uint32_t x1463 = 392718U;
	uint8_t x1464 = 24U;

	t41 = (((x1461*x1462)<x1463)<<x1464);

	if (t41 != 16777216) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1509 = INT16_MAX;
	uint32_t x1510 = 1499U;
	uint32_t x1511 = 12257U;
	static int16_t x1512 = 1;
	volatile int32_t t42 = 2;

	t42 = (((x1509*x1510)<x1511)<<x1512);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x1514 = 1468733497LL;
	volatile int32_t x1515 = INT32_MIN;
	volatile uint8_t x1516 = 2U;
	volatile int32_t t43 = 0;

	t43 = (((x1513*x1514)<x1515)<<x1516);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1537 = INT64_MAX;
	uint16_t x1538 = 0U;
	uint32_t x1540 = 0U;

	t44 = (((x1537*x1538)<x1539)<<x1540);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x1722 = -1;
	int32_t x1723 = INT32_MIN;
	uint32_t x1724 = 18U;

	t45 = (((x1721*x1722)<x1723)<<x1724);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1760 = 1U;
	static volatile int32_t t46 = -944;

	t46 = (((x1757*x1758)<x1759)<<x1760);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1869 = 28827U;
	int16_t x1870 = -4;
	static int8_t x1871 = INT8_MIN;
	static volatile uint8_t x1872 = 1U;
	volatile int32_t t47 = 1;

	t47 = (((x1869*x1870)<x1871)<<x1872);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1905 = INT16_MIN;
	int16_t x1906 = 41;
	int8_t x1907 = INT8_MIN;
	static int8_t x1908 = 27;

	t48 = (((x1905*x1906)<x1907)<<x1908);

	if (t48 != 134217728) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x1909 = -1LL;
	uint16_t x1910 = 85U;
	uint64_t x1911 = 0LLU;
	volatile uint8_t x1912 = 3U;
	int32_t t49 = 2958;

	t49 = (((x1909*x1910)<x1911)<<x1912);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x1917 = -1;
	int16_t x1919 = -6968;
	int16_t x1920 = 4;
	int32_t t50 = 1570;

	t50 = (((x1917*x1918)<x1919)<<x1920);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1978 = INT16_MAX;
	volatile int32_t x1979 = INT32_MIN;
	uint32_t x1980 = 8U;
	volatile int32_t t51 = 12329;

	t51 = (((x1977*x1978)<x1979)<<x1980);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2033 = INT8_MAX;
	static int16_t x2035 = -1;
	volatile uint32_t x2036 = 1U;

	t52 = (((x2033*x2034)<x2035)<<x2036);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2053 = INT8_MIN;
	static int64_t x2054 = -558LL;
	static int8_t x2055 = INT8_MIN;
	int32_t x2056 = 0;
	volatile int32_t t53 = -22888837;

	t53 = (((x2053*x2054)<x2055)<<x2056);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2129 = -2;
	volatile int16_t x2130 = INT16_MIN;
	int32_t t54 = 58;

	t54 = (((x2129*x2130)<x2131)<<x2132);

	if (t54 != 512) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2161 = -1;
	uint32_t x2162 = 72U;
	int8_t x2163 = INT8_MIN;
	volatile uint16_t x2164 = 24U;

	t55 = (((x2161*x2162)<x2163)<<x2164);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2193 = INT8_MIN;
	uint8_t x2195 = 29U;
	static int8_t x2196 = 0;
	volatile int32_t t56 = -45636;

	t56 = (((x2193*x2194)<x2195)<<x2196);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2249 = INT16_MAX;
	int16_t x2250 = INT16_MIN;
	static volatile uint8_t x2251 = 12U;
	int16_t x2252 = 6;
	volatile int32_t t57 = 305207;

	t57 = (((x2249*x2250)<x2251)<<x2252);

	if (t57 != 64) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2261 = 0U;
	int16_t x2262 = INT16_MIN;
	static volatile int32_t x2263 = INT32_MIN;

	t58 = (((x2261*x2262)<x2263)<<x2264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2265 = INT32_MIN;
	static int16_t x2266 = 0;
	volatile int8_t x2267 = -34;
	static uint8_t x2268 = 1U;
	volatile int32_t t59 = -1175836;

	t59 = (((x2265*x2266)<x2267)<<x2268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2273 = INT16_MAX;
	static uint32_t x2275 = 90U;
	volatile uint16_t x2276 = 3U;
	static volatile int32_t t60 = -17;

	t60 = (((x2273*x2274)<x2275)<<x2276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2309 = 1U;
	static int32_t x2310 = 434727;
	int16_t x2311 = -1;
	volatile int32_t t61 = -151960;

	t61 = (((x2309*x2310)<x2311)<<x2312);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2389 = INT64_MAX;
	static uint32_t x2391 = 691422U;
	volatile int32_t t62 = 15399;

	t62 = (((x2389*x2390)<x2391)<<x2392);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2393 = INT16_MIN;
	volatile int64_t x2394 = 5425494LL;
	volatile int16_t x2395 = -140;
	static uint16_t x2396 = 3U;

	t63 = (((x2393*x2394)<x2395)<<x2396);

	if (t63 != 8) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2481 = -1;
	int32_t x2482 = 23353683;
	int8_t x2483 = -6;
	uint64_t x2484 = 10LLU;
	int32_t t64 = -3;

	t64 = (((x2481*x2482)<x2483)<<x2484);

	if (t64 != 1024) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2541 = 252892LLU;
	volatile int32_t x2543 = INT32_MAX;
	int32_t t65 = -20;

	t65 = (((x2541*x2542)<x2543)<<x2544);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2645 = 0;
	int16_t x2647 = -959;
	int8_t x2648 = 1;

	t66 = (((x2645*x2646)<x2647)<<x2648);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2657 = INT32_MIN;
	int64_t x2658 = -1LL;
	int16_t x2659 = 2369;

	t67 = (((x2657*x2658)<x2659)<<x2660);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2705 = 6882LL;
	int16_t x2706 = INT16_MAX;
	volatile uint8_t x2708 = 26U;
	volatile int32_t t68 = -106;

	t68 = (((x2705*x2706)<x2707)<<x2708);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x2733 = 1436396059LL;
	static int8_t x2734 = INT8_MAX;
	int16_t x2735 = INT16_MIN;
	int32_t x2736 = 6;

	t69 = (((x2733*x2734)<x2735)<<x2736);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2738 = UINT16_MAX;
	uint16_t x2739 = UINT16_MAX;
	volatile uint64_t x2740 = 0LLU;
	int32_t t70 = -23244130;

	t70 = (((x2737*x2738)<x2739)<<x2740);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2745 = INT16_MAX;
	int8_t x2746 = INT8_MIN;
	static uint16_t x2748 = 3U;
	int32_t t71 = -20815465;

	t71 = (((x2745*x2746)<x2747)<<x2748);

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2858 = 539480LL;
	int32_t x2859 = INT32_MIN;
	static uint8_t x2860 = 9U;

	t72 = (((x2857*x2858)<x2859)<<x2860);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x2954 = -1LL;
	static int8_t x2955 = -1;
	volatile int32_t t73 = 189351922;

	t73 = (((x2953*x2954)<x2955)<<x2956);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2985 = INT8_MAX;
	int64_t x2986 = -1LL;
	int64_t x2987 = INT64_MIN;
	volatile uint16_t x2988 = 13U;
	int32_t t74 = -9301;

	t74 = (((x2985*x2986)<x2987)<<x2988);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3017 = 1350554;
	uint8_t x3018 = 13U;
	uint8_t x3020 = 0U;
	volatile int32_t t75 = -25745;

	t75 = (((x3017*x3018)<x3019)<<x3020);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x3025 = 4987414976733302LLU;
	int32_t x3026 = -93739477;
	int32_t t76 = 101;

	t76 = (((x3025*x3026)<x3027)<<x3028);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3085 = 7;
	static int16_t x3086 = INT16_MAX;
	uint16_t x3088 = 5U;
	int32_t t77 = 179325329;

	t77 = (((x3085*x3086)<x3087)<<x3088);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3141 = UINT8_MAX;
	int16_t x3143 = -7;
	uint16_t x3144 = 25U;
	volatile int32_t t78 = -777633;

	t78 = (((x3141*x3142)<x3143)<<x3144);

	if (t78 != 33554432) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3178 = -1;
	static int8_t x3179 = 3;
	int16_t x3180 = 27;
	int32_t t79 = 22803706;

	t79 = (((x3177*x3178)<x3179)<<x3180);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3185 = 6737;
	uint8_t x3188 = 9U;
	static volatile int32_t t80 = -6;

	t80 = (((x3185*x3186)<x3187)<<x3188);

	if (t80 != 512) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x3197 = INT8_MIN;
	int16_t x3198 = 5;
	static uint8_t x3199 = UINT8_MAX;
	static uint8_t x3200 = 14U;
	int32_t t81 = -2;

	t81 = (((x3197*x3198)<x3199)<<x3200);

	if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3201 = 70987672U;
	int16_t x3202 = INT16_MIN;
	int32_t x3203 = INT32_MIN;
	int8_t x3204 = 0;
	volatile int32_t t82 = -46832;

	t82 = (((x3201*x3202)<x3203)<<x3204);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3234 = 1971305U;
	int16_t x3235 = INT16_MIN;
	static int8_t x3236 = 0;
	static volatile int32_t t83 = -417169185;

	t83 = (((x3233*x3234)<x3235)<<x3236);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3265 = -11272311;
	int8_t x3266 = -2;
	uint16_t x3268 = 0U;
	volatile int32_t t84 = 85;

	t84 = (((x3265*x3266)<x3267)<<x3268);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3277 = 150U;
	int8_t x3278 = INT8_MIN;
	int8_t x3279 = 21;
	int8_t x3280 = 19;
	static volatile int32_t t85 = 84;

	t85 = (((x3277*x3278)<x3279)<<x3280);

	if (t85 != 524288) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3329 = 12767U;
	static int8_t x3330 = INT8_MIN;
	static volatile int8_t x3331 = -1;

	t86 = (((x3329*x3330)<x3331)<<x3332);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3350 = 0;
	volatile uint16_t x3352 = 0U;
	volatile int32_t t87 = -2302;

	t87 = (((x3349*x3350)<x3351)<<x3352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3357 = -1;
	int16_t x3358 = 2;
	int32_t x3359 = INT32_MIN;
	uint8_t x3360 = 3U;
	static volatile int32_t t88 = -2386;

	t88 = (((x3357*x3358)<x3359)<<x3360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x3361 = 37557U;
	int16_t x3362 = 2;
	static volatile uint64_t x3363 = 51074249658339LLU;
	uint16_t x3364 = 5U;
	volatile int32_t t89 = -1;

	t89 = (((x3361*x3362)<x3363)<<x3364);

	if (t89 != 32) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x3421 = -1;
	int16_t x3422 = INT16_MIN;
	static int32_t x3424 = 3;

	t90 = (((x3421*x3422)<x3423)<<x3424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x3453 = -1;
	int8_t x3454 = INT8_MAX;
	volatile uint16_t x3455 = 127U;
	uint64_t x3456 = 17LLU;

	t91 = (((x3453*x3454)<x3455)<<x3456);

	if (t91 != 131072) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3461 = 0U;
	int8_t x3462 = 1;
	uint8_t x3464 = 0U;
	int32_t t92 = 32454098;

	t92 = (((x3461*x3462)<x3463)<<x3464);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3517 = -1;
	volatile int8_t x3518 = INT8_MIN;
	int8_t x3519 = -34;

	t93 = (((x3517*x3518)<x3519)<<x3520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x3537 = 3LL;
	int8_t x3538 = INT8_MAX;
	volatile uint32_t x3539 = 119173201U;
	static uint8_t x3540 = 19U;
	volatile int32_t t94 = -103673;

	t94 = (((x3537*x3538)<x3539)<<x3540);

	if (t94 != 524288) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3553 = 70694;
	uint64_t x3554 = 243590860293411LLU;
	int32_t x3555 = INT32_MIN;
	uint8_t x3556 = 0U;

	t95 = (((x3553*x3554)<x3555)<<x3556);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x3561 = 156U;
	volatile uint64_t x3562 = 936961085807931344LLU;
	int32_t x3564 = 13;

	t96 = (((x3561*x3562)<x3563)<<x3564);

	if (t96 != 8192) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x3566 = 61U;
	int16_t x3567 = INT16_MIN;
	uint8_t x3568 = 7U;
	volatile int32_t t97 = -60952877;

	t97 = (((x3565*x3566)<x3567)<<x3568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3581 = -1;
	uint16_t x3584 = 7U;
	static int32_t t98 = -66;

	t98 = (((x3581*x3582)<x3583)<<x3584);

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x3626 = 4U;
	int16_t x3628 = 9;

	t99 = (((x3625*x3626)<x3627)<<x3628);

	if (t99 != 512) { NG(); } else { ; }
	
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

