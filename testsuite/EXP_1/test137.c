#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x70 = 39U;
static volatile int32_t t1 = -2271;
uint8_t x142 = UINT8_MAX;
uint32_t t6 = 323254U;
volatile uint16_t x359 = 3U;
static int32_t t7 = -13391;
static volatile uint64_t x510 = UINT64_MAX;
int32_t x529 = -59035;
int8_t x530 = INT8_MAX;
uint64_t x557 = UINT64_MAX;
volatile uint8_t x670 = 23U;
volatile int32_t t13 = 105693477;
int8_t x698 = 3;
volatile int32_t t15 = -1029642;
static int64_t t17 = 540397405918212LL;
static int64_t x905 = -309LL;
int32_t x911 = 994953;
volatile int32_t t20 = -171;
uint32_t x1262 = 122588494U;
int16_t x1338 = -4947;
volatile int32_t x1346 = 13131;
static int32_t t28 = -755;
uint32_t x1358 = 202274U;
uint64_t t29 = 4LLU;
int64_t t30 = -14135665058161004LL;
volatile uint16_t x1416 = 8U;
volatile int8_t x1602 = INT8_MIN;
static uint64_t x1603 = 4267459830LLU;
volatile uint16_t x1632 = 4U;
volatile uint8_t x1684 = 1U;
volatile uint64_t t37 = 70876952461867626LLU;
int8_t x1709 = -1;
int16_t x1712 = 22;
uint64_t x1749 = 7LLU;
static volatile uint8_t x1752 = 14U;
static volatile uint64_t t39 = 383927376223LLU;
int8_t x1774 = -3;
volatile uint8_t x1776 = 9U;
static volatile uint16_t x1990 = 16123U;
uint64_t x2181 = UINT64_MAX;
uint32_t x2183 = UINT32_MAX;
volatile int64_t t45 = 5LL;
volatile int16_t x2270 = INT16_MIN;
volatile int16_t x2332 = 2;
uint8_t x2390 = 8U;
int32_t x2482 = 316;
volatile int32_t t49 = 1016308179;
uint16_t x2566 = UINT16_MAX;
int64_t x2567 = -221LL;
static int64_t x2606 = -56850LL;
int64_t t53 = 3463655LL;
uint8_t x2665 = 32U;
static volatile uint8_t x2800 = 8U;
int64_t t56 = 28318918LL;
volatile int16_t x2844 = 4;
volatile int8_t x2968 = 1;
int32_t x3066 = 364680323;
int16_t x3093 = 9;
int16_t x3094 = -41;
static volatile int8_t x3096 = 1;
uint64_t t65 = 216431628656796LLU;
volatile uint8_t x3106 = UINT8_MAX;
static int32_t x3195 = -1;
int32_t x3229 = 797;
int64_t x3238 = -1774144569LL;
volatile int32_t t72 = -31;
volatile int16_t x3375 = INT16_MIN;
uint8_t x3488 = 8U;
static int32_t x3601 = INT32_MIN;
uint64_t t79 = 7374LLU;
uint64_t x3638 = UINT64_MAX;
uint16_t x3640 = 4U;
uint32_t x3645 = 74912U;
static uint8_t x3784 = 13U;
static uint16_t x3832 = 26U;
static volatile int64_t t85 = -1166LL;
static volatile int32_t t86 = 2292770;
volatile int32_t x4063 = INT32_MIN;
int32_t x4095 = -8;
uint8_t x4148 = 0U;
static int32_t t92 = 205632;
int64_t x4185 = -2910729751423989393LL;
uint8_t x4258 = UINT8_MAX;
int8_t x4264 = 4;
static int8_t x4274 = 2;
int32_t t97 = 123540265;
int8_t x4405 = -1;
static int8_t x4408 = 1;
static volatile int64_t x4445 = -1LL;
uint16_t x4446 = 10U;


void f0(void) {
	int64_t x21 = -2073978234600441045LL;
	int32_t x22 = 37711;
	int32_t x23 = INT32_MAX;
	volatile uint8_t x24 = 3U;
	volatile int64_t t0 = -165LL;

	t0 = (((x21+x22)&x23)>>x24);

	if (t0 != 114821583LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x69 = INT8_MAX;
	int32_t x71 = INT32_MIN;
	int16_t x72 = 2;

	t1 = (((x69+x70)&x71)>>x72);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x141 = -1369;
	static uint64_t x143 = 856405LLU;
	int32_t x144 = 1;
	static uint64_t t2 = 1766225LLU;

	t2 = (((x141+x142)&x143)>>x144);

	if (t2 != 428162LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x157 = 15115872836867LL;
	uint32_t x158 = 2615407U;
	static int32_t x159 = INT32_MIN;
	uint8_t x160 = 0U;
	volatile int64_t t3 = -33406859029546264LL;

	t3 = (((x157+x158)&x159)>>x160);

	if (t3 != 15113989914624LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x221 = -1;
	uint32_t x222 = 183U;
	int64_t x223 = -1LL;
	int8_t x224 = 12;
	static int64_t t4 = 8260299258086LL;

	t4 = (((x221+x222)&x223)>>x224);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x261 = 11U;
	static uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MAX;
	static volatile uint8_t x264 = 1U;
	volatile int32_t t5 = 1037471633;

	t5 = (((x261+x262)&x263)>>x264);

	if (t5 != 32773) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x269 = 0;
	static int8_t x270 = 0;
	uint32_t x271 = 5U;
	volatile uint8_t x272 = 0U;

	t6 = (((x269+x270)&x271)>>x272);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x357 = 19;
	int8_t x358 = 62;
	int8_t x360 = 0;

	t7 = (((x357+x358)&x359)>>x360);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x365 = -162136369;
	static int8_t x366 = INT8_MIN;
	uint64_t x367 = 106790082840481662LLU;
	int8_t x368 = 29;
	uint64_t t8 = 29574624906223658LLU;

	t8 = (((x365+x366)&x367)>>x368);

	if (t8 != 198912029LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x509 = -3916390;
	int32_t x511 = -1;
	uint8_t x512 = 1U;
	volatile uint64_t t9 = 416793398562193LLU;

	t9 = (((x509+x510)&x511)>>x512);

	if (t9 != 9223372036852817612LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x531 = 10LLU;
	static int32_t x532 = 28;
	static volatile uint64_t t10 = 58102435578173204LLU;

	t10 = (((x529+x530)&x531)>>x532);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x558 = 27U;
	int16_t x559 = INT16_MAX;
	int64_t x560 = 5LL;
	static volatile uint64_t t11 = 2845149078493744701LLU;

	t11 = (((x557+x558)&x559)>>x560);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x657 = -52LL;
	static volatile int16_t x658 = 0;
	int32_t x659 = INT32_MAX;
	int32_t x660 = 3;
	volatile int64_t t12 = 2778722905251142LL;

	t12 = (((x657+x658)&x659)>>x660);

	if (t12 != 268435449LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x669 = INT8_MAX;
	static int16_t x671 = 7936;
	volatile int16_t x672 = 14;

	t13 = (((x669+x670)&x671)>>x672);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x697 = 3940682561473LL;
	int32_t x699 = INT32_MIN;
	uint16_t x700 = 0U;
	int64_t t14 = 12608703813404LL;

	t14 = (((x697+x698)&x699)>>x700);

	if (t14 != 3940632494080LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x713 = 1U;
	static int32_t x714 = -193059;
	int32_t x715 = 284583452;
	uint32_t x716 = 20U;

	t15 = (((x713+x714)&x715)>>x716);

	if (t15 != 271) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x873 = -82899939;
	int32_t x874 = -27663;
	int8_t x875 = INT8_MAX;
	static uint16_t x876 = 15U;
	static volatile int32_t t16 = 24;

	t16 = (((x873+x874)&x875)>>x876);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x881 = 30U;
	volatile int64_t x882 = -1LL;
	volatile int16_t x883 = -3;
	static int32_t x884 = 18;

	t17 = (((x881+x882)&x883)>>x884);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x906 = UINT8_MAX;
	int32_t x907 = 30003;
	int16_t x908 = 0;
	volatile int64_t t18 = 159894740615552LL;

	t18 = (((x905+x906)&x907)>>x908);

	if (t18 != 29954LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x909 = UINT32_MAX;
	volatile uint8_t x910 = 14U;
	static int16_t x912 = 2;
	volatile uint32_t t19 = 39373U;

	t19 = (((x909+x910)&x911)>>x912);

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x993 = INT16_MAX;
	static int8_t x994 = 1;
	int32_t x995 = INT32_MIN;
	uint8_t x996 = 0U;

	t20 = (((x993+x994)&x995)>>x996);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1061 = 234198918U;
	volatile int16_t x1062 = -1;
	uint8_t x1063 = UINT8_MAX;
	uint8_t x1064 = 1U;
	uint32_t t21 = 268241214U;

	t21 = (((x1061+x1062)&x1063)>>x1064);

	if (t21 != 66U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1073 = INT32_MAX;
	int64_t x1074 = -29756LL;
	int16_t x1075 = -1;
	static uint8_t x1076 = 20U;
	int64_t t22 = 8154556688LL;

	t22 = (((x1073+x1074)&x1075)>>x1076);

	if (t22 != 2047LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1181 = INT8_MIN;
	uint8_t x1182 = 0U;
	volatile uint32_t x1183 = UINT32_MAX;
	static int16_t x1184 = 25;
	static uint32_t t23 = 48241199U;

	t23 = (((x1181+x1182)&x1183)>>x1184);

	if (t23 != 127U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1257 = -1;
	int16_t x1258 = INT16_MIN;
	int16_t x1259 = 35;
	uint8_t x1260 = 7U;
	int32_t t24 = 150;

	t24 = (((x1257+x1258)&x1259)>>x1260);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1261 = INT8_MIN;
	uint64_t x1263 = 7595499346LLU;
	int8_t x1264 = 1;
	uint64_t t25 = 15LLU;

	t25 = (((x1261+x1262)&x1263)>>x1264);

	if (t25 != 33883681LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1281 = -1;
	uint32_t x1282 = UINT32_MAX;
	int64_t x1283 = -33228219968LL;
	static volatile int8_t x1284 = 0;
	volatile int64_t t26 = -18LL;

	t26 = (((x1281+x1282)&x1283)>>x1284);

	if (t26 != 1131518400LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1337 = -633943456LL;
	volatile int16_t x1339 = INT16_MAX;
	int16_t x1340 = 0;
	volatile int64_t t27 = 273989427384021LL;

	t27 = (((x1337+x1338)&x1339)>>x1340);

	if (t27 != 14093LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1345 = INT32_MIN;
	int8_t x1347 = 0;
	volatile int8_t x1348 = 0;

	t28 = (((x1345+x1346)&x1347)>>x1348);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1357 = 65118LLU;
	static volatile int16_t x1359 = INT16_MIN;
	int64_t x1360 = 3LL;

	t29 = (((x1357+x1358)&x1359)>>x1360);

	if (t29 != 32768LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1409 = 7723;
	uint8_t x1410 = UINT8_MAX;
	static int64_t x1411 = INT64_MIN;
	uint8_t x1412 = 1U;

	t30 = (((x1409+x1410)&x1411)>>x1412);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1413 = 0U;
	static volatile int8_t x1414 = INT8_MAX;
	static volatile uint8_t x1415 = 0U;
	int32_t t31 = 331070397;

	t31 = (((x1413+x1414)&x1415)>>x1416);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x1429 = 2928831LLU;
	static uint8_t x1430 = 4U;
	volatile uint32_t x1431 = 517097995U;
	static int8_t x1432 = 35;
	volatile uint64_t t32 = 8904LLU;

	t32 = (((x1429+x1430)&x1431)>>x1432);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1441 = -1;
	static volatile uint8_t x1442 = UINT8_MAX;
	int16_t x1443 = 1;
	int8_t x1444 = 2;
	volatile int32_t t33 = 100463740;

	t33 = (((x1441+x1442)&x1443)>>x1444);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1601 = 193LL;
	uint16_t x1604 = 5U;
	uint64_t t34 = 264472857592LLU;

	t34 = (((x1601+x1602)&x1603)>>x1604);

	if (t34 != 2LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1629 = INT32_MIN;
	int64_t x1630 = INT64_MAX;
	static int8_t x1631 = INT8_MIN;
	static volatile int64_t t35 = 13917681490958LL;

	t35 = (((x1629+x1630)&x1631)>>x1632);

	if (t35 != 576460752169205752LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1669 = INT32_MAX;
	int16_t x1670 = -1;
	int32_t x1671 = -1;
	uint64_t x1672 = 1LLU;
	static int32_t t36 = 37;

	t36 = (((x1669+x1670)&x1671)>>x1672);

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1681 = INT16_MIN;
	static uint8_t x1682 = 2U;
	uint64_t x1683 = 388649517902744LLU;

	t37 = (((x1681+x1682)&x1683)>>x1684);

	if (t37 != 194324758937600LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1710 = UINT16_MAX;
	static int32_t x1711 = INT32_MIN;
	int32_t t38 = -190;

	t38 = (((x1709+x1710)&x1711)>>x1712);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1750 = INT16_MIN;
	uint64_t x1751 = UINT64_MAX;

	t39 = (((x1749+x1750)&x1751)>>x1752);

	if (t39 != 1125899906842622LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1773 = -1550LL;
	static int16_t x1775 = INT16_MAX;
	volatile int64_t t40 = -100495LL;

	t40 = (((x1773+x1774)&x1775)>>x1776);

	if (t40 != 60LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1877 = INT8_MIN;
	int8_t x1878 = INT8_MIN;
	int32_t x1879 = 8825715;
	uint8_t x1880 = 6U;
	volatile int32_t t41 = 118716;

	t41 = (((x1877+x1878)&x1879)>>x1880);

	if (t41 != 137900) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1989 = -1;
	volatile int8_t x1991 = INT8_MIN;
	uint16_t x1992 = 1U;
	volatile int32_t t42 = 5;

	t42 = (((x1989+x1990)&x1991)>>x1992);

	if (t42 != 8000) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x2101 = INT64_MIN;
	volatile uint32_t x2102 = 35U;
	int16_t x2103 = 1983;
	uint8_t x2104 = 19U;
	int64_t t43 = 1270LL;

	t43 = (((x2101+x2102)&x2103)>>x2104);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2182 = INT32_MAX;
	uint8_t x2184 = 44U;
	uint64_t t44 = 1374769LLU;

	t44 = (((x2181+x2182)&x2183)>>x2184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2189 = 5825U;
	static int64_t x2190 = 122331415787684LL;
	uint32_t x2191 = 2281U;
	static int8_t x2192 = 0;

	t45 = (((x2189+x2190)&x2191)>>x2192);

	if (t45 != 2145LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2269 = -1;
	static volatile int16_t x2271 = 697;
	static int16_t x2272 = 25;
	volatile int32_t t46 = 1;

	t46 = (((x2269+x2270)&x2271)>>x2272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2329 = -1;
	static uint64_t x2330 = UINT64_MAX;
	uint16_t x2331 = 56U;
	uint64_t t47 = 4384468LLU;

	t47 = (((x2329+x2330)&x2331)>>x2332);

	if (t47 != 14LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2389 = 184U;
	int8_t x2391 = 0;
	int8_t x2392 = 4;
	uint32_t t48 = 1821882552U;

	t48 = (((x2389+x2390)&x2391)>>x2392);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2481 = INT32_MIN;
	uint16_t x2483 = 1180U;
	volatile int64_t x2484 = 8LL;

	t49 = (((x2481+x2482)&x2483)>>x2484);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2557 = -1;
	uint16_t x2558 = 0U;
	volatile uint64_t x2559 = 715017508LLU;
	int8_t x2560 = 39;
	volatile uint64_t t50 = 2831LLU;

	t50 = (((x2557+x2558)&x2559)>>x2560);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2565 = INT16_MIN;
	uint8_t x2568 = 1U;
	static volatile int64_t t51 = -834790684954418789LL;

	t51 = (((x2565+x2566)&x2567)>>x2568);

	if (t51 != 16273LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2605 = UINT16_MAX;
	int8_t x2607 = -33;
	volatile int8_t x2608 = 42;
	volatile int64_t t52 = -113068535064LL;

	t52 = (((x2605+x2606)&x2607)>>x2608);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2625 = 0;
	volatile int64_t x2626 = INT64_MIN;
	static int64_t x2627 = INT64_MAX;
	static volatile uint8_t x2628 = 11U;

	t53 = (((x2625+x2626)&x2627)>>x2628);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2666 = 0;
	static int16_t x2667 = INT16_MIN;
	uint64_t x2668 = 7LLU;
	volatile int32_t t54 = -5882;

	t54 = (((x2665+x2666)&x2667)>>x2668);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2761 = 10461503871LLU;
	uint64_t x2762 = 4109917LLU;
	static int64_t x2763 = INT64_MIN;
	volatile int8_t x2764 = 1;
	uint64_t t55 = 31593LLU;

	t55 = (((x2761+x2762)&x2763)>>x2764);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x2797 = UINT8_MAX;
	int64_t x2798 = 561783LL;
	volatile int8_t x2799 = 48;

	t56 = (((x2797+x2798)&x2799)>>x2800);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2841 = -1;
	uint8_t x2842 = 50U;
	uint32_t x2843 = UINT32_MAX;
	uint32_t t57 = 95U;

	t57 = (((x2841+x2842)&x2843)>>x2844);

	if (t57 != 3U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2965 = INT16_MAX;
	uint8_t x2966 = 27U;
	int64_t x2967 = INT64_MIN;
	int64_t t58 = -1LL;

	t58 = (((x2965+x2966)&x2967)>>x2968);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2981 = -793379;
	uint16_t x2982 = UINT16_MAX;
	volatile uint8_t x2983 = 11U;
	static uint8_t x2984 = 0U;
	volatile int32_t t59 = 52;

	t59 = (((x2981+x2982)&x2983)>>x2984);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2997 = INT8_MIN;
	volatile uint32_t x2998 = 807U;
	volatile int16_t x2999 = INT16_MAX;
	uint8_t x3000 = 12U;
	volatile uint32_t t60 = 24U;

	t60 = (((x2997+x2998)&x2999)>>x3000);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3033 = INT8_MAX;
	uint8_t x3034 = UINT8_MAX;
	uint8_t x3035 = 3U;
	int8_t x3036 = 13;
	volatile int32_t t61 = -73403;

	t61 = (((x3033+x3034)&x3035)>>x3036);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3041 = 6054113027592976LLU;
	int16_t x3042 = 24;
	volatile int16_t x3043 = INT16_MIN;
	volatile uint8_t x3044 = 4U;
	static volatile uint64_t t62 = 1052343165LLU;

	t62 = (((x3041+x3042)&x3043)>>x3044);

	if (t62 != 378382064224256LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3065 = 15U;
	int32_t x3067 = INT32_MIN;
	static int8_t x3068 = 1;
	volatile int32_t t63 = -1696;

	t63 = (((x3065+x3066)&x3067)>>x3068);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3085 = INT32_MIN;
	uint32_t x3086 = 971682559U;
	static volatile int16_t x3087 = INT16_MIN;
	volatile int32_t x3088 = 1;
	volatile uint32_t t64 = 3286U;

	t64 = (((x3085+x3086)&x3087)>>x3088);

	if (t64 != 1559576576U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3095 = 981724LLU;

	t65 = (((x3093+x3094)&x3095)>>x3096);

	if (t65 != 490848LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3105 = -1;
	int16_t x3107 = INT16_MIN;
	int8_t x3108 = 1;
	static volatile int32_t t66 = -1037606323;

	t66 = (((x3105+x3106)&x3107)>>x3108);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3161 = 4625U;
	static int64_t x3162 = -2274162643996147LL;
	int16_t x3163 = INT16_MAX;
	volatile uint8_t x3164 = 51U;
	int64_t t67 = 6830591LL;

	t67 = (((x3161+x3162)&x3163)>>x3164);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3193 = 178434170U;
	volatile int8_t x3194 = 1;
	uint8_t x3196 = 7U;
	uint32_t t68 = 1U;

	t68 = (((x3193+x3194)&x3195)>>x3196);

	if (t68 != 1394016U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x3221 = 0U;
	int32_t x3222 = INT32_MAX;
	int32_t x3223 = INT32_MAX;
	uint8_t x3224 = 4U;
	uint32_t t69 = 31937U;

	t69 = (((x3221+x3222)&x3223)>>x3224);

	if (t69 != 134217727U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3230 = 5U;
	uint32_t x3231 = 7U;
	static int8_t x3232 = 1;
	uint32_t t70 = 89646250U;

	t70 = (((x3229+x3230)&x3231)>>x3232);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3237 = UINT32_MAX;
	uint32_t x3239 = UINT32_MAX;
	static int8_t x3240 = 8;
	int64_t t71 = -294212629LL;

	t71 = (((x3237+x3238)&x3239)>>x3240);

	if (t71 != 9846963LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x3329 = -1;
	volatile uint8_t x3330 = 0U;
	uint8_t x3331 = 14U;
	int8_t x3332 = 0;

	t72 = (((x3329+x3330)&x3331)>>x3332);

	if (t72 != 14) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3373 = UINT64_MAX;
	int64_t x3374 = -1988860LL;
	volatile uint32_t x3376 = 0U;
	volatile uint64_t t73 = 18491524029692LLU;

	t73 = (((x3373+x3374)&x3375)>>x3376);

	if (t73 != 18446744073707552768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3485 = -1;
	volatile int16_t x3486 = INT16_MIN;
	static uint16_t x3487 = 4U;
	int32_t t74 = 256;

	t74 = (((x3485+x3486)&x3487)>>x3488);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3513 = 8052;
	int8_t x3514 = INT8_MAX;
	volatile int64_t x3515 = -1LL;
	volatile uint8_t x3516 = 2U;
	volatile int64_t t75 = 1489857371LL;

	t75 = (((x3513+x3514)&x3515)>>x3516);

	if (t75 != 2044LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3573 = UINT32_MAX;
	int64_t x3574 = INT64_MIN;
	volatile int64_t x3575 = 5236213400LL;
	int32_t x3576 = 5;
	int64_t t76 = 53549545627LL;

	t76 = (((x3573+x3574)&x3575)>>x3576);

	if (t76 != 29413940LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3577 = 2LLU;
	volatile uint64_t x3578 = UINT64_MAX;
	int64_t x3579 = -1LL;
	uint32_t x3580 = 0U;
	volatile uint64_t t77 = 3242LLU;

	t77 = (((x3577+x3578)&x3579)>>x3580);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x3602 = INT32_MAX;
	uint64_t x3603 = 2258494665719858924LLU;
	int32_t x3604 = 1;
	uint64_t t78 = 16763842021969279LLU;

	t78 = (((x3601+x3602)&x3603)>>x3604);

	if (t78 != 1129247332859929462LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3613 = 0;
	int32_t x3614 = INT32_MAX;
	volatile uint64_t x3615 = UINT64_MAX;
	volatile uint8_t x3616 = 17U;

	t79 = (((x3613+x3614)&x3615)>>x3616);

	if (t79 != 16383LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3637 = 0U;
	int64_t x3639 = 23LL;
	volatile uint64_t t80 = 113311428LLU;

	t80 = (((x3637+x3638)&x3639)>>x3640);

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x3646 = 1LL;
	uint64_t x3647 = 26LLU;
	int32_t x3648 = 1;
	static uint64_t t81 = 227887499135196LLU;

	t81 = (((x3645+x3646)&x3647)>>x3648);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3733 = 1343964700575LL;
	volatile int16_t x3734 = INT16_MIN;
	int16_t x3735 = INT16_MIN;
	int16_t x3736 = 3;
	volatile int64_t t82 = 4323569418481516LL;

	t82 = (((x3733+x3734)&x3735)>>x3736);

	if (t82 != 167995580416LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3749 = 1294;
	int16_t x3750 = -854;
	int64_t x3751 = 8LL;
	int32_t x3752 = 0;
	int64_t t83 = -2282LL;

	t83 = (((x3749+x3750)&x3751)>>x3752);

	if (t83 != 8LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3781 = -272;
	uint32_t x3782 = 4468U;
	int8_t x3783 = INT8_MAX;
	volatile uint32_t t84 = 19516411U;

	t84 = (((x3781+x3782)&x3783)>>x3784);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3829 = -1LL;
	uint8_t x3830 = UINT8_MAX;
	int16_t x3831 = -4324;

	t85 = (((x3829+x3830)&x3831)>>x3832);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3885 = INT16_MIN;
	uint16_t x3886 = UINT16_MAX;
	int32_t x3887 = 51;
	static uint8_t x3888 = 1U;

	t86 = (((x3885+x3886)&x3887)>>x3888);

	if (t86 != 25) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x3973 = -6;
	uint16_t x3974 = 22874U;
	uint16_t x3975 = UINT16_MAX;
	static int16_t x3976 = 2;
	int32_t t87 = 35;

	t87 = (((x3973+x3974)&x3975)>>x3976);

	if (t87 != 5717) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x4041 = -1;
	uint64_t x4042 = UINT64_MAX;
	int32_t x4043 = INT32_MIN;
	int16_t x4044 = 0;
	volatile uint64_t t88 = 25311LLU;

	t88 = (((x4041+x4042)&x4043)>>x4044);

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4061 = INT64_MIN;
	uint64_t x4062 = 2691LLU;
	int16_t x4064 = 14;
	volatile uint64_t t89 = 104009LLU;

	t89 = (((x4061+x4062)&x4063)>>x4064);

	if (t89 != 562949953421312LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4093 = 7U;
	static uint32_t x4094 = 335510U;
	volatile uint8_t x4096 = 10U;
	uint32_t t90 = 52320526U;

	t90 = (((x4093+x4094)&x4095)>>x4096);

	if (t90 != 327U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4101 = INT8_MIN;
	volatile uint16_t x4102 = 86U;
	uint8_t x4103 = 1U;
	uint8_t x4104 = 0U;
	static volatile int32_t t91 = 982;

	t91 = (((x4101+x4102)&x4103)>>x4104);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4145 = -1;
	volatile int32_t x4146 = INT32_MAX;
	int16_t x4147 = INT16_MIN;

	t92 = (((x4145+x4146)&x4147)>>x4148);

	if (t92 != 2147450880) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x4173 = -7;
	volatile uint16_t x4174 = UINT16_MAX;
	int8_t x4175 = INT8_MAX;
	volatile uint32_t x4176 = 3U;
	static int32_t t93 = -15663;

	t93 = (((x4173+x4174)&x4175)>>x4176);

	if (t93 != 15) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4186 = INT8_MAX;
	static uint16_t x4187 = UINT16_MAX;
	volatile int16_t x4188 = 18;
	int64_t t94 = -3202751748523LL;

	t94 = (((x4185+x4186)&x4187)>>x4188);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x4257 = INT16_MIN;
	uint32_t x4259 = 185261U;
	volatile int16_t x4260 = 11;
	static uint32_t t95 = 15066864U;

	t95 = (((x4257+x4258)&x4259)>>x4260);

	if (t95 != 80U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4261 = -53;
	volatile int16_t x4262 = INT16_MIN;
	static uint32_t x4263 = 2U;
	static volatile uint32_t t96 = 1416U;

	t96 = (((x4261+x4262)&x4263)>>x4264);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x4273 = 6848U;
	uint16_t x4275 = UINT16_MAX;
	int16_t x4276 = 2;

	t97 = (((x4273+x4274)&x4275)>>x4276);

	if (t97 != 1712) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x4406 = -1;
	static uint32_t x4407 = 31U;
	uint32_t t98 = 99583430U;

	t98 = (((x4405+x4406)&x4407)>>x4408);

	if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4447 = INT64_MAX;
	uint16_t x4448 = 50U;
	int64_t t99 = 7119385LL;

	t99 = (((x4445+x4446)&x4447)>>x4448);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

