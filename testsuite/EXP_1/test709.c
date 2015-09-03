#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x27 = 1428268284LLU;
uint32_t x223 = 27648718U;
int8_t x224 = 27;
uint8_t x240 = 0U;
static uint16_t x273 = 757U;
uint8_t x276 = 31U;
uint32_t x487 = 0U;
uint32_t t10 = 32443U;
uint64_t x551 = 514774203598128947LLU;
static uint16_t x560 = 49U;
uint32_t x562 = UINT32_MAX;
int64_t x563 = -385715LL;
int16_t x599 = 4;
volatile int8_t x600 = 4;
int16_t x695 = -1;
int32_t t15 = 0;
int8_t x801 = -1;
uint16_t x803 = 10U;
static volatile int8_t x824 = 16;
static uint64_t x907 = 1642LLU;
static uint8_t x920 = 9U;
int32_t x931 = INT32_MIN;
volatile uint32_t x932 = 1U;
int32_t x1106 = 21;
int16_t x1167 = INT16_MAX;
int64_t t26 = -15LL;
static volatile uint64_t x1193 = 11363685252704LLU;
int8_t x1209 = INT8_MIN;
uint8_t x1212 = 2U;
int8_t x1324 = 4;
int64_t x1405 = INT64_MIN;
volatile int16_t x1409 = INT16_MAX;
int64_t t35 = 30LL;
int32_t x1421 = 61;
int32_t t36 = 24339160;
uint8_t x1477 = UINT8_MAX;
int16_t x1479 = -15794;
volatile int32_t t42 = -877794665;
volatile uint8_t x1713 = UINT8_MAX;
static volatile uint32_t t44 = 1U;
uint64_t x1861 = UINT64_MAX;
int32_t t46 = -7;
volatile uint32_t x2040 = 5U;
int8_t x2188 = 5;
int64_t x2271 = -1LL;
uint32_t x2311 = 98U;
int8_t x2315 = -1;
uint32_t x2330 = UINT32_MAX;
uint64_t x2342 = UINT64_MAX;
static uint32_t x2396 = 8U;
int16_t x2413 = 2;
uint32_t x2514 = UINT32_MAX;
volatile uint64_t x2559 = 571776498410LLU;
volatile uint64_t t61 = 53968630171509LLU;
static int8_t x2678 = INT8_MIN;
volatile uint64_t x2925 = UINT64_MAX;
static volatile uint64_t t66 = 1LLU;
int8_t x2945 = 22;
uint64_t x2974 = 855LLU;
static int32_t x2983 = -1;
int32_t x3006 = INT32_MIN;
uint32_t x3008 = 1U;
static uint16_t x3053 = 2349U;
uint64_t x3055 = 121028396847352LLU;
uint16_t x3125 = 1663U;
static int32_t x3160 = 28;
uint32_t t74 = 306998U;
uint8_t x3204 = 19U;
uint16_t x3232 = 27U;
volatile uint32_t x3307 = 142131500U;
volatile int32_t t81 = -534;
uint32_t x3342 = UINT32_MAX;
static uint64_t t83 = 56LLU;
volatile int32_t t84 = 2433863;
uint64_t x3505 = 2114LLU;
uint16_t x3506 = 702U;
int64_t x3593 = INT64_MAX;
uint32_t x3601 = UINT32_MAX;
uint8_t x3603 = 7U;
volatile uint8_t x3604 = 9U;
uint32_t t87 = 764313U;
int8_t x3633 = INT8_MIN;
uint64_t t88 = 94680187064758981LLU;
static volatile int16_t x3810 = INT16_MIN;
uint64_t x3822 = 8204487003263786932LLU;
uint64_t t90 = 392084LLU;
int8_t x3832 = 31;
int32_t t91 = 184;
volatile uint16_t x3853 = UINT16_MAX;
uint32_t x3864 = 1U;
int16_t x3879 = -1;
static int32_t x3953 = -3;
static volatile int64_t x3954 = -1LL;
int8_t x4090 = INT8_MIN;
static int16_t x4113 = INT16_MIN;
static int8_t x4116 = 1;


void f0(void) {
	int16_t x25 = -1;
	int8_t x26 = 2;
	static int8_t x28 = 2;
	static volatile uint64_t t0 = 835635844912785169LLU;

	t0 = (((x25%x26)*x27)>>x28);

	if (t0 != 4611686018070320833LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x33 = -1;
	int16_t x34 = -1;
	static uint64_t x35 = 241605993773LLU;
	uint16_t x36 = 1U;
	uint64_t t1 = 3778LLU;

	t1 = (((x33%x34)*x35)>>x36);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x145 = INT8_MAX;
	int32_t x146 = -222;
	static uint64_t x147 = UINT64_MAX;
	int8_t x148 = 1;
	volatile uint64_t t2 = 34662736LLU;

	t2 = (((x145%x146)*x147)>>x148);

	if (t2 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x221 = INT8_MIN;
	uint64_t x222 = 4692146887460589695LLU;
	static volatile uint64_t t3 = 7721845509073LLU;

	t3 = (((x221%x222)*x223)>>x224);

	if (t3 != 81322892904LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x237 = INT8_MIN;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MIN;
	uint32_t t4 = 3154067U;

	t4 = (((x237%x238)*x239)>>x240);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x261 = UINT32_MAX;
	uint8_t x262 = 5U;
	static int8_t x263 = -1;
	uint16_t x264 = 18U;
	uint32_t t5 = 3979438U;

	t5 = (((x261%x262)*x263)>>x264);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x274 = 200382LLU;
	int64_t x275 = 286781693LL;
	uint64_t t6 = 6139877438432437475LLU;

	t6 = (((x273%x274)*x275)>>x276);

	if (t6 != 101LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x389 = 84U;
	int8_t x390 = INT8_MAX;
	static uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 1U;
	volatile int32_t t7 = -132081000;

	t7 = (((x389%x390)*x391)>>x392);

	if (t7 != 10710) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MAX;
	volatile int64_t x420 = 1LL;
	int32_t t8 = -30;

	t8 = (((x417%x418)*x419)>>x420);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x429 = 12527687LLU;
	static uint8_t x430 = 115U;
	int64_t x431 = -389936437200LL;
	uint32_t x432 = 3U;
	volatile uint64_t t9 = 41922739LLU;

	t9 = (((x429%x430)*x431)>>x432);

	if (t9 != 2305840718337125402LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x485 = INT16_MAX;
	uint32_t x486 = 1804187U;
	static uint8_t x488 = 5U;

	t10 = (((x485%x486)*x487)>>x488);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x549 = 491U;
	int8_t x550 = INT8_MIN;
	uint8_t x552 = 31U;
	volatile uint64_t t11 = 3075266288261703LLU;

	t11 = (((x549%x550)*x551)>>x552);

	if (t11 != 8469145576LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x557 = 615;
	volatile uint64_t x558 = UINT64_MAX;
	int8_t x559 = 1;
	uint64_t t12 = 857138856052431282LLU;

	t12 = (((x557%x558)*x559)>>x560);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x561 = -1;
	int16_t x564 = 0;
	int64_t t13 = -45945848LL;

	t13 = (((x561%x562)*x563)>>x564);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x597 = INT64_MIN;
	int64_t x598 = INT64_MIN;
	volatile int64_t t14 = 0LL;

	t14 = (((x597%x598)*x599)>>x600);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x693 = 7832904;
	int16_t x694 = -1;
	uint8_t x696 = 0U;

	t15 = (((x693%x694)*x695)>>x696);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x773 = 5751112604196945LLU;
	int32_t x774 = -72512;
	int8_t x775 = INT8_MIN;
	int8_t x776 = 0;
	volatile uint64_t t16 = 23355LLU;

	t16 = (((x773%x774)*x775)>>x776);

	if (t16 != 17710601660372342656LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x802 = 2062928544U;
	volatile int16_t x804 = 0;
	static uint32_t t17 = 92620U;

	t17 = (((x801%x802)*x803)>>x804);

	if (t17 != 1691102070U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x821 = UINT8_MAX;
	int16_t x822 = INT16_MIN;
	uint8_t x823 = 1U;
	volatile int32_t t18 = -28152919;

	t18 = (((x821%x822)*x823)>>x824);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x825 = 265907037U;
	uint32_t x826 = UINT32_MAX;
	uint8_t x827 = UINT8_MAX;
	volatile uint16_t x828 = 0U;
	uint32_t t19 = 437U;

	t19 = (((x825%x826)*x827)>>x828);

	if (t19 != 3381784995U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x905 = INT8_MIN;
	int8_t x906 = -1;
	uint64_t x908 = 0LLU;
	uint64_t t20 = 27059LLU;

	t20 = (((x905%x906)*x907)>>x908);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x917 = 44U;
	uint64_t x918 = 3680586947152024163LLU;
	int64_t x919 = -1LL;
	volatile uint64_t t21 = 37645LLU;

	t21 = (((x917%x918)*x919)>>x920);

	if (t21 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x929 = 0U;
	int64_t x930 = INT64_MIN;
	int64_t t22 = 8375113874LL;

	t22 = (((x929%x930)*x931)>>x932);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1025 = INT32_MIN;
	uint64_t x1026 = UINT64_MAX;
	volatile uint32_t x1027 = UINT32_MAX;
	uint8_t x1028 = 2U;
	static uint64_t t23 = 1817683117527289690LLU;

	t23 = (((x1025%x1026)*x1027)>>x1028);

	if (t23 != 2305843009750564864LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1089 = 156U;
	uint32_t x1090 = UINT32_MAX;
	uint8_t x1091 = UINT8_MAX;
	static uint16_t x1092 = 9U;
	volatile uint32_t t24 = 13124428U;

	t24 = (((x1089%x1090)*x1091)>>x1092);

	if (t24 != 77U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1105 = 491422843U;
	uint32_t x1107 = 3291941U;
	uint32_t x1108 = 5U;
	volatile uint32_t t25 = 33138776U;

	t25 = (((x1105%x1106)*x1107)>>x1108);

	if (t25 != 1645970U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1165 = 1U;
	int64_t x1166 = -2182791551147124LL;
	int16_t x1168 = 5;

	t26 = (((x1165%x1166)*x1167)>>x1168);

	if (t26 != 1023LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1194 = INT8_MIN;
	int32_t x1195 = -2;
	uint8_t x1196 = 1U;
	volatile uint64_t t27 = 57325381290330LLU;

	t27 = (((x1193%x1194)*x1195)>>x1196);

	if (t27 != 9223360673169523104LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1210 = INT16_MIN;
	int16_t x1211 = -7;
	volatile int32_t t28 = 0;

	t28 = (((x1209%x1210)*x1211)>>x1212);

	if (t28 != 224) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1253 = 28681702683873043LLU;
	static int64_t x1254 = -1LL;
	volatile int32_t x1255 = 639699398;
	int8_t x1256 = 1;
	uint64_t t29 = 135003972614LLU;

	t29 = (((x1253%x1254)*x1255)>>x1256);

	if (t29 != 664599456150628825LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1281 = INT16_MIN;
	uint8_t x1282 = 4U;
	int8_t x1283 = INT8_MIN;
	uint16_t x1284 = 1U;
	volatile int32_t t30 = 289;

	t30 = (((x1281%x1282)*x1283)>>x1284);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1317 = UINT64_MAX;
	static uint8_t x1318 = UINT8_MAX;
	uint16_t x1319 = 956U;
	static volatile uint8_t x1320 = 15U;
	static volatile uint64_t t31 = 1939LLU;

	t31 = (((x1317%x1318)*x1319)>>x1320);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1321 = INT8_MIN;
	int32_t x1322 = INT32_MIN;
	volatile int64_t x1323 = -1LL;
	int64_t t32 = -28875686624LL;

	t32 = (((x1321%x1322)*x1323)>>x1324);

	if (t32 != 8LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1353 = -12;
	static uint8_t x1354 = 2U;
	int8_t x1355 = INT8_MIN;
	static uint8_t x1356 = 6U;
	int32_t t33 = 148;

	t33 = (((x1353%x1354)*x1355)>>x1356);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1406 = INT32_MAX;
	int64_t x1407 = -47420759308LL;
	int64_t x1408 = 0LL;
	volatile int64_t t34 = 128290707932LL;

	t34 = (((x1405%x1406)*x1407)>>x1408);

	if (t34 != 94841518616LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1410 = INT64_MIN;
	uint32_t x1411 = UINT32_MAX;
	uint8_t x1412 = 3U;

	t35 = (((x1409%x1410)*x1411)>>x1412);

	if (t35 != 17591649169408LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1422 = 1;
	uint16_t x1423 = 0U;
	int16_t x1424 = 0;

	t36 = (((x1421%x1422)*x1423)>>x1424);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1457 = 1541308193U;
	volatile uint64_t x1458 = UINT64_MAX;
	uint64_t x1459 = 13LLU;
	uint16_t x1460 = 14U;
	uint64_t t37 = 76LLU;

	t37 = (((x1457%x1458)*x1459)>>x1460);

	if (t37 != 1222961LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x1478 = -1;
	volatile uint16_t x1480 = 2U;
	volatile int32_t t38 = 917429491;

	t38 = (((x1477%x1478)*x1479)>>x1480);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1569 = INT32_MIN;
	int8_t x1570 = 46;
	volatile int8_t x1571 = INT8_MIN;
	uint8_t x1572 = 4U;
	int32_t t39 = 409;

	t39 = (((x1569%x1570)*x1571)>>x1572);

	if (t39 != 48) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x1633 = 1U;
	volatile int32_t x1634 = -89889;
	uint8_t x1635 = 2U;
	uint8_t x1636 = 10U;
	static int32_t t40 = -44191472;

	t40 = (((x1633%x1634)*x1635)>>x1636);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1673 = INT8_MAX;
	volatile uint8_t x1674 = 1U;
	static volatile int16_t x1675 = 80;
	uint32_t x1676 = 4U;
	int32_t t41 = -21990;

	t41 = (((x1673%x1674)*x1675)>>x1676);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1709 = INT8_MIN;
	int8_t x1710 = -1;
	int8_t x1711 = 58;
	int8_t x1712 = 1;

	t42 = (((x1709%x1710)*x1711)>>x1712);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1714 = -1;
	int64_t x1715 = 104803314LL;
	static int32_t x1716 = 0;
	static volatile int64_t t43 = -2LL;

	t43 = (((x1713%x1714)*x1715)>>x1716);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1841 = INT16_MAX;
	int16_t x1842 = INT16_MIN;
	uint32_t x1843 = 1305483931U;
	uint32_t x1844 = 13U;

	t44 = (((x1841%x1842)*x1843)>>x1844);

	if (t44 != 392171U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1862 = INT8_MIN;
	uint16_t x1863 = UINT16_MAX;
	static int8_t x1864 = 8;
	volatile uint64_t t45 = 184894870LLU;

	t45 = (((x1861%x1862)*x1863)>>x1864);

	if (t45 != 32511LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1865 = 1U;
	static int16_t x1866 = -1;
	int32_t x1867 = INT32_MIN;
	uint32_t x1868 = 5U;

	t46 = (((x1865%x1866)*x1867)>>x1868);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1981 = 13769794524721817LL;
	int32_t x1982 = -130471988;
	uint64_t x1983 = UINT64_MAX;
	uint16_t x1984 = 4U;
	uint64_t t47 = 112036387LLU;

	t47 = (((x1981%x1982)*x1983)>>x1984);

	if (t47 != 1152921504600338122LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2037 = -1LL;
	int32_t x2038 = 256963;
	int16_t x2039 = INT16_MIN;
	int64_t t48 = -2LL;

	t48 = (((x2037%x2038)*x2039)>>x2040);

	if (t48 != 1024LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2149 = INT16_MAX;
	int64_t x2150 = -1LL;
	uint64_t x2151 = UINT64_MAX;
	volatile int8_t x2152 = 3;
	volatile uint64_t t49 = 2LLU;

	t49 = (((x2149%x2150)*x2151)>>x2152);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2185 = 30;
	volatile int64_t x2186 = -1LL;
	int32_t x2187 = INT32_MIN;
	static volatile int64_t t50 = -13308455420902LL;

	t50 = (((x2185%x2186)*x2187)>>x2188);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2201 = -35;
	uint16_t x2202 = 124U;
	int8_t x2203 = INT8_MIN;
	static uint32_t x2204 = 10U;
	volatile int32_t t51 = 9;

	t51 = (((x2201%x2202)*x2203)>>x2204);

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2269 = -1;
	volatile int32_t x2270 = INT32_MAX;
	volatile uint16_t x2272 = 5U;
	volatile int64_t t52 = 661027865791LL;

	t52 = (((x2269%x2270)*x2271)>>x2272);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2309 = INT8_MAX;
	static int16_t x2310 = INT16_MIN;
	volatile uint16_t x2312 = 1U;
	uint32_t t53 = 2720U;

	t53 = (((x2309%x2310)*x2311)>>x2312);

	if (t53 != 6223U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2313 = INT32_MAX;
	int32_t x2314 = -1;
	volatile int8_t x2316 = 0;
	int32_t t54 = -3443;

	t54 = (((x2313%x2314)*x2315)>>x2316);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x2325 = INT64_MIN;
	int8_t x2326 = INT8_MIN;
	int32_t x2327 = INT32_MIN;
	int8_t x2328 = 30;
	static volatile int64_t t55 = 18LL;

	t55 = (((x2325%x2326)*x2327)>>x2328);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2329 = INT32_MIN;
	static int32_t x2331 = INT32_MAX;
	uint64_t x2332 = 1LLU;
	uint32_t t56 = 9U;

	t56 = (((x2329%x2330)*x2331)>>x2332);

	if (t56 != 1073741824U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2341 = INT32_MIN;
	int8_t x2343 = INT8_MIN;
	volatile uint16_t x2344 = 63U;
	volatile uint64_t t57 = 450388548401842827LLU;

	t57 = (((x2341%x2342)*x2343)>>x2344);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x2393 = INT16_MAX;
	int8_t x2394 = 5;
	uint64_t x2395 = 1219239879646234LLU;
	volatile uint64_t t58 = 3951368LLU;

	t58 = (((x2393%x2394)*x2395)>>x2396);

	if (t58 != 9525311559736LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x2414 = UINT16_MAX;
	static volatile int16_t x2415 = INT16_MAX;
	uint32_t x2416 = 2U;
	volatile int32_t t59 = 151;

	t59 = (((x2413%x2414)*x2415)>>x2416);

	if (t59 != 16383) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2513 = INT8_MAX;
	uint8_t x2515 = UINT8_MAX;
	static volatile uint64_t x2516 = 0LLU;
	volatile uint32_t t60 = 0U;

	t60 = (((x2513%x2514)*x2515)>>x2516);

	if (t60 != 32385U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2557 = 19U;
	static int16_t x2558 = 5977;
	uint16_t x2560 = 2U;

	t61 = (((x2557%x2558)*x2559)>>x2560);

	if (t61 != 2715938367447LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2677 = -120963451876249712LL;
	static volatile int32_t x2679 = INT32_MIN;
	uint8_t x2680 = 2U;
	volatile int64_t t62 = -3LL;

	t62 = (((x2677%x2678)*x2679)>>x2680);

	if (t62 != 60129542144LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2741 = INT64_MIN;
	static int8_t x2742 = INT8_MIN;
	int16_t x2743 = INT16_MIN;
	int16_t x2744 = 20;
	static volatile int64_t t63 = 751LL;

	t63 = (((x2741%x2742)*x2743)>>x2744);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2765 = -1;
	uint64_t x2766 = 21239966LLU;
	uint64_t x2767 = UINT64_MAX;
	uint16_t x2768 = 43U;
	static volatile uint64_t t64 = 2LLU;

	t64 = (((x2765%x2766)*x2767)>>x2768);

	if (t64 != 2097151LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2877 = -1;
	int8_t x2878 = INT8_MIN;
	volatile uint32_t x2879 = 115021U;
	volatile uint8_t x2880 = 5U;
	uint32_t t65 = 9312371U;

	t65 = (((x2877%x2878)*x2879)>>x2880);

	if (t65 != 134214133U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x2926 = INT16_MAX;
	int64_t x2927 = INT64_MIN;
	volatile int16_t x2928 = 0;

	t66 = (((x2925%x2926)*x2927)>>x2928);

	if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2946 = INT64_MIN;
	uint32_t x2947 = UINT32_MAX;
	uint16_t x2948 = 1U;
	int64_t t67 = -4333LL;

	t67 = (((x2945%x2946)*x2947)>>x2948);

	if (t67 != 47244640245LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2973 = INT32_MIN;
	int64_t x2975 = INT64_MAX;
	uint8_t x2976 = 12U;
	volatile uint64_t t68 = 1LLU;

	t68 = (((x2973%x2974)*x2975)>>x2976);

	if (t68 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2981 = -60;
	int64_t x2982 = 196LL;
	static uint16_t x2984 = 41U;
	int64_t t69 = -971LL;

	t69 = (((x2981%x2982)*x2983)>>x2984);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3005 = 2650052LLU;
	uint64_t x3007 = 111911264971LLU;
	volatile uint64_t t70 = 2LLU;

	t70 = (((x3005%x3006)*x3007)>>x3008);

	if (t70 != 148285335779464246LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x3054 = 7832LLU;
	int32_t x3056 = 1;
	uint64_t t71 = 9812029LLU;

	t71 = (((x3053%x3054)*x3055)>>x3056);

	if (t71 != 142147852097214924LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x3105 = INT32_MAX;
	static int32_t x3106 = -1;
	static uint8_t x3107 = 0U;
	volatile uint32_t x3108 = 0U;
	int32_t t72 = -4032;

	t72 = (((x3105%x3106)*x3107)>>x3108);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x3126 = -1;
	int32_t x3127 = -7542465;
	uint32_t x3128 = 1U;
	volatile int32_t t73 = 73;

	t73 = (((x3125%x3126)*x3127)>>x3128);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3157 = INT8_MIN;
	uint32_t x3158 = 47U;
	volatile int16_t x3159 = -1;

	t74 = (((x3157%x3158)*x3159)>>x3160);

	if (t74 != 15U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3161 = 77466326LLU;
	static uint32_t x3162 = UINT32_MAX;
	int8_t x3163 = -1;
	uint8_t x3164 = 0U;
	volatile uint64_t t75 = 4384648122LLU;

	t75 = (((x3161%x3162)*x3163)>>x3164);

	if (t75 != 18446744073632085290LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3189 = 3780;
	volatile int32_t x3190 = 478916151;
	int16_t x3191 = INT16_MAX;
	static uint16_t x3192 = 1U;
	volatile int32_t t76 = 111715263;

	t76 = (((x3189%x3190)*x3191)>>x3192);

	if (t76 != 61929630) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint64_t x3201 = 2446303LLU;
	volatile int32_t x3202 = 1499045;
	static int16_t x3203 = INT16_MIN;
	uint64_t t77 = 775108136938233LLU;

	t77 = (((x3201%x3202)*x3203)>>x3204);

	if (t77 != 35184372029628LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3217 = INT32_MIN;
	static uint64_t x3218 = UINT64_MAX;
	volatile uint8_t x3219 = 14U;
	static uint8_t x3220 = 1U;
	uint64_t t78 = 1834625449LLU;

	t78 = (((x3217%x3218)*x3219)>>x3220);

	if (t78 != 9223372021822390272LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3229 = 95667725LLU;
	int32_t x3230 = -3466967;
	int16_t x3231 = INT16_MIN;
	uint64_t t79 = 592655155420311LLU;

	t79 = (((x3229%x3230)*x3231)>>x3232);

	if (t79 != 137438930115LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3305 = INT64_MAX;
	static int64_t x3306 = -1LL;
	uint16_t x3308 = 2U;
	volatile int64_t t80 = 0LL;

	t80 = (((x3305%x3306)*x3307)>>x3308);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3313 = INT8_MAX;
	int8_t x3314 = -1;
	int16_t x3315 = INT16_MIN;
	uint8_t x3316 = 19U;

	t81 = (((x3313%x3314)*x3315)>>x3316);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3341 = 7U;
	uint16_t x3343 = 3138U;
	uint8_t x3344 = 1U;
	uint32_t t82 = 3U;

	t82 = (((x3341%x3342)*x3343)>>x3344);

	if (t82 != 10983U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3409 = 5527431365225633175LLU;
	uint16_t x3410 = UINT16_MAX;
	int8_t x3411 = -6;
	uint16_t x3412 = 42U;

	t83 = (((x3409%x3410)*x3411)>>x3412);

	if (t83 != 4194303LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3477 = -1;
	static volatile int16_t x3478 = INT16_MAX;
	volatile int16_t x3479 = INT16_MIN;
	uint16_t x3480 = 22U;

	t84 = (((x3477%x3478)*x3479)>>x3480);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3507 = UINT8_MAX;
	uint8_t x3508 = 0U;
	uint64_t t85 = 2014144592402LLU;

	t85 = (((x3505%x3506)*x3507)>>x3508);

	if (t85 != 2040LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x3594 = INT8_MIN;
	uint16_t x3595 = 15258U;
	int8_t x3596 = 0;
	int64_t t86 = 33507633LL;

	t86 = (((x3593%x3594)*x3595)>>x3596);

	if (t86 != 1937766LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3602 = 274;

	t87 = (((x3601%x3602)*x3603)>>x3604);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x3634 = INT64_MIN;
	uint64_t x3635 = 701094LLU;
	int16_t x3636 = 1;

	t88 = (((x3633%x3634)*x3635)>>x3636);

	if (t88 != 9223372036809905792LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x3809 = INT32_MIN;
	int8_t x3811 = INT8_MAX;
	uint16_t x3812 = 2U;
	static volatile int32_t t89 = 30795;

	t89 = (((x3809%x3810)*x3811)>>x3812);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3821 = 1U;
	int32_t x3823 = INT32_MIN;
	static uint8_t x3824 = 9U;

	t90 = (((x3821%x3822)*x3823)>>x3824);

	if (t90 != 36028797014769664LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x3829 = 15U;
	int16_t x3830 = INT16_MIN;
	int8_t x3831 = INT8_MAX;

	t91 = (((x3829%x3830)*x3831)>>x3832);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3854 = -1;
	int16_t x3855 = 0;
	int16_t x3856 = 0;
	volatile int32_t t92 = -67001;

	t92 = (((x3853%x3854)*x3855)>>x3856);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x3861 = INT8_MIN;
	int64_t x3862 = -1LL;
	int32_t x3863 = 7781502;
	static volatile int64_t t93 = -29LL;

	t93 = (((x3861%x3862)*x3863)>>x3864);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3877 = UINT32_MAX;
	volatile int32_t x3878 = -11089045;
	uint16_t x3880 = 1U;
	volatile uint32_t t94 = 59825U;

	t94 = (((x3877%x3878)*x3879)>>x3880);

	if (t94 != 2141939126U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3889 = INT32_MAX;
	int16_t x3890 = INT16_MIN;
	int16_t x3891 = INT16_MAX;
	static int8_t x3892 = 1;
	static int32_t t95 = -1;

	t95 = (((x3889%x3890)*x3891)>>x3892);

	if (t95 != 536838144) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x3955 = INT16_MIN;
	static uint8_t x3956 = 1U;
	volatile int64_t t96 = 31551761133314LL;

	t96 = (((x3953%x3954)*x3955)>>x3956);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x4089 = UINT32_MAX;
	int64_t x4091 = 8488253685LL;
	int8_t x4092 = 3;
	volatile int64_t t97 = 366706758LL;

	t97 = (((x4089%x4090)*x4091)>>x4092);

	if (t97 != 134751027249LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4114 = -1;
	uint64_t x4115 = UINT64_MAX;
	uint64_t t98 = 2303131665636157498LLU;

	t98 = (((x4113%x4114)*x4115)>>x4116);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4153 = 145;
	int64_t x4154 = INT64_MAX;
	uint64_t x4155 = 10775559557LLU;
	volatile int8_t x4156 = 0;
	uint64_t t99 = 6597LLU;

	t99 = (((x4153%x4154)*x4155)>>x4156);

	if (t99 != 1562456135765LLU) { NG(); } else { ; }
	
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

