#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 16412LLU;
uint8_t x67 = UINT8_MAX;
uint64_t x102 = UINT64_MAX;
uint8_t x104 = 4U;
static int16_t x256 = 0;
volatile int16_t x280 = 0;
int64_t t10 = 821584521LL;
uint16_t x417 = 13U;
static int64_t t12 = -514165065304996LL;
int16_t x608 = 19;
uint8_t x730 = UINT8_MAX;
volatile uint16_t x757 = 8114U;
static uint32_t x855 = UINT32_MAX;
static volatile uint32_t t19 = 41U;
static int8_t x987 = INT8_MAX;
int64_t x1057 = -1LL;
uint64_t x1130 = UINT64_MAX;
static uint64_t t24 = 47414763009224LLU;
int64_t x1230 = INT64_MIN;
int64_t x1365 = INT64_MIN;
int8_t x1367 = INT8_MIN;
int64_t x1446 = INT64_MAX;
static uint8_t x1447 = 45U;
volatile int64_t t31 = 107787696451177LL;
volatile int64_t x1457 = 15063LL;
volatile int64_t x1465 = -1LL;
int64_t x1466 = INT64_MAX;
int16_t x1485 = INT16_MIN;
uint8_t x1488 = 1U;
volatile uint64_t t38 = 1179212760040622LLU;
static int64_t t39 = -496LL;
static volatile int32_t t40 = -14;
volatile int64_t x1942 = INT64_MAX;
uint32_t x1944 = 31U;
volatile int64_t t41 = -4964LL;
int8_t x1952 = 1;
int32_t x2011 = 56945115;
int16_t x2139 = INT16_MIN;
uint8_t x2296 = 0U;
uint32_t x2374 = 198789484U;
volatile uint32_t t50 = 1U;
uint64_t x2438 = UINT64_MAX;
int8_t x2495 = 49;
static uint32_t t54 = 234889458U;
uint8_t x2616 = 1U;
static int64_t x2819 = -1LL;
uint64_t t63 = 340LLU;
int32_t x3037 = INT32_MIN;
uint64_t x3145 = 1680055873310052739LLU;
int32_t x3153 = -1;
volatile int32_t t67 = 167462;
uint8_t x3240 = 1U;
uint32_t x3413 = 66353235U;
uint64_t x3414 = 818LLU;
volatile uint64_t t71 = 2919LLU;
static uint16_t x3418 = 1609U;
int8_t x3419 = INT8_MIN;
volatile int8_t x3498 = INT8_MIN;
int32_t t73 = -5082;
int16_t x3512 = 47;
int64_t x3526 = 349LL;
static int32_t x3527 = -1;
static int8_t x3528 = 15;
int16_t x3556 = 0;
uint32_t t78 = 367784598U;
uint8_t x3631 = 1U;
int32_t t79 = 2;
int16_t x3659 = 122;
int32_t t80 = 87285556;
uint16_t x3814 = UINT16_MAX;
int32_t t89 = -1982117;
int64_t x4105 = 13417LL;
uint32_t x4241 = 3U;
int16_t x4243 = 17;
uint32_t x4378 = 485U;
int64_t t95 = 12174330184232196LL;
int32_t x4431 = 6;
static uint8_t x4432 = 25U;
static uint32_t t96 = 4261206U;
static int32_t x4457 = INT32_MAX;
int32_t x4458 = 0;
uint16_t x4481 = 52U;
int64_t t98 = 2114621499475069LL;
static uint8_t x4572 = 0U;


void f0(void) {
	static int16_t x1 = -1;
	uint64_t x2 = 7793412611LLU;
	int64_t x3 = -1LL;
	volatile int32_t x4 = 1;

	t0 = (x1*((x2%x3)<<x4));

	if (t0 != 18446744058122726394LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x65 = 142U;
	uint32_t x66 = UINT32_MAX;
	static int8_t x68 = 2;
	uint32_t t1 = 5271232U;

	t1 = (x65*((x66%x67)<<x68));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x101 = INT32_MIN;
	uint32_t x103 = 191650768U;
	volatile uint64_t t2 = 482600451404586281LLU;

	t2 = (x101*((x102%x103)<<x104));

	if (t2 != 17442409505328463872LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x121 = 5919275440419LLU;
	int64_t x122 = 3824584700LL;
	int64_t x123 = -512640483639LL;
	static volatile uint16_t x124 = 6U;
	volatile uint64_t t3 = 80162518994296LLU;

	t3 = (x121*((x122%x123)<<x124));

	if (t3 != 231683342193188096LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x178 = -1;
	int64_t x179 = -1LL;
	volatile int16_t x180 = 0;
	volatile int64_t t4 = -32463188633LL;

	t4 = (x177*((x178%x179)<<x180));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x217 = UINT64_MAX;
	static int64_t x218 = INT64_MIN;
	int16_t x219 = INT16_MIN;
	int8_t x220 = 1;
	uint64_t t5 = 3LLU;

	t5 = (x217*((x218%x219)<<x220));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = 0;
	static int16_t x255 = INT16_MIN;
	int64_t t6 = -314847922476701069LL;

	t6 = (x253*((x254%x255)<<x256));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x277 = 5U;
	volatile int8_t x278 = -2;
	uint32_t x279 = UINT32_MAX;
	static volatile uint32_t t7 = 40U;

	t7 = (x277*((x278%x279)<<x280));

	if (t7 != 4294967286U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = 0;
	uint16_t x291 = UINT16_MAX;
	uint32_t x292 = 21U;
	static int32_t t8 = 1;

	t8 = (x289*((x290%x291)<<x292));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x309 = INT32_MAX;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = -1;
	static int16_t x312 = 1;
	volatile int32_t t9 = 68298095;

	t9 = (x309*((x310%x311)<<x312));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x325 = 400LL;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = 7U;

	t10 = (x325*((x326%x327)<<x328));

	if (t10 != 153600LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = -1;
	int64_t x351 = -1LL;
	uint16_t x352 = 1U;
	static volatile int64_t t11 = -2LL;

	t11 = (x349*((x350%x351)<<x352));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x418 = 8126140947LL;
	volatile uint8_t x419 = 1U;
	static volatile int32_t x420 = 1;

	t12 = (x417*((x418%x419)<<x420));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x485 = 0U;
	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	uint16_t x488 = 2U;
	int32_t t13 = 3897;

	t13 = (x485*((x486%x487)<<x488));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x501 = INT8_MAX;
	int8_t x502 = INT8_MAX;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = 0;
	static int32_t t14 = -7;

	t14 = (x501*((x502%x503)<<x504));

	if (t14 != 16129) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x605 = -1;
	static int8_t x606 = -1;
	uint64_t x607 = 320298222LLU;
	uint64_t t15 = 455660987LLU;

	t15 = (x605*((x606%x607)<<x608));

	if (t15 != 18446588921206276096LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x729 = INT64_MIN;
	volatile uint64_t x731 = 5540LLU;
	int8_t x732 = 16;
	volatile uint64_t t16 = 41429837LLU;

	t16 = (x729*((x730%x731)<<x732));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x758 = 33;
	int64_t x759 = 479782598072005LL;
	static uint16_t x760 = 3U;
	static volatile int64_t t17 = 44572939LL;

	t17 = (x757*((x758%x759)<<x760));

	if (t17 != 2142096LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x777 = 0;
	static int8_t x778 = -1;
	static volatile uint64_t x779 = UINT64_MAX;
	static int8_t x780 = 0;
	volatile uint64_t t18 = 291105017941852LLU;

	t18 = (x777*((x778%x779)<<x780));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x853 = 31;
	volatile int32_t x854 = -379;
	uint16_t x856 = 15U;

	t19 = (x853*((x854%x855)<<x856));

	if (t19 != 3909976064U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x881 = 1309U;
	static uint32_t x882 = 1735U;
	static volatile uint32_t x883 = 206938U;
	uint8_t x884 = 11U;
	uint32_t t20 = 2958038U;

	t20 = (x881*((x882%x883)<<x884));

	if (t20 != 356276224U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x985 = 187U;
	int16_t x986 = INT16_MAX;
	static int16_t x988 = 16;
	int32_t t21 = 979085431;

	t21 = (x985*((x986%x987)<<x988));

	if (t21 != 12255232) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1058 = INT16_MAX;
	int16_t x1059 = -15402;
	static uint8_t x1060 = 4U;
	static int64_t t22 = 52680870433341448LL;

	t22 = (x1057*((x1058%x1059)<<x1060));

	if (t22 != -31408LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1085 = -5851;
	int16_t x1086 = 0;
	static int64_t x1087 = INT64_MAX;
	volatile uint8_t x1088 = 3U;
	int64_t t23 = 1980976689916833830LL;

	t23 = (x1085*((x1086%x1087)<<x1088));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1129 = INT8_MIN;
	static int16_t x1131 = 15;
	static int8_t x1132 = 12;

	t24 = (x1129*((x1130%x1131)<<x1132));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1181 = -1;
	static uint64_t x1182 = 4187649LLU;
	int16_t x1183 = -1;
	static uint8_t x1184 = 1U;
	volatile uint64_t t25 = 953236431461721000LLU;

	t25 = (x1181*((x1182%x1183)<<x1184));

	if (t25 != 18446744073701176318LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1229 = INT16_MIN;
	uint64_t x1231 = 2448454LLU;
	int32_t x1232 = 0;
	volatile uint64_t t26 = 70020158599799LLU;

	t26 = (x1229*((x1230%x1231)<<x1232));

	if (t26 != 18446744001199407104LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1265 = INT32_MAX;
	int32_t x1266 = -1;
	uint32_t x1267 = 448119U;
	int8_t x1268 = 5;
	uint32_t t27 = 197U;

	t27 = (x1265*((x1266%x1267)<<x1268));

	if (t27 != 4288733728U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1321 = 1561U;
	volatile uint64_t x1322 = 185376193LLU;
	uint64_t x1323 = 29304569LLU;
	int8_t x1324 = 46;
	volatile uint64_t t28 = 6042709856LLU;

	t28 = (x1321*((x1322%x1323)<<x1324));

	if (t28 != 9582745213370105856LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1366 = INT64_MIN;
	int8_t x1368 = 13;
	int64_t t29 = -60415682LL;

	t29 = (x1365*((x1366%x1367)<<x1368));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1425 = 652697404541764LLU;
	uint8_t x1426 = UINT8_MAX;
	int8_t x1427 = 1;
	static volatile uint64_t x1428 = 0LLU;
	volatile uint64_t t30 = 5077LLU;

	t30 = (x1425*((x1426%x1427)<<x1428));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1445 = INT16_MIN;
	uint64_t x1448 = 3LLU;

	t31 = (x1445*((x1446%x1447)<<x1448));

	if (t31 != -1835008LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1458 = INT64_MAX;
	int32_t x1459 = -1;
	uint8_t x1460 = 3U;
	volatile int64_t t32 = 5602842248240199LL;

	t32 = (x1457*((x1458%x1459)<<x1460));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1467 = UINT32_MAX;
	int8_t x1468 = 0;
	int64_t t33 = -19LL;

	t33 = (x1465*((x1466%x1467)<<x1468));

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1486 = 13247543;
	volatile int32_t x1487 = 31;
	static int32_t t34 = 5099638;

	t34 = (x1485*((x1486%x1487)<<x1488));

	if (t34 != -196608) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x1509 = INT32_MIN;
	uint16_t x1510 = 7804U;
	static volatile int16_t x1511 = -1;
	int8_t x1512 = 7;
	volatile int32_t t35 = 7;

	t35 = (x1509*((x1510%x1511)<<x1512));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1657 = 0;
	volatile uint16_t x1658 = 5U;
	int32_t x1659 = INT32_MIN;
	volatile uint16_t x1660 = 1U;
	volatile int32_t t36 = -9;

	t36 = (x1657*((x1658%x1659)<<x1660));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1665 = INT16_MIN;
	volatile int32_t x1666 = -40415;
	int32_t x1667 = -1;
	volatile int8_t x1668 = 1;
	static volatile int32_t t37 = 7284794;

	t37 = (x1665*((x1666%x1667)<<x1668));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1749 = INT16_MIN;
	int32_t x1750 = -1;
	uint64_t x1751 = 65125969916733144LLU;
	uint8_t x1752 = 11U;

	t38 = (x1749*((x1750%x1751)<<x1752));

	if (t38 != 4290492022285926400LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1905 = -4;
	static uint8_t x1906 = UINT8_MAX;
	static int64_t x1907 = -6612847235910LL;
	uint32_t x1908 = 5U;

	t39 = (x1905*((x1906%x1907)<<x1908));

	if (t39 != -32640LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x1909 = 1U;
	int16_t x1910 = INT16_MAX;
	volatile int8_t x1911 = INT8_MIN;
	uint8_t x1912 = 1U;

	t40 = (x1909*((x1910%x1911)<<x1912));

	if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1941 = INT32_MAX;
	int64_t x1943 = INT64_MAX;

	t41 = (x1941*((x1942%x1943)<<x1944));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1949 = UINT8_MAX;
	uint64_t x1950 = 2543151128858LLU;
	static int32_t x1951 = INT32_MIN;
	volatile uint64_t t42 = 376156151LLU;

	t42 = (x1949*((x1950%x1951)<<x1952));

	if (t42 != 1297007075717580LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x2009 = 22649916621LLU;
	int32_t x2010 = INT32_MAX;
	static volatile uint8_t x2012 = 3U;
	static uint64_t t43 = 1794LLU;

	t43 = (x2009*((x2010%x2011)<<x2012));

	if (t43 != 7341180806004075456LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2133 = 769052643U;
	uint16_t x2134 = 1U;
	static int64_t x2135 = INT64_MIN;
	static uint8_t x2136 = 7U;
	int64_t t44 = 24736LL;

	t44 = (x2133*((x2134%x2135)<<x2136));

	if (t44 != 98438738304LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2137 = UINT8_MAX;
	volatile uint16_t x2138 = UINT16_MAX;
	int64_t x2140 = 1LL;
	volatile int32_t t45 = -792;

	t45 = (x2137*((x2138%x2139)<<x2140));

	if (t45 != 16711170) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2197 = -1;
	int16_t x2198 = INT16_MAX;
	int64_t x2199 = INT64_MIN;
	volatile uint8_t x2200 = 1U;
	volatile int64_t t46 = 15202253726LL;

	t46 = (x2197*((x2198%x2199)<<x2200));

	if (t46 != -65534LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2249 = INT16_MAX;
	uint32_t x2250 = UINT32_MAX;
	int32_t x2251 = INT32_MAX;
	int8_t x2252 = 13;
	uint32_t t47 = 130068U;

	t47 = (x2249*((x2250%x2251)<<x2252));

	if (t47 != 268427264U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2293 = 2U;
	static uint64_t x2294 = 3327389LLU;
	volatile int32_t x2295 = -2;
	static volatile uint64_t t48 = 14282078307774239LLU;

	t48 = (x2293*((x2294%x2295)<<x2296));

	if (t48 != 6654778LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2353 = INT32_MIN;
	int8_t x2354 = INT8_MIN;
	static uint64_t x2355 = UINT64_MAX;
	static volatile uint8_t x2356 = 0U;
	volatile uint64_t t49 = 206811667LLU;

	t49 = (x2353*((x2354%x2355)<<x2356));

	if (t49 != 274877906944LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2373 = UINT32_MAX;
	uint8_t x2375 = 31U;
	volatile uint8_t x2376 = 28U;

	t50 = (x2373*((x2374%x2375)<<x2376));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2377 = 6;
	volatile uint64_t x2378 = 25767408926385LLU;
	static uint8_t x2379 = UINT8_MAX;
	static uint16_t x2380 = 21U;
	volatile uint64_t t51 = 7095744290LLU;

	t51 = (x2377*((x2378%x2379)<<x2380));

	if (t51 != 1321205760LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2437 = -122;
	int16_t x2439 = INT16_MAX;
	uint16_t x2440 = 29U;
	uint64_t t52 = 84552850LLU;

	t52 = (x2437*((x2438%x2439)<<x2440));

	if (t52 != 18446743091235782656LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2477 = 417U;
	uint32_t x2478 = 211502U;
	static uint16_t x2479 = 26U;
	uint32_t x2480 = 23U;
	static uint32_t t53 = 0U;

	t53 = (x2477*((x2478%x2479)<<x2480));

	if (t53 != 2835349504U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x2493 = INT8_MAX;
	uint32_t x2494 = 3U;
	volatile uint16_t x2496 = 3U;

	t54 = (x2493*((x2494%x2495)<<x2496));

	if (t54 != 3048U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2513 = 2045U;
	uint32_t x2514 = 2U;
	int16_t x2515 = -25;
	uint16_t x2516 = 3U;
	static volatile uint32_t t55 = 32434U;

	t55 = (x2513*((x2514%x2515)<<x2516));

	if (t55 != 32720U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2597 = INT32_MIN;
	int16_t x2598 = -1;
	int16_t x2599 = -1;
	static volatile int16_t x2600 = 0;
	volatile int32_t t56 = -7004;

	t56 = (x2597*((x2598%x2599)<<x2600));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2613 = 26U;
	uint32_t x2614 = 85678U;
	int32_t x2615 = INT32_MIN;
	static uint32_t t57 = 181019U;

	t57 = (x2613*((x2614%x2615)<<x2616));

	if (t57 != 4455256U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2681 = INT32_MIN;
	static int16_t x2682 = 3;
	volatile int64_t x2683 = INT64_MAX;
	volatile uint8_t x2684 = 1U;
	volatile int64_t t58 = -33843375LL;

	t58 = (x2681*((x2682%x2683)<<x2684));

	if (t58 != -12884901888LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2705 = 279;
	static uint32_t x2706 = 10U;
	static int64_t x2707 = INT64_MAX;
	uint8_t x2708 = 1U;
	int64_t t59 = -8097613471272LL;

	t59 = (x2705*((x2706%x2707)<<x2708));

	if (t59 != 5580LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2737 = 100571U;
	static volatile int64_t x2738 = INT64_MIN;
	int64_t x2739 = INT64_MIN;
	uint32_t x2740 = 12U;
	volatile int64_t t60 = 80560214780802413LL;

	t60 = (x2737*((x2738%x2739)<<x2740));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2769 = INT8_MAX;
	uint64_t x2770 = 7215218223530276979LLU;
	uint16_t x2771 = 586U;
	uint8_t x2772 = 5U;
	uint64_t t61 = 119432LLU;

	t61 = (x2769*((x2770%x2771)<<x2772));

	if (t61 != 2288032LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2817 = INT64_MIN;
	volatile uint16_t x2818 = UINT16_MAX;
	volatile int8_t x2820 = 12;
	volatile int64_t t62 = 3LL;

	t62 = (x2817*((x2818%x2819)<<x2820));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x2909 = 6775559117056663541LLU;
	static int8_t x2910 = INT8_MAX;
	int32_t x2911 = 7163;
	int8_t x2912 = 1;

	t63 = (x2909*((x2910%x2911)<<x2912));

	if (t63 != 5444816877404239126LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3038 = 46;
	uint32_t x3039 = 2821988U;
	uint16_t x3040 = 5U;
	uint32_t t64 = 23399U;

	t64 = (x3037*((x3038%x3039)<<x3040));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3146 = INT64_MIN;
	volatile int8_t x3147 = 1;
	int8_t x3148 = 8;
	uint64_t t65 = 1LLU;

	t65 = (x3145*((x3146%x3147)<<x3148));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3154 = -30;
	static uint64_t x3155 = 742353136102LLU;
	int64_t x3156 = 0LL;
	uint64_t t66 = 111745119880982LLU;

	t66 = (x3153*((x3154%x3155)<<x3156));

	if (t66 != 18446743471942503458LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3181 = 3379;
	static int32_t x3182 = -1;
	int8_t x3183 = -1;
	uint8_t x3184 = 2U;

	t67 = (x3181*((x3182%x3183)<<x3184));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3233 = 5;
	volatile int8_t x3234 = 0;
	volatile int16_t x3235 = -1;
	uint16_t x3236 = 12U;
	volatile int32_t t68 = -16254;

	t68 = (x3233*((x3234%x3235)<<x3236));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x3237 = -1LL;
	static uint8_t x3238 = 12U;
	int8_t x3239 = INT8_MIN;
	int64_t t69 = 201452770370LL;

	t69 = (x3237*((x3238%x3239)<<x3240));

	if (t69 != -24LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3261 = INT16_MIN;
	int32_t x3262 = -43043335;
	static uint32_t x3263 = 6U;
	uint16_t x3264 = 26U;
	static uint32_t t70 = 5677138U;

	t70 = (x3261*((x3262%x3263)<<x3264));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x3415 = 4U;
	uint32_t x3416 = 0U;

	t71 = (x3413*((x3414%x3415)<<x3416));

	if (t71 != 132706470LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3417 = -1;
	int8_t x3420 = 1;
	volatile int32_t t72 = 1813;

	t72 = (x3417*((x3418%x3419)<<x3420));

	if (t72 != -146) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3497 = -1;
	int8_t x3499 = INT8_MIN;
	uint8_t x3500 = 1U;

	t73 = (x3497*((x3498%x3499)<<x3500));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3509 = 138LLU;
	int64_t x3510 = INT64_MIN;
	int8_t x3511 = INT8_MIN;
	uint64_t t74 = 1LLU;

	t74 = (x3509*((x3510%x3511)<<x3512));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3525 = INT8_MIN;
	volatile int64_t t75 = -1LL;

	t75 = (x3525*((x3526%x3527)<<x3528));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x3529 = -2;
	int64_t x3530 = 26LL;
	static int8_t x3531 = -1;
	uint16_t x3532 = 2U;
	volatile int64_t t76 = -83LL;

	t76 = (x3529*((x3530%x3531)<<x3532));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x3553 = 1727;
	static uint64_t x3554 = 788LLU;
	volatile uint16_t x3555 = 5299U;
	uint64_t t77 = 231810314119LLU;

	t77 = (x3553*((x3554%x3555)<<x3556));

	if (t77 != 1360876LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x3593 = 58841331U;
	int8_t x3594 = INT8_MIN;
	uint32_t x3595 = UINT32_MAX;
	int64_t x3596 = 1LL;

	t78 = (x3593*((x3594%x3595)<<x3596));

	if (t78 != 2116488448U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3629 = INT16_MAX;
	static int8_t x3630 = INT8_MAX;
	uint64_t x3632 = 10LLU;

	t79 = (x3629*((x3630%x3631)<<x3632));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3657 = -1;
	int16_t x3658 = INT16_MAX;
	uint32_t x3660 = 7U;

	t80 = (x3657*((x3658%x3659)<<x3660));

	if (t80 != -9088) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3665 = -59;
	int32_t x3666 = 816543;
	int64_t x3667 = 7875LL;
	static volatile int8_t x3668 = 25;
	int64_t t81 = -355357106619596LL;

	t81 = (x3665*((x3666%x3667)<<x3668));

	if (t81 != -10726076841984LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3813 = INT64_MIN;
	volatile uint8_t x3815 = UINT8_MAX;
	volatile int16_t x3816 = 5;
	volatile int64_t t82 = 616LL;

	t82 = (x3813*((x3814%x3815)<<x3816));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3853 = INT16_MIN;
	uint16_t x3854 = 171U;
	int8_t x3855 = 19;
	static volatile int16_t x3856 = 14;
	volatile int32_t t83 = 26;

	t83 = (x3853*((x3854%x3855)<<x3856));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x3889 = -1;
	static uint32_t x3890 = UINT32_MAX;
	volatile int8_t x3891 = -47;
	uint16_t x3892 = 2U;
	uint32_t t84 = 112073U;

	t84 = (x3889*((x3890%x3891)<<x3892));

	if (t84 != 4294967112U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x3997 = UINT8_MAX;
	static int64_t x3998 = 56937LL;
	static volatile int32_t x3999 = 16399789;
	volatile int16_t x4000 = 13;
	volatile int64_t t85 = 82344395747236LL;

	t85 = (x3997*((x3998%x3999)<<x4000));

	if (t85 != 118939115520LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4021 = INT32_MIN;
	int8_t x4022 = -5;
	static uint64_t x4023 = UINT64_MAX;
	volatile uint16_t x4024 = 15U;
	volatile uint64_t t86 = 50818375914LLU;

	t86 = (x4021*((x4022%x4023)<<x4024));

	if (t86 != 351843720888320LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4053 = 3558408;
	int64_t x4054 = 3312LL;
	uint8_t x4055 = 79U;
	uint8_t x4056 = 12U;
	static int64_t t87 = -334LL;

	t87 = (x4053*((x4054%x4055)<<x4056));

	if (t87 != 1063992459264LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4077 = INT64_MIN;
	volatile int32_t x4078 = -1;
	uint64_t x4079 = UINT64_MAX;
	uint16_t x4080 = 31U;
	uint64_t t88 = 203747298414518LLU;

	t88 = (x4077*((x4078%x4079)<<x4080));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x4089 = 1;
	uint8_t x4090 = 2U;
	static int32_t x4091 = -128142;
	uint8_t x4092 = 0U;

	t89 = (x4089*((x4090%x4091)<<x4092));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4106 = INT32_MIN;
	volatile int16_t x4107 = -1;
	volatile int8_t x4108 = 1;
	int64_t t90 = -595779787576LL;

	t90 = (x4105*((x4106%x4107)<<x4108));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x4205 = UINT32_MAX;
	volatile uint32_t x4206 = UINT32_MAX;
	int8_t x4207 = INT8_MIN;
	volatile uint16_t x4208 = 4U;
	static volatile uint32_t t91 = 31U;

	t91 = (x4205*((x4206%x4207)<<x4208));

	if (t91 != 4294965264U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4242 = 13564U;
	uint8_t x4244 = 6U;
	volatile uint32_t t92 = 25U;

	t92 = (x4241*((x4242%x4243)<<x4244));

	if (t92 != 2880U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4361 = INT8_MIN;
	volatile uint16_t x4362 = UINT16_MAX;
	int32_t x4363 = -131922;
	int64_t x4364 = 1LL;
	volatile int32_t t93 = -1;

	t93 = (x4361*((x4362%x4363)<<x4364));

	if (t93 != -16776960) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4377 = -20;
	int64_t x4379 = INT64_MIN;
	uint8_t x4380 = 13U;
	static volatile int64_t t94 = 59232496090LL;

	t94 = (x4377*((x4378%x4379)<<x4380));

	if (t94 != -79462400LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4421 = 4408827117258840148LL;
	uint8_t x4422 = 2U;
	static uint16_t x4423 = 5U;
	uint64_t x4424 = 0LLU;

	t95 = (x4421*((x4422%x4423)<<x4424));

	if (t95 != 8817654234517680296LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x4429 = INT32_MIN;
	static uint32_t x4430 = UINT32_MAX;

	t96 = (x4429*((x4430%x4431)<<x4432));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4459 = 3637U;
	int8_t x4460 = 0;
	uint32_t t97 = 2U;

	t97 = (x4457*((x4458%x4459)<<x4460));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4482 = INT64_MIN;
	volatile int8_t x4483 = INT8_MIN;
	uint64_t x4484 = 54LLU;

	t98 = (x4481*((x4482%x4483)<<x4484));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x4569 = 503;
	int32_t x4570 = -8186922;
	int16_t x4571 = -1;
	static int32_t t99 = 203793269;

	t99 = (x4569*((x4570%x4571)<<x4572));

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

