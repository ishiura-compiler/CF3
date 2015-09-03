#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x11 = 4U;
uint64_t t1 = 61LLU;
int32_t x37 = INT32_MIN;
int32_t x42 = INT32_MIN;
uint8_t x55 = 4U;
int64_t x63 = 3LL;
int64_t x111 = 7LL;
int32_t t9 = -49705026;
int8_t x302 = -1;
uint32_t x304 = 384087239U;
static uint8_t x331 = 1U;
uint32_t x332 = UINT32_MAX;
int16_t x337 = -1;
static uint8_t x367 = 26U;
static int32_t x368 = -1;
int8_t x459 = 2;
volatile uint8_t x559 = 1U;
static volatile int16_t x560 = -1;
int64_t t20 = 11364216678462603LL;
volatile int32_t x614 = INT32_MAX;
static volatile int64_t t23 = -2188928836934LL;
volatile uint32_t x993 = 402342316U;
uint16_t x1035 = 1U;
int8_t x1103 = 0;
uint32_t x1104 = 106090704U;
int8_t x1123 = 0;
volatile uint32_t t30 = 1925U;
uint8_t x1235 = 1U;
int32_t x1252 = INT32_MAX;
static uint8_t x1420 = UINT8_MAX;
uint64_t t37 = 1990823389384LLU;
volatile int8_t x1481 = -3;
int8_t x1485 = -53;
uint64_t x1486 = UINT64_MAX;
uint16_t x1487 = 3U;
volatile int64_t t40 = 180478596LL;
int8_t x1581 = 2;
volatile int16_t x1584 = INT16_MIN;
volatile int32_t x1630 = INT32_MIN;
uint32_t x1632 = UINT32_MAX;
uint64_t x1705 = 219454LLU;
uint8_t x1707 = 1U;
int64_t t47 = 61360474LL;
uint16_t x1777 = 1008U;
int8_t x1780 = 27;
int32_t t48 = -6;
volatile int8_t x1979 = 0;
uint8_t x2111 = 2U;
int64_t x2146 = -1LL;
uint32_t x2148 = 5561U;
volatile int64_t x2277 = -840374626571LL;
uint8_t x2279 = 0U;
int8_t x2322 = INT8_MIN;
volatile int32_t t64 = -1;
int16_t x2458 = INT16_MIN;
int32_t x2524 = -485718;
static volatile int32_t t68 = -17;
int8_t x2530 = -1;
static uint16_t x2555 = 2U;
uint32_t x2889 = UINT32_MAX;
static int64_t t78 = -1773092868609460LL;
int8_t x3043 = 4;
volatile uint16_t x3077 = 20430U;
int8_t x3201 = INT8_MIN;
int64_t x3204 = -1LL;
int32_t x3265 = -24465;
uint32_t x3268 = 12U;
volatile int32_t x3314 = INT32_MAX;
uint64_t x3315 = 0LLU;
static volatile uint32_t t87 = UINT32_MAX;
int16_t x3390 = INT16_MIN;
int8_t x3442 = -5;
uint64_t x3445 = 397LLU;
int32_t x3446 = INT32_MIN;
int32_t x3494 = INT32_MIN;
uint16_t x3520 = 7U;
uint8_t x3555 = 1U;
volatile uint32_t x3556 = UINT32_MAX;
uint16_t x3559 = 16U;
static volatile uint64_t x3577 = 2166560995876553LLU;
int8_t x3583 = 0;
static volatile int16_t x3597 = INT16_MIN;
volatile int64_t x3600 = -1LL;


void f0(void) {
	int16_t x5 = -1;
	int8_t x6 = -1;
	static uint16_t x7 = 1U;
	int32_t x8 = -1;
	volatile int32_t t0 = 30200;

	t0 = (((x5/x6)>>x7)|x8);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	int16_t x12 = 3;

	t1 = (((x9/x10)>>x11)|x12);

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x38 = 14074894LLU;
	int8_t x39 = 1;
	int16_t x40 = -1;
	uint64_t t2 = UINT64_MAX;

	t2 = (((x37/x38)>>x39)|x40);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x41 = -7;
	uint8_t x43 = 20U;
	int16_t x44 = INT16_MIN;
	int32_t t3 = 0;

	t3 = (((x41/x42)>>x43)|x44);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = -16;
	int64_t x56 = INT64_MAX;
	int64_t t4 = INT64_MAX;

	t4 = (((x53/x54)>>x55)|x56);

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x61 = 73;
	volatile int32_t x62 = INT32_MIN;
	int64_t x64 = 56024LL;
	volatile int64_t t5 = 484453910070484LL;

	t5 = (((x61/x62)>>x63)|x64);

	if (t5 != 56024LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x73 = -3LL;
	int16_t x74 = -18;
	static volatile uint16_t x75 = 1U;
	int8_t x76 = INT8_MIN;
	volatile int64_t t6 = -47LL;

	t6 = (((x73/x74)>>x75)|x76);

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x109 = 1264291;
	volatile uint64_t x110 = UINT64_MAX;
	uint16_t x112 = 1U;
	static volatile uint64_t t7 = 11840875LLU;

	t7 = (((x109/x110)>>x111)|x112);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x181 = -1;
	volatile int64_t x182 = -198634687513161LL;
	uint8_t x183 = 13U;
	int32_t x184 = -1;
	static int64_t t8 = -39LL;

	t8 = (((x181/x182)>>x183)|x184);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x297 = INT32_MIN;
	volatile int32_t x298 = INT32_MIN;
	static uint8_t x299 = 0U;
	uint16_t x300 = UINT16_MAX;

	t9 = (((x297/x298)>>x299)|x300);

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x301 = 1493667U;
	uint8_t x303 = 3U;
	volatile uint32_t t10 = 60286U;

	t10 = (((x301/x302)>>x303)|x304);

	if (t10 != 384087239U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x313 = 3426681U;
	static int64_t x314 = INT64_MIN;
	volatile uint8_t x315 = 6U;
	volatile int32_t x316 = INT32_MAX;
	static volatile int64_t t11 = -25LL;

	t11 = (((x313/x314)>>x315)|x316);

	if (t11 != 2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x329 = 8305U;
	uint32_t x330 = 9498U;
	uint32_t t12 = UINT32_MAX;

	t12 = (((x329/x330)>>x331)|x332);

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x338 = 106U;
	static volatile uint8_t x339 = 7U;
	int8_t x340 = INT8_MIN;
	int32_t t13 = 0;

	t13 = (((x337/x338)>>x339)|x340);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x365 = 254LLU;
	int64_t x366 = INT64_MIN;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (((x365/x366)>>x367)|x368);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x401 = 54034LLU;
	static volatile int8_t x402 = INT8_MIN;
	int8_t x403 = 1;
	int32_t x404 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x401/x402)>>x403)|x404);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x417 = 13726U;
	static volatile uint16_t x418 = 4004U;
	uint8_t x419 = 2U;
	volatile int8_t x420 = -1;
	volatile uint32_t t16 = UINT32_MAX;

	t16 = (((x417/x418)>>x419)|x420);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x457 = 18U;
	static int8_t x458 = 3;
	static int32_t x460 = 989440;
	int32_t t17 = 11089837;

	t17 = (((x457/x458)>>x459)|x460);

	if (t17 != 989441) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x477 = INT16_MIN;
	static volatile int64_t x478 = -1LL;
	int8_t x479 = 5;
	int8_t x480 = INT8_MAX;
	volatile int64_t t18 = -21939339LL;

	t18 = (((x477/x478)>>x479)|x480);

	if (t18 != 1151LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x557 = INT32_MIN;
	static int64_t x558 = -769677LL;
	static int64_t t19 = 67139846013878943LL;

	t19 = (((x557/x558)>>x559)|x560);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x597 = UINT32_MAX;
	int64_t x598 = 5356548373413LL;
	uint64_t x599 = 0LLU;
	int64_t x600 = -679889852640LL;

	t20 = (((x597/x598)>>x599)|x600);

	if (t20 != -679889852640LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x613 = 13U;
	static uint8_t x615 = 3U;
	int8_t x616 = INT8_MAX;
	volatile int32_t t21 = 3;

	t21 = (((x613/x614)>>x615)|x616);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x833 = INT8_MIN;
	uint32_t x834 = UINT32_MAX;
	uint16_t x835 = 0U;
	uint16_t x836 = 923U;
	volatile uint32_t t22 = 22618U;

	t22 = (((x833/x834)>>x835)|x836);

	if (t22 != 923U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x901 = 0U;
	static int64_t x902 = INT64_MAX;
	static int16_t x903 = 33;
	uint16_t x904 = UINT16_MAX;

	t23 = (((x901/x902)>>x903)|x904);

	if (t23 != 65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x953 = INT64_MIN;
	int32_t x954 = INT32_MIN;
	uint8_t x955 = 1U;
	static volatile uint64_t x956 = 10LLU;
	uint64_t t24 = 2689823744169366158LLU;

	t24 = (((x953/x954)>>x955)|x956);

	if (t24 != 2147483658LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x985 = INT16_MIN;
	uint32_t x986 = 6U;
	uint8_t x987 = 0U;
	int32_t x988 = -1;
	static volatile uint32_t t25 = UINT32_MAX;

	t25 = (((x985/x986)>>x987)|x988);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x994 = UINT32_MAX;
	static int32_t x995 = 0;
	static uint16_t x996 = UINT16_MAX;
	uint32_t t26 = 1763U;

	t26 = (((x993/x994)>>x995)|x996);

	if (t26 != 65535U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1033 = -1;
	uint16_t x1034 = UINT16_MAX;
	uint8_t x1036 = 113U;
	static int32_t t27 = -60028;

	t27 = (((x1033/x1034)>>x1035)|x1036);

	if (t27 != 113) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1081 = UINT16_MAX;
	static int8_t x1082 = INT8_MAX;
	int32_t x1083 = 1;
	static volatile int16_t x1084 = -912;
	int32_t t28 = -40324;

	t28 = (((x1081/x1082)>>x1083)|x1084);

	if (t28 != -654) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1101 = 542589533U;
	static int32_t x1102 = 898900905;
	volatile uint32_t t29 = 7U;

	t29 = (((x1101/x1102)>>x1103)|x1104);

	if (t29 != 106090704U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1121 = -1;
	uint8_t x1122 = 38U;
	uint32_t x1124 = 4507794U;

	t30 = (((x1121/x1122)>>x1123)|x1124);

	if (t30 != 4507794U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1125 = 1;
	int32_t x1126 = INT32_MIN;
	static uint8_t x1127 = 3U;
	int32_t x1128 = INT32_MAX;
	static int32_t t31 = INT32_MAX;

	t31 = (((x1125/x1126)>>x1127)|x1128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1233 = 33984390950200LLU;
	int32_t x1234 = 64795;
	int8_t x1236 = -1;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = (((x1233/x1234)>>x1235)|x1236);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1249 = INT32_MIN;
	volatile uint64_t x1250 = UINT64_MAX;
	int32_t x1251 = 57;
	volatile uint64_t t33 = 27606812LLU;

	t33 = (((x1249/x1250)>>x1251)|x1252);

	if (t33 != 2147483647LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1305 = -1LL;
	int8_t x1306 = INT8_MIN;
	volatile int16_t x1307 = 1;
	uint8_t x1308 = 1U;
	volatile int64_t t34 = 1869068232358355LL;

	t34 = (((x1305/x1306)>>x1307)|x1308);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1369 = 0;
	uint32_t x1370 = 131U;
	int8_t x1371 = 2;
	static int8_t x1372 = -1;
	static volatile uint32_t t35 = UINT32_MAX;

	t35 = (((x1369/x1370)>>x1371)|x1372);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1377 = INT8_MIN;
	volatile int64_t x1378 = INT64_MIN;
	int16_t x1379 = 1;
	int32_t x1380 = 0;
	int64_t t36 = 5864349536LL;

	t36 = (((x1377/x1378)>>x1379)|x1380);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1417 = -6;
	uint64_t x1418 = UINT64_MAX;
	int8_t x1419 = 10;

	t37 = (((x1417/x1418)>>x1419)|x1420);

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1482 = INT64_MIN;
	volatile uint8_t x1483 = 3U;
	int8_t x1484 = INT8_MIN;
	volatile int64_t t38 = -209633LL;

	t38 = (((x1481/x1482)>>x1483)|x1484);

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1488 = -1;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (((x1485/x1486)>>x1487)|x1488);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x1489 = -1LL;
	int32_t x1490 = INT32_MIN;
	volatile int32_t x1491 = 2;
	static uint32_t x1492 = 9U;

	t40 = (((x1489/x1490)>>x1491)|x1492);

	if (t40 != 9LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1582 = 59909U;
	volatile uint16_t x1583 = 6U;
	uint32_t t41 = 115064U;

	t41 = (((x1581/x1582)>>x1583)|x1584);

	if (t41 != 4294934528U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1593 = -1LL;
	static uint8_t x1594 = 15U;
	static uint8_t x1595 = 20U;
	int32_t x1596 = INT32_MIN;
	volatile int64_t t42 = -26363975LL;

	t42 = (((x1593/x1594)>>x1595)|x1596);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1613 = INT64_MAX;
	volatile uint32_t x1614 = 996565322U;
	volatile uint8_t x1615 = 1U;
	int16_t x1616 = INT16_MIN;
	volatile int64_t t43 = -33498240LL;

	t43 = (((x1613/x1614)>>x1615)|x1616);

	if (t43 != -14998LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1629 = INT16_MIN;
	volatile int32_t x1631 = 1;
	uint32_t t44 = UINT32_MAX;

	t44 = (((x1629/x1630)>>x1631)|x1632);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x1661 = INT64_MIN;
	static int64_t x1662 = -32556LL;
	static int16_t x1663 = 2;
	static int16_t x1664 = -174;
	int64_t t45 = 100408246LL;

	t45 = (((x1661/x1662)>>x1663)|x1664);

	if (t45 != -133LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x1706 = UINT8_MAX;
	volatile int64_t x1708 = 9814321985LL;
	uint64_t t46 = 1221165370LLU;

	t46 = (((x1705/x1706)>>x1707)|x1708);

	if (t46 != 9814322159LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1757 = INT32_MIN;
	volatile int64_t x1758 = INT64_MIN;
	static uint16_t x1759 = 55U;
	uint32_t x1760 = 12218766U;

	t47 = (((x1757/x1758)>>x1759)|x1760);

	if (t47 != 12218766LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x1778 = INT32_MIN;
	uint8_t x1779 = 4U;

	t48 = (((x1777/x1778)>>x1779)|x1780);

	if (t48 != 27) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1829 = 104U;
	static int16_t x1830 = -10212;
	uint64_t x1831 = 3LLU;
	static volatile int16_t x1832 = INT16_MIN;
	static volatile int32_t t49 = 0;

	t49 = (((x1829/x1830)>>x1831)|x1832);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1857 = -1LL;
	int8_t x1858 = -1;
	uint32_t x1859 = 8U;
	int16_t x1860 = INT16_MIN;
	volatile int64_t t50 = 18869284010737LL;

	t50 = (((x1857/x1858)>>x1859)|x1860);

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1929 = UINT64_MAX;
	static int8_t x1930 = INT8_MIN;
	volatile uint8_t x1931 = 14U;
	static int8_t x1932 = -1;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x1929/x1930)>>x1931)|x1932);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x1949 = INT32_MIN;
	int64_t x1950 = INT64_MAX;
	uint8_t x1951 = 0U;
	uint16_t x1952 = 3U;
	static volatile int64_t t52 = 497568288526LL;

	t52 = (((x1949/x1950)>>x1951)|x1952);

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x1977 = 3617840684876LLU;
	volatile int16_t x1978 = 3329;
	int64_t x1980 = -27401572730LL;
	uint64_t t53 = 3LLU;

	t53 = (((x1977/x1978)>>x1979)|x1980);

	if (t53 != 18446744047386083271LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2045 = 31U;
	int16_t x2046 = INT16_MIN;
	int16_t x2047 = 2;
	static int16_t x2048 = -6;
	volatile int32_t t54 = 49;

	t54 = (((x2045/x2046)>>x2047)|x2048);

	if (t54 != -6) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2077 = -1LL;
	uint32_t x2078 = 55805775U;
	static int16_t x2079 = 54;
	volatile uint16_t x2080 = UINT16_MAX;
	volatile int64_t t55 = 2959946176383235LL;

	t55 = (((x2077/x2078)>>x2079)|x2080);

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2085 = -1;
	int16_t x2086 = INT16_MAX;
	int64_t x2087 = 7LL;
	static uint16_t x2088 = 1954U;
	static volatile int32_t t56 = -3926892;

	t56 = (((x2085/x2086)>>x2087)|x2088);

	if (t56 != 1954) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x2109 = -1;
	int16_t x2110 = INT16_MIN;
	int8_t x2112 = -1;
	static volatile int32_t t57 = 999;

	t57 = (((x2109/x2110)>>x2111)|x2112);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2141 = 63U;
	volatile int8_t x2142 = INT8_MAX;
	uint16_t x2143 = 6U;
	int8_t x2144 = 1;
	int32_t t58 = -319643010;

	t58 = (((x2141/x2142)>>x2143)|x2144);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2145 = INT32_MIN;
	int16_t x2147 = 0;
	static int64_t t59 = -729LL;

	t59 = (((x2145/x2146)>>x2147)|x2148);

	if (t59 != 2147489209LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2229 = -29861;
	volatile int16_t x2230 = INT16_MIN;
	uint8_t x2231 = 3U;
	int64_t x2232 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (((x2229/x2230)>>x2231)|x2232);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x2278 = -14189994451LL;
	int16_t x2280 = INT16_MIN;
	volatile int64_t t61 = 701LL;

	t61 = (((x2277/x2278)>>x2279)|x2280);

	if (t61 != -32709LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2321 = INT32_MIN;
	uint32_t x2323 = 6U;
	static volatile int16_t x2324 = INT16_MIN;
	static volatile int32_t t62 = 5;

	t62 = (((x2321/x2322)>>x2323)|x2324);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x2389 = -186273359147725891LL;
	int32_t x2390 = -1;
	int8_t x2391 = 3;
	volatile uint16_t x2392 = 5U;
	int64_t t63 = 1282LL;

	t63 = (((x2389/x2390)>>x2391)|x2392);

	if (t63 != 23284169893465741LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x2433 = -1;
	uint16_t x2434 = 23U;
	uint32_t x2435 = 13U;
	volatile uint16_t x2436 = 288U;

	t64 = (((x2433/x2434)>>x2435)|x2436);

	if (t64 != 288) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2457 = 252;
	uint16_t x2459 = 1U;
	volatile int32_t x2460 = INT32_MAX;
	static int32_t t65 = INT32_MAX;

	t65 = (((x2457/x2458)>>x2459)|x2460);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2469 = INT8_MIN;
	int8_t x2470 = INT8_MIN;
	static uint8_t x2471 = 8U;
	static uint8_t x2472 = 0U;
	int32_t t66 = -258804811;

	t66 = (((x2469/x2470)>>x2471)|x2472);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2521 = -42;
	uint16_t x2522 = 15052U;
	uint8_t x2523 = 4U;
	static volatile int32_t t67 = -2210;

	t67 = (((x2521/x2522)>>x2523)|x2524);

	if (t67 != -485718) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x2525 = 286U;
	static int16_t x2526 = INT16_MIN;
	uint8_t x2527 = 5U;
	int16_t x2528 = -1;

	t68 = (((x2525/x2526)>>x2527)|x2528);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2529 = INT8_MIN;
	int8_t x2531 = 1;
	int8_t x2532 = -6;
	int32_t t69 = -32;

	t69 = (((x2529/x2530)>>x2531)|x2532);

	if (t69 != -6) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2537 = 31909LLU;
	int64_t x2538 = 123658LL;
	static int16_t x2539 = 4;
	int16_t x2540 = INT16_MIN;
	uint64_t t70 = 9LLU;

	t70 = (((x2537/x2538)>>x2539)|x2540);

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x2553 = INT8_MIN;
	static volatile int32_t x2554 = -373115782;
	uint64_t x2556 = UINT64_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (((x2553/x2554)>>x2555)|x2556);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2573 = -1LL;
	uint16_t x2574 = UINT16_MAX;
	uint16_t x2575 = 6U;
	static int8_t x2576 = INT8_MAX;
	volatile int64_t t72 = -51179LL;

	t72 = (((x2573/x2574)>>x2575)|x2576);

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x2601 = UINT64_MAX;
	int16_t x2602 = 6855;
	volatile uint8_t x2603 = 0U;
	uint8_t x2604 = 16U;
	uint64_t t73 = 3151232060555903LLU;

	t73 = (((x2601/x2602)>>x2603)|x2604);

	if (t73 != 2690991112138519LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2705 = UINT64_MAX;
	uint64_t x2706 = UINT64_MAX;
	volatile int8_t x2707 = 2;
	uint16_t x2708 = UINT16_MAX;
	volatile uint64_t t74 = 70983451174864994LLU;

	t74 = (((x2705/x2706)>>x2707)|x2708);

	if (t74 != 65535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2769 = 578960620994LL;
	uint64_t x2770 = 16237390LLU;
	uint8_t x2771 = 0U;
	int32_t x2772 = INT32_MIN;
	volatile uint64_t t75 = 319126LLU;

	t75 = (((x2769/x2770)>>x2771)|x2772);

	if (t75 != 18446744071562103624LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2853 = 1328612377669343863LL;
	volatile uint64_t x2854 = 436977LLU;
	static uint8_t x2855 = 13U;
	static int32_t x2856 = INT32_MIN;
	uint64_t t76 = 43LLU;

	t76 = (((x2853/x2854)>>x2855)|x2856);

	if (t76 != 18446744071933218230LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2869 = -1;
	uint64_t x2870 = UINT64_MAX;
	uint8_t x2871 = 6U;
	int64_t x2872 = 1781827695537352846LL;
	volatile uint64_t t77 = 552809232438872984LLU;

	t77 = (((x2869/x2870)>>x2871)|x2872);

	if (t77 != 1781827695537352846LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2890 = INT64_MAX;
	uint8_t x2891 = 1U;
	uint32_t x2892 = 400794280U;

	t78 = (((x2889/x2890)>>x2891)|x2892);

	if (t78 != 400794280LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3041 = INT64_MIN;
	volatile int32_t x3042 = INT32_MIN;
	int64_t x3044 = -1LL;
	volatile int64_t t79 = 7759779508LL;

	t79 = (((x3041/x3042)>>x3043)|x3044);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3045 = 239;
	int16_t x3046 = INT16_MAX;
	uint8_t x3047 = 15U;
	int8_t x3048 = -27;
	volatile int32_t t80 = 4655110;

	t80 = (((x3045/x3046)>>x3047)|x3048);

	if (t80 != -27) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3078 = INT16_MIN;
	int8_t x3079 = 11;
	uint8_t x3080 = 3U;
	int32_t t81 = -200804211;

	t81 = (((x3077/x3078)>>x3079)|x3080);

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3202 = -1345608575LL;
	int32_t x3203 = 0;
	static int64_t t82 = 2LL;

	t82 = (((x3201/x3202)>>x3203)|x3204);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3209 = -1;
	uint8_t x3210 = UINT8_MAX;
	uint32_t x3211 = 0U;
	int32_t x3212 = -109032;
	int32_t t83 = -445;

	t83 = (((x3209/x3210)>>x3211)|x3212);

	if (t83 != -109032) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3266 = -1;
	volatile uint8_t x3267 = 11U;
	static volatile uint32_t t84 = 68192761U;

	t84 = (((x3265/x3266)>>x3267)|x3268);

	if (t84 != 15U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x3313 = 0U;
	int16_t x3316 = INT16_MAX;
	volatile int32_t t85 = 9517;

	t85 = (((x3313/x3314)>>x3315)|x3316);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3369 = INT16_MIN;
	int16_t x3370 = INT16_MIN;
	uint8_t x3371 = 16U;
	volatile uint32_t x3372 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x3369/x3370)>>x3371)|x3372);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3373 = 91U;
	uint32_t x3374 = UINT32_MAX;
	int8_t x3375 = 0;
	uint32_t x3376 = UINT32_MAX;

	t87 = (((x3373/x3374)>>x3375)|x3376);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3389 = 177LLU;
	int8_t x3391 = 55;
	int64_t x3392 = INT64_MAX;
	uint64_t t88 = 16790LLU;

	t88 = (((x3389/x3390)>>x3391)|x3392);

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3441 = INT16_MIN;
	int8_t x3443 = 0;
	uint64_t x3444 = 134044932606LLU;
	volatile uint64_t t89 = 26LLU;

	t89 = (((x3441/x3442)>>x3443)|x3444);

	if (t89 != 134044932607LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x3447 = 14U;
	uint8_t x3448 = UINT8_MAX;
	static uint64_t t90 = 13LLU;

	t90 = (((x3445/x3446)>>x3447)|x3448);

	if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x3465 = UINT64_MAX;
	int64_t x3466 = INT64_MIN;
	uint16_t x3467 = 1U;
	volatile uint16_t x3468 = UINT16_MAX;
	static uint64_t t91 = 741LLU;

	t91 = (((x3465/x3466)>>x3467)|x3468);

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3493 = 879;
	static int8_t x3495 = 4;
	int64_t x3496 = INT64_MIN;
	static int64_t t92 = INT64_MIN;

	t92 = (((x3493/x3494)>>x3495)|x3496);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x3497 = UINT64_MAX;
	int32_t x3498 = -11777358;
	volatile int16_t x3499 = 21;
	volatile uint16_t x3500 = 30U;
	static uint64_t t93 = 1594303488220LLU;

	t93 = (((x3497/x3498)>>x3499)|x3500);

	if (t93 != 30LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3517 = INT64_MIN;
	int8_t x3518 = INT8_MIN;
	uint16_t x3519 = 31U;
	volatile int64_t t94 = 809010LL;

	t94 = (((x3517/x3518)>>x3519)|x3520);

	if (t94 != 33554439LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3553 = 0U;
	uint16_t x3554 = 3654U;
	uint32_t t95 = UINT32_MAX;

	t95 = (((x3553/x3554)>>x3555)|x3556);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x3557 = 138461483289LLU;
	uint8_t x3558 = 4U;
	int64_t x3560 = INT64_MIN;
	uint64_t t96 = 101812LLU;

	t96 = (((x3557/x3558)>>x3559)|x3560);

	if (t96 != 9223372036855303996LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x3578 = 1601988600017893LLU;
	volatile uint8_t x3579 = 1U;
	volatile int32_t x3580 = INT32_MIN;
	uint64_t t97 = 485LLU;

	t97 = (((x3577/x3578)>>x3579)|x3580);

	if (t97 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3581 = 75560LLU;
	uint8_t x3582 = 89U;
	volatile int32_t x3584 = 3;
	volatile uint64_t t98 = 86655726091LLU;

	t98 = (((x3581/x3582)>>x3583)|x3584);

	if (t98 != 851LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3598 = INT32_MAX;
	int16_t x3599 = 1;
	int64_t t99 = -278104008LL;

	t99 = (((x3597/x3598)>>x3599)|x3600);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

