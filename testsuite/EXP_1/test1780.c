#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -5900LL;
static int32_t x36 = INT32_MIN;
static int16_t x93 = 1;
volatile int8_t x96 = -1;
uint32_t x117 = UINT32_MAX;
int8_t x118 = -1;
uint8_t x159 = 16U;
volatile int16_t x164 = 3;
static volatile int32_t t6 = -7132;
int64_t x326 = -1LL;
static volatile uint32_t x357 = 182U;
int16_t x358 = -74;
uint16_t x359 = 10U;
static int16_t x718 = INT16_MAX;
static int32_t x808 = 2;
uint16_t x889 = 9164U;
int8_t x936 = INT8_MIN;
int16_t x951 = 5;
int16_t x970 = INT16_MAX;
int32_t t23 = 222180227;
volatile int32_t x1129 = 13291930;
static int32_t x1130 = -960;
volatile int8_t x1146 = INT8_MAX;
static uint8_t x1148 = UINT8_MAX;
static uint16_t x1219 = 7U;
uint8_t x1318 = UINT8_MAX;
uint32_t x1332 = UINT32_MAX;
int8_t x1468 = INT8_MAX;
volatile int64_t t38 = -466524533499210527LL;
int16_t x1517 = INT16_MAX;
volatile int64_t t39 = 293060004876LL;
int32_t t43 = -4818574;
static uint8_t x1654 = 1U;
uint16_t x1655 = 59U;
int64_t t45 = 152686328621LL;
static volatile int16_t x1832 = INT16_MIN;
int32_t x1856 = INT32_MIN;
uint16_t x1929 = 129U;
uint64_t x1930 = 259571743846LLU;
uint8_t x2074 = 1U;
uint8_t x2075 = 4U;
volatile uint32_t t50 = 237229U;
int32_t x2138 = -242028305;
int32_t x2234 = 7;
uint32_t x2236 = UINT32_MAX;
static int8_t x2339 = 5;
static int64_t t53 = INT64_MAX;
uint32_t t54 = UINT32_MAX;
int16_t x2377 = 999;
uint16_t x2380 = UINT16_MAX;
int64_t x2393 = 234536796569138598LL;
static uint32_t x2396 = 2083U;
volatile int64_t t56 = 18LL;
uint8_t x2455 = 45U;
static int16_t x2573 = 91;
static int16_t x2662 = 3311;
uint32_t x2680 = 1706340656U;
static int64_t x2711 = 12LL;
volatile int32_t x2712 = 24;
static volatile int8_t x2742 = 60;
uint8_t x2747 = 9U;
volatile uint8_t x2748 = 16U;
static uint8_t x2785 = 13U;
volatile uint64_t x2790 = UINT64_MAX;
uint8_t x2815 = 5U;
int8_t x2830 = 0;
uint32_t x2833 = UINT32_MAX;
uint8_t x2836 = 105U;
uint64_t t71 = 2502869LLU;
volatile int8_t x2895 = 0;
int8_t x2906 = INT8_MIN;
int64_t x2926 = 998050997459843258LL;
int8_t x2941 = INT8_MAX;
static int64_t x2950 = INT64_MAX;
volatile int64_t t77 = 29926911LL;
uint8_t x2958 = 7U;
static int32_t t78 = -4505743;
uint8_t x2997 = UINT8_MAX;
uint64_t t79 = 1083658430262LLU;
uint8_t x3004 = 2U;
static uint32_t x3005 = 18222553U;
uint8_t x3007 = 8U;
int64_t x3039 = 61LL;
int64_t t82 = -1223766808218276629LL;
static uint16_t x3047 = 2U;
uint64_t x3106 = 31498426462179LLU;
int8_t x3121 = INT8_MIN;
static uint64_t x3190 = UINT64_MAX;
volatile int8_t x3192 = 27;
uint8_t x3215 = 1U;
volatile uint8_t x3240 = 31U;
int64_t x3250 = -114170087238733LL;
volatile int8_t x3261 = -1;
int16_t x3279 = 14;
uint64_t x3280 = 992592069272LLU;
uint64_t t96 = 7038451991488883LLU;
int32_t x3321 = 547;
uint16_t x3322 = 10U;
static int32_t x3382 = -17;
int16_t x3422 = INT16_MIN;
uint8_t x3423 = 2U;
int64_t t99 = -250479LL;


void f0(void) {
	int64_t x9 = 572490039LL;
	int32_t x10 = INT32_MIN;
	int8_t x11 = 27;
	static uint8_t x12 = 51U;

	t0 = (((x9&x10)>>x11)|x12);

	if (t0 != 51LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x33 = 15;
	int64_t x34 = -2041087027544860LL;
	int32_t x35 = 0;
	static volatile int64_t t1 = 3666726762125LL;

	t1 = (((x33&x34)>>x35)|x36);

	if (t1 != -2147483644LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x37 = 17U;
	uint64_t x38 = 83LLU;
	static int16_t x39 = 34;
	uint32_t x40 = UINT32_MAX;
	static volatile uint64_t t2 = 6906549LLU;

	t2 = (((x37&x38)>>x39)|x40);

	if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x94 = 15345LLU;
	int8_t x95 = 34;
	static uint64_t t3 = UINT64_MAX;

	t3 = (((x93&x94)>>x95)|x96);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x119 = 14;
	int32_t x120 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x117&x118)>>x119)|x120);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x157 = INT8_MAX;
	static uint64_t x158 = 10225676LLU;
	volatile int32_t x160 = INT32_MAX;
	uint64_t t5 = 1006203045998725LLU;

	t5 = (((x157&x158)>>x159)|x160);

	if (t5 != 2147483647LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x161 = 28;
	uint16_t x162 = 48U;
	int8_t x163 = 0;

	t6 = (((x161&x162)>>x163)|x164);

	if (t6 != 19) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x201 = 10U;
	uint16_t x202 = UINT16_MAX;
	static int64_t x203 = 1LL;
	uint64_t x204 = 2237646814659101LLU;
	uint64_t t7 = 511404329776LLU;

	t7 = (((x201&x202)>>x203)|x204);

	if (t7 != 2237646814659101LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x325 = INT16_MAX;
	int64_t x327 = 27LL;
	uint64_t x328 = 4311207556994LLU;
	static volatile uint64_t t8 = 1081104141007414LLU;

	t8 = (((x325&x326)>>x327)|x328);

	if (t8 != 4311207556994LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x360 = 1;
	uint32_t t9 = 3U;

	t9 = (((x357&x358)>>x359)|x360);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x405 = INT32_MAX;
	int64_t x406 = 36485166LL;
	int32_t x407 = 0;
	int32_t x408 = INT32_MAX;
	int64_t t10 = -1426LL;

	t10 = (((x405&x406)>>x407)|x408);

	if (t10 != 2147483647LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x445 = -1;
	volatile uint16_t x446 = UINT16_MAX;
	uint8_t x447 = 6U;
	static int32_t x448 = 83509;
	volatile int32_t t11 = -2;

	t11 = (((x445&x446)>>x447)|x448);

	if (t11 != 83967) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x449 = INT64_MAX;
	int16_t x450 = -3;
	uint32_t x451 = 17U;
	static int64_t x452 = INT64_MIN;
	static int64_t t12 = -86482259091116441LL;

	t12 = (((x449&x450)>>x451)|x452);

	if (t12 != -9223301668110598145LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x497 = INT64_MAX;
	static int16_t x498 = INT16_MIN;
	static int16_t x499 = 0;
	volatile int64_t x500 = INT64_MIN;
	volatile int64_t t13 = 213625166285514968LL;

	t13 = (((x497&x498)>>x499)|x500);

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x669 = 16;
	static uint32_t x670 = 11U;
	int16_t x671 = 23;
	static int32_t x672 = -1;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (((x669&x670)>>x671)|x672);

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x673 = -5;
	static int8_t x674 = 0;
	uint8_t x675 = 0U;
	int8_t x676 = 8;
	volatile int32_t t15 = -106;

	t15 = (((x673&x674)>>x675)|x676);

	if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x709 = 1U;
	int16_t x710 = INT16_MIN;
	volatile uint8_t x711 = 0U;
	int32_t x712 = INT32_MAX;
	static int32_t t16 = INT32_MAX;

	t16 = (((x709&x710)>>x711)|x712);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x717 = INT32_MIN;
	int16_t x719 = 1;
	volatile int64_t x720 = -1LL;
	int64_t t17 = -6003767814LL;

	t17 = (((x717&x718)>>x719)|x720);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x789 = INT8_MIN;
	static uint64_t x790 = 3735LLU;
	uint16_t x791 = 4U;
	uint8_t x792 = 50U;
	uint64_t t18 = 193954058116992LLU;

	t18 = (((x789&x790)>>x791)|x792);

	if (t18 != 250LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x805 = 53U;
	int16_t x806 = INT16_MAX;
	uint8_t x807 = 1U;
	int32_t t19 = -15938683;

	t19 = (((x805&x806)>>x807)|x808);

	if (t19 != 26) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x890 = UINT32_MAX;
	volatile int32_t x891 = 2;
	volatile uint64_t x892 = 123316LLU;
	uint64_t t20 = 4LLU;

	t20 = (((x889&x890)>>x891)|x892);

	if (t20 != 125431LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x933 = 9U;
	int8_t x934 = INT8_MIN;
	static uint8_t x935 = 1U;
	static volatile int32_t t21 = 7;

	t21 = (((x933&x934)>>x935)|x936);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x949 = UINT8_MAX;
	int8_t x950 = INT8_MIN;
	int8_t x952 = -1;
	static volatile int32_t t22 = 595039282;

	t22 = (((x949&x950)>>x951)|x952);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x969 = 0U;
	uint8_t x971 = 1U;
	int16_t x972 = 8550;

	t23 = (((x969&x970)>>x971)|x972);

	if (t23 != 8550) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x997 = INT8_MIN;
	volatile uint16_t x998 = 2012U;
	uint16_t x999 = 2U;
	int32_t x1000 = INT32_MAX;
	static volatile int32_t t24 = INT32_MAX;

	t24 = (((x997&x998)>>x999)|x1000);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1021 = 470541884U;
	static int16_t x1022 = -1;
	uint8_t x1023 = 1U;
	static int32_t x1024 = -1;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (((x1021&x1022)>>x1023)|x1024);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1131 = 10U;
	int64_t x1132 = INT64_MIN;
	volatile int64_t t26 = 394059523722744LL;

	t26 = (((x1129&x1130)>>x1131)|x1132);

	if (t26 != -9223372036854762828LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1133 = 0;
	int64_t x1134 = -39416691319489938LL;
	uint64_t x1135 = 9LLU;
	volatile uint64_t x1136 = 501883450904LLU;
	static uint64_t t27 = 20208LLU;

	t27 = (((x1133&x1134)>>x1135)|x1136);

	if (t27 != 501883450904LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1145 = 37U;
	uint16_t x1147 = 1U;
	int32_t t28 = -390;

	t28 = (((x1145&x1146)>>x1147)|x1148);

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1177 = -1;
	uint32_t x1178 = UINT32_MAX;
	uint8_t x1179 = 2U;
	int64_t x1180 = -1LL;
	volatile int64_t t29 = -13276LL;

	t29 = (((x1177&x1178)>>x1179)|x1180);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1217 = 1LLU;
	uint64_t x1218 = 66LLU;
	int32_t x1220 = INT32_MIN;
	volatile uint64_t t30 = 1816646490LLU;

	t30 = (((x1217&x1218)>>x1219)|x1220);

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1273 = INT16_MAX;
	int32_t x1274 = -1;
	uint32_t x1275 = 0U;
	volatile int64_t x1276 = INT64_MIN;
	volatile int64_t t31 = -200181752LL;

	t31 = (((x1273&x1274)>>x1275)|x1276);

	if (t31 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1297 = 642080U;
	volatile int8_t x1298 = INT8_MIN;
	volatile uint8_t x1299 = 0U;
	int64_t x1300 = 1LL;
	volatile int64_t t32 = -1125LL;

	t32 = (((x1297&x1298)>>x1299)|x1300);

	if (t32 != 642049LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1317 = UINT16_MAX;
	uint32_t x1319 = 25U;
	volatile int16_t x1320 = INT16_MIN;
	volatile int32_t t33 = 21183849;

	t33 = (((x1317&x1318)>>x1319)|x1320);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x1329 = INT16_MAX;
	int8_t x1330 = INT8_MIN;
	uint16_t x1331 = 1U;
	uint32_t t34 = UINT32_MAX;

	t34 = (((x1329&x1330)>>x1331)|x1332);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1357 = UINT8_MAX;
	uint32_t x1358 = 682725U;
	int32_t x1359 = 7;
	int32_t x1360 = -2;
	static uint32_t t35 = UINT32_MAX;

	t35 = (((x1357&x1358)>>x1359)|x1360);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1389 = UINT64_MAX;
	static int8_t x1390 = 0;
	int8_t x1391 = 14;
	volatile int64_t x1392 = INT64_MAX;
	volatile uint64_t t36 = 2109066153831LLU;

	t36 = (((x1389&x1390)>>x1391)|x1392);

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1465 = INT8_MIN;
	int8_t x1466 = 1;
	volatile uint8_t x1467 = 30U;
	int32_t t37 = 241651169;

	t37 = (((x1465&x1466)>>x1467)|x1468);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1481 = INT64_MAX;
	uint8_t x1482 = 6U;
	uint8_t x1483 = 0U;
	volatile int8_t x1484 = -2;

	t38 = (((x1481&x1482)>>x1483)|x1484);

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1518 = INT64_MAX;
	volatile int8_t x1519 = 16;
	int64_t x1520 = -1LL;

	t39 = (((x1517&x1518)>>x1519)|x1520);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x1521 = 497290U;
	int64_t x1522 = INT64_MAX;
	int16_t x1523 = 0;
	uint64_t x1524 = UINT64_MAX;
	uint64_t t40 = UINT64_MAX;

	t40 = (((x1521&x1522)>>x1523)|x1524);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1593 = UINT32_MAX;
	int64_t x1594 = INT64_MIN;
	volatile uint8_t x1595 = 2U;
	uint8_t x1596 = 11U;
	volatile int64_t t41 = 1200674817911018LL;

	t41 = (((x1593&x1594)>>x1595)|x1596);

	if (t41 != 11LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1597 = 4;
	static uint32_t x1598 = UINT32_MAX;
	int8_t x1599 = 31;
	uint8_t x1600 = UINT8_MAX;
	volatile uint32_t t42 = 44986U;

	t42 = (((x1597&x1598)>>x1599)|x1600);

	if (t42 != 255U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1605 = 0U;
	volatile int32_t x1606 = INT32_MIN;
	volatile int8_t x1607 = 7;
	int16_t x1608 = 103;

	t43 = (((x1605&x1606)>>x1607)|x1608);

	if (t43 != 103) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x1653 = 20383876097664LLU;
	volatile int16_t x1656 = -1;
	uint64_t t44 = UINT64_MAX;

	t44 = (((x1653&x1654)>>x1655)|x1656);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1825 = INT16_MIN;
	int64_t x1826 = 16886148238405004LL;
	int32_t x1827 = 11;
	volatile uint8_t x1828 = 0U;

	t45 = (((x1825&x1826)>>x1827)|x1828);

	if (t45 != 8245189569520LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1829 = UINT32_MAX;
	uint16_t x1830 = 28868U;
	int16_t x1831 = 2;
	uint32_t t46 = 14610098U;

	t46 = (((x1829&x1830)>>x1831)|x1832);

	if (t46 != 4294941745U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1853 = INT32_MAX;
	uint64_t x1854 = 370999LLU;
	volatile int16_t x1855 = 7;
	uint64_t t47 = 3LLU;

	t47 = (((x1853&x1854)>>x1855)|x1856);

	if (t47 != 18446744071562070866LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1931 = 1U;
	static int8_t x1932 = INT8_MIN;
	volatile uint64_t t48 = 43688LLU;

	t48 = (((x1929&x1930)>>x1931)|x1932);

	if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2069 = 10U;
	volatile int8_t x2070 = 0;
	int8_t x2071 = 0;
	uint8_t x2072 = UINT8_MAX;
	static volatile int32_t t49 = -1;

	t49 = (((x2069&x2070)>>x2071)|x2072);

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2073 = 11U;
	volatile int16_t x2076 = INT16_MIN;

	t50 = (((x2073&x2074)>>x2075)|x2076);

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2137 = 1U;
	volatile int8_t x2139 = 1;
	int64_t x2140 = -1LL;
	static int64_t t51 = 127800316896166LL;

	t51 = (((x2137&x2138)>>x2139)|x2140);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x2233 = 0;
	int8_t x2235 = 29;
	uint32_t t52 = UINT32_MAX;

	t52 = (((x2233&x2234)>>x2235)|x2236);

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2337 = 4187760;
	int8_t x2338 = -41;
	int64_t x2340 = INT64_MAX;

	t53 = (((x2337&x2338)>>x2339)|x2340);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2361 = 1U;
	int16_t x2362 = INT16_MIN;
	int16_t x2363 = 2;
	static int32_t x2364 = -1;

	t54 = (((x2361&x2362)>>x2363)|x2364);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2378 = 11U;
	int8_t x2379 = 1;
	int32_t t55 = 1;

	t55 = (((x2377&x2378)>>x2379)|x2380);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2394 = -51;
	static uint8_t x2395 = 8U;

	t56 = (((x2393&x2394)>>x2395)|x2396);

	if (t56 != 916159361600247LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2453 = 225LL;
	int64_t x2454 = -3890592766344720LL;
	volatile int8_t x2456 = INT8_MIN;
	int64_t t57 = 237477LL;

	t57 = (((x2453&x2454)>>x2455)|x2456);

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x2561 = 30U;
	int64_t x2562 = INT64_MIN;
	int8_t x2563 = 11;
	uint64_t x2564 = UINT64_MAX;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = (((x2561&x2562)>>x2563)|x2564);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2574 = INT16_MAX;
	int8_t x2575 = 3;
	static volatile int64_t x2576 = 1773162985302090436LL;
	int64_t t59 = 507723586767477625LL;

	t59 = (((x2573&x2574)>>x2575)|x2576);

	if (t59 != 1773162985302090447LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x2625 = UINT32_MAX;
	static int8_t x2626 = 2;
	int8_t x2627 = 0;
	static uint32_t x2628 = 4638U;
	volatile uint32_t t60 = 25447590U;

	t60 = (((x2625&x2626)>>x2627)|x2628);

	if (t60 != 4638U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2661 = INT32_MAX;
	static int8_t x2663 = 4;
	int16_t x2664 = 455;
	static volatile int32_t t61 = 773189512;

	t61 = (((x2661&x2662)>>x2663)|x2664);

	if (t61 != 463) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2677 = 287213163223563LLU;
	static int16_t x2678 = -1;
	uint16_t x2679 = 14U;
	static uint64_t t62 = 2LLU;

	t62 = (((x2677&x2678)>>x2679)|x2680);

	if (t62 != 19158842230LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x2709 = INT64_MIN;
	int32_t x2710 = INT32_MAX;
	static int64_t t63 = 31LL;

	t63 = (((x2709&x2710)>>x2711)|x2712);

	if (t63 != 24LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x2733 = INT64_MAX;
	uint32_t x2734 = 0U;
	uint8_t x2735 = 2U;
	volatile int64_t x2736 = -3531894240092573575LL;
	int64_t t64 = -31833LL;

	t64 = (((x2733&x2734)>>x2735)|x2736);

	if (t64 != -3531894240092573575LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2741 = -1;
	uint8_t x2743 = 9U;
	static int64_t x2744 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

	t65 = (((x2741&x2742)>>x2743)|x2744);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x2745 = INT16_MIN;
	uint32_t x2746 = 0U;
	uint32_t t66 = 24374153U;

	t66 = (((x2745&x2746)>>x2747)|x2748);

	if (t66 != 16U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2786 = -2981481;
	static uint8_t x2787 = 8U;
	int32_t x2788 = INT32_MIN;
	volatile int32_t t67 = INT32_MIN;

	t67 = (((x2785&x2786)>>x2787)|x2788);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2789 = INT64_MAX;
	int8_t x2791 = 0;
	uint8_t x2792 = 26U;
	uint64_t t68 = 106174434129LLU;

	t68 = (((x2789&x2790)>>x2791)|x2792);

	if (t68 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2813 = INT32_MIN;
	int8_t x2814 = 1;
	int8_t x2816 = INT8_MIN;
	volatile int32_t t69 = 24;

	t69 = (((x2813&x2814)>>x2815)|x2816);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2829 = UINT16_MAX;
	int8_t x2831 = 8;
	volatile int16_t x2832 = -1;
	volatile int32_t t70 = -463054757;

	t70 = (((x2829&x2830)>>x2831)|x2832);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x2834 = 1156LLU;
	uint64_t x2835 = 25LLU;

	t71 = (((x2833&x2834)>>x2835)|x2836);

	if (t71 != 105LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2885 = 535663;
	volatile int16_t x2886 = -9982;
	static volatile int8_t x2887 = 2;
	static volatile int64_t x2888 = -1LL;
	volatile int64_t t72 = 543LL;

	t72 = (((x2885&x2886)>>x2887)|x2888);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x2893 = INT16_MIN;
	int16_t x2894 = 800;
	int32_t x2896 = INT32_MAX;
	int32_t t73 = INT32_MAX;

	t73 = (((x2893&x2894)>>x2895)|x2896);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2905 = UINT64_MAX;
	uint8_t x2907 = 17U;
	int64_t x2908 = INT64_MIN;
	uint64_t t74 = 7291873650278376LLU;

	t74 = (((x2905&x2906)>>x2907)|x2908);

	if (t74 != 9223512774343131135LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x2925 = 1233031149U;
	int8_t x2927 = 9;
	volatile int64_t x2928 = INT64_MIN;
	int64_t t75 = 90LL;

	t75 = (((x2925&x2926)>>x2927)|x2928);

	if (t75 != -9223372036854732796LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2942 = INT64_MAX;
	volatile uint16_t x2943 = 1U;
	uint8_t x2944 = 7U;
	int64_t t76 = -1LL;

	t76 = (((x2941&x2942)>>x2943)|x2944);

	if (t76 != 63LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2949 = UINT8_MAX;
	volatile uint16_t x2951 = 13U;
	int8_t x2952 = INT8_MIN;

	t77 = (((x2949&x2950)>>x2951)|x2952);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2957 = -1;
	int8_t x2959 = 1;
	uint16_t x2960 = 0U;

	t78 = (((x2957&x2958)>>x2959)|x2960);

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2998 = -1;
	volatile int8_t x2999 = 3;
	uint64_t x3000 = 629652984023640014LLU;

	t79 = (((x2997&x2998)>>x2999)|x3000);

	if (t79 != 629652984023640031LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3001 = INT16_MIN;
	static uint8_t x3002 = UINT8_MAX;
	static uint32_t x3003 = 3U;
	volatile int32_t t80 = -4886;

	t80 = (((x3001&x3002)>>x3003)|x3004);

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3006 = UINT64_MAX;
	int64_t x3008 = 289609871771990572LL;
	static volatile uint64_t t81 = 2532950909818LLU;

	t81 = (((x3005&x3006)>>x3007)|x3008);

	if (t81 != 289609871772057133LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3037 = UINT8_MAX;
	int64_t x3038 = INT64_MIN;
	uint8_t x3040 = 35U;

	t82 = (((x3037&x3038)>>x3039)|x3040);

	if (t82 != 35LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3045 = 34U;
	static uint32_t x3046 = 34801626U;
	uint8_t x3048 = UINT8_MAX;
	static volatile uint32_t t83 = 2056149U;

	t83 = (((x3045&x3046)>>x3047)|x3048);

	if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3057 = INT8_MAX;
	volatile uint64_t x3058 = 126931218721564LLU;
	volatile int32_t x3059 = 0;
	int64_t x3060 = -3497LL;
	volatile uint64_t t84 = 15959LLU;

	t84 = (((x3057&x3058)>>x3059)|x3060);

	if (t84 != 18446744073709548127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x3081 = UINT32_MAX;
	int8_t x3082 = -14;
	uint8_t x3083 = 0U;
	uint32_t x3084 = UINT32_MAX;
	uint32_t t85 = UINT32_MAX;

	t85 = (((x3081&x3082)>>x3083)|x3084);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3105 = -1;
	uint32_t x3107 = 0U;
	int64_t x3108 = -174072241LL;
	volatile uint64_t t86 = 266332LLU;

	t86 = (((x3105&x3106)>>x3107)|x3108);

	if (t86 != 18446744073669705711LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3122 = 7024486654957LLU;
	int16_t x3123 = 1;
	uint64_t x3124 = UINT64_MAX;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (((x3121&x3122)>>x3123)|x3124);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3149 = 1;
	int16_t x3150 = INT16_MIN;
	int16_t x3151 = 0;
	uint32_t x3152 = 20U;
	volatile uint32_t t88 = 53U;

	t88 = (((x3149&x3150)>>x3151)|x3152);

	if (t88 != 20U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x3153 = INT64_MIN;
	uint32_t x3154 = UINT32_MAX;
	uint32_t x3155 = 26U;
	int64_t x3156 = INT64_MIN;
	static int64_t t89 = INT64_MIN;

	t89 = (((x3153&x3154)>>x3155)|x3156);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x3189 = 0;
	uint16_t x3191 = 60U;
	uint64_t t90 = 35311528764868371LLU;

	t90 = (((x3189&x3190)>>x3191)|x3192);

	if (t90 != 27LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3213 = -1LL;
	uint64_t x3214 = 1636694312661839LLU;
	static uint64_t x3216 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (((x3213&x3214)>>x3215)|x3216);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x3225 = UINT64_MAX;
	static volatile uint16_t x3226 = UINT16_MAX;
	uint8_t x3227 = 13U;
	uint16_t x3228 = 41U;
	volatile uint64_t t92 = 76281313LLU;

	t92 = (((x3225&x3226)>>x3227)|x3228);

	if (t92 != 47LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x3237 = 121U;
	int64_t x3238 = INT64_MAX;
	uint8_t x3239 = 26U;
	volatile int64_t t93 = -1LL;

	t93 = (((x3237&x3238)>>x3239)|x3240);

	if (t93 != 31LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3249 = 944585U;
	int8_t x3251 = 2;
	int16_t x3252 = INT16_MIN;
	static int64_t t94 = 6LL;

	t94 = (((x3249&x3250)>>x3251)|x3252);

	if (t94 != -32672LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x3262 = 12363;
	int32_t x3263 = 2;
	int8_t x3264 = INT8_MIN;
	volatile int32_t t95 = 492;

	t95 = (((x3261&x3262)>>x3263)|x3264);

	if (t95 != -110) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3277 = INT32_MAX;
	static int8_t x3278 = -1;

	t96 = (((x3277&x3278)>>x3279)|x3280);

	if (t96 != 992592134143LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3323 = 2LLU;
	int64_t x3324 = 2126054618509LL;
	int64_t t97 = 47955LL;

	t97 = (((x3321&x3322)>>x3323)|x3324);

	if (t97 != 2126054618509LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3381 = 2004629170323958618LLU;
	uint32_t x3383 = 0U;
	volatile uint64_t x3384 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = (((x3381&x3382)>>x3383)|x3384);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x3421 = 36U;
	int64_t x3424 = 3662659843LL;

	t99 = (((x3421&x3422)>>x3423)|x3424);

	if (t99 != 3662659843LL) { NG(); } else { ; }
	
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

