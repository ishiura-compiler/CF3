#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 696259027261841LLU;
volatile uint64_t x124 = 226934LLU;
uint64_t x158 = UINT64_MAX;
int64_t x160 = INT64_MAX;
volatile uint64_t t2 = 844870843099LLU;
int8_t x189 = INT8_MIN;
uint16_t x192 = 37U;
static int8_t x364 = INT8_MIN;
static int64_t t5 = 456756469673958LL;
volatile int64_t t6 = 42459619LL;
static uint8_t x451 = 13U;
uint64_t t7 = 1LLU;
int8_t x574 = -1;
int8_t x619 = 2;
uint64_t t10 = 4564911984888133266LLU;
static int16_t x621 = INT16_MIN;
volatile int8_t x623 = 3;
int64_t x624 = -1LL;
int64_t t11 = 9427LL;
volatile uint32_t x641 = UINT32_MAX;
uint64_t x662 = 4075201095LLU;
volatile uint64_t t13 = 31415600397LLU;
static int64_t x817 = INT64_MIN;
volatile int8_t x848 = -1;
volatile int32_t t18 = -414667693;
volatile uint32_t t20 = 247965U;
uint16_t x1050 = 23U;
int16_t x1051 = 0;
int16_t x1133 = INT16_MIN;
int8_t x1135 = 2;
int8_t x1136 = -1;
volatile uint64_t t22 = 2LLU;
int32_t x1164 = INT32_MAX;
int8_t x1179 = 1;
uint32_t t26 = 884U;
static volatile int64_t x1249 = 93LL;
volatile int8_t x1266 = -1;
uint32_t x1267 = 7U;
uint32_t x1268 = UINT32_MAX;
volatile uint64_t x1310 = 4010LLU;
static int32_t x1312 = -1;
static volatile int32_t x1405 = -1;
int8_t x1407 = 7;
volatile int64_t x1408 = -1LL;
int32_t x1448 = 12616;
int32_t x1458 = INT32_MIN;
volatile int8_t x1460 = INT8_MIN;
volatile uint64_t t33 = 1919867187LLU;
uint8_t x1511 = 29U;
int32_t t34 = -461;
uint32_t t35 = 15196U;
volatile int32_t x1581 = INT32_MIN;
volatile uint64_t t39 = 7941022LLU;
int16_t x1846 = INT16_MIN;
int32_t x1884 = -43902;
int8_t x1910 = INT8_MIN;
static uint8_t x1937 = 1U;
static volatile int32_t t44 = 958734;
uint64_t x2269 = 18807537LLU;
static int64_t x2329 = INT64_MAX;
int64_t x2330 = INT64_MAX;
volatile int64_t t48 = -1346290542724268LL;
uint32_t x2402 = 1027144U;
uint16_t x2433 = 29451U;
int16_t x2436 = 81;
static volatile uint64_t t51 = 97927815189LLU;
volatile uint64_t t52 = 201388405462533LLU;
volatile int64_t t53 = 11721750840463255LL;
volatile int16_t x2565 = INT16_MIN;
volatile int64_t t56 = 5LL;
static volatile uint64_t x2705 = 4119507390133LLU;
int8_t x2803 = 1;
volatile int32_t t59 = 114;
int32_t t60 = 12354995;
int16_t x2837 = -1;
int64_t x2841 = -497LL;
int16_t x2850 = INT16_MAX;
uint8_t x2851 = 19U;
volatile int16_t x2946 = -1;
int16_t x3007 = 27;
int64_t x3033 = -1LL;
volatile int64_t x3034 = INT64_MIN;
volatile int64_t x3154 = 612811LL;
uint32_t x3158 = 219349U;
uint16_t x3159 = 0U;
int8_t x3160 = -37;
static uint64_t x3333 = UINT64_MAX;
uint16_t x3335 = 49U;
int16_t x3565 = -1;
int32_t x3566 = INT32_MIN;
volatile uint32_t x3620 = UINT32_MAX;
static uint64_t t78 = 51880322LLU;
volatile uint8_t x3646 = 7U;
int32_t t79 = -8137;
int8_t x3841 = -1;
uint32_t x3842 = UINT32_MAX;
volatile uint16_t x4124 = 1466U;
int32_t x4137 = INT32_MIN;
int16_t x4289 = -22;
uint8_t x4291 = 5U;
volatile int32_t t92 = -1344927;
uint16_t x4302 = 9599U;
static int64_t x4522 = -1LL;
static int64_t x4697 = -1LL;
uint64_t x4699 = 0LLU;
uint64_t x4700 = UINT64_MAX;
int64_t x4764 = 91090052035138599LL;
uint32_t x4843 = 3U;
int64_t x5045 = 37790139684536LL;
int32_t x5046 = INT32_MAX;


void f0(void) {
	static int32_t x93 = -1;
	uint64_t x94 = UINT64_MAX;
	static int8_t x95 = 1;
	volatile int16_t x96 = INT16_MAX;

	t0 = (((x93^x94)>>x95)*x96);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x121 = 2362;
	uint64_t x122 = 940425410566LLU;
	volatile int32_t x123 = 1;
	static volatile uint64_t t1 = 2508589276961753421LLU;

	t1 = (((x121^x122)>>x123)*x124);

	if (t1 != 106707249863486676LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x157 = -1;
	uint32_t x159 = 7U;

	t2 = (((x157^x158)>>x159)*x160);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x190 = -1LL;
	static uint8_t x191 = 55U;
	volatile int64_t t3 = -10036LL;

	t3 = (((x189^x190)>>x191)*x192);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x217 = 3U;
	static int16_t x218 = INT16_MAX;
	int16_t x219 = 0;
	uint16_t x220 = 1732U;
	int32_t t4 = -3840;

	t4 = (((x217^x218)>>x219)*x220);

	if (t4 != 56747248) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x361 = 354652LL;
	int16_t x362 = INT16_MAX;
	int64_t x363 = 1LL;

	t5 = (((x361^x362)>>x363)*x364);

	if (t5 != -21342336LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x409 = -1LL;
	static int8_t x410 = -1;
	uint8_t x411 = 15U;
	int8_t x412 = -1;

	t6 = (((x409^x410)>>x411)*x412);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x449 = INT8_MAX;
	volatile uint64_t x450 = 1982101916428008LLU;
	uint64_t x452 = 250771116292869LLU;

	t7 = (((x449^x450)>>x451)*x452);

	if (t7 != 15923458814687550589LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x573 = INT16_MIN;
	int8_t x575 = 12;
	static int32_t x576 = -23855703;
	static volatile int32_t t8 = -50495904;

	t8 = (((x573^x574)>>x575)*x576);

	if (t8 != -166989921) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x589 = 28835U;
	volatile uint8_t x590 = UINT8_MAX;
	int32_t x591 = 0;
	volatile uint32_t x592 = 25882945U;
	volatile uint32_t t9 = 238183605U;

	t9 = (((x589^x590)>>x591)*x592);

	if (t9 != 1467687772U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x617 = UINT64_MAX;
	uint32_t x618 = UINT32_MAX;
	int8_t x620 = -1;

	t10 = (((x617^x618)>>x619)*x620);

	if (t10 != 13835058056355905536LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x622 = -21614724LL;

	t11 = (((x621^x622)>>x623)*x624);

	if (t11 != -2700783LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x642 = 94U;
	uint8_t x643 = 17U;
	static volatile uint16_t x644 = 5U;
	volatile uint32_t t12 = 1512251U;

	t12 = (((x641^x642)>>x643)*x644);

	if (t12 != 163835U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x661 = INT32_MAX;
	volatile int8_t x663 = 0;
	int32_t x664 = INT32_MIN;

	t13 = (((x661^x662)>>x663)*x664);

	if (t13 != 13363113734399066112LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x773 = INT32_MIN;
	uint32_t x774 = UINT32_MAX;
	uint8_t x775 = 29U;
	int8_t x776 = INT8_MIN;
	volatile uint32_t t14 = 84168365U;

	t14 = (((x773^x774)>>x775)*x776);

	if (t14 != 4294966912U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x785 = -481;
	int64_t x786 = INT64_MIN;
	uint8_t x787 = 6U;
	static uint64_t x788 = 37192188187LLU;
	uint64_t t15 = 11LLU;

	t15 = (((x785^x786)>>x787)*x788);

	if (t15 != 3891109780510603048LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x818 = 81561791551391LLU;
	int8_t x819 = 1;
	volatile uint16_t x820 = UINT16_MAX;
	static uint64_t t16 = 77696472905358LLU;

	t16 = (((x817^x818)>>x819)*x820);

	if (t16 != 16507634059942335537LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x845 = 1LLU;
	int32_t x846 = -1;
	int32_t x847 = 0;
	static uint64_t t17 = 924344961685737461LLU;

	t17 = (((x845^x846)>>x847)*x848);

	if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x909 = -1;
	static int32_t x910 = -54087321;
	volatile int8_t x911 = 1;
	uint8_t x912 = 9U;

	t18 = (((x909^x910)>>x911)*x912);

	if (t18 != 243392940) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x993 = INT64_MIN;
	uint64_t x994 = UINT64_MAX;
	volatile uint16_t x995 = 1U;
	uint64_t x996 = 204347796536577155LLU;
	uint64_t t19 = 308LLU;

	t19 = (((x993^x994)>>x995)*x996);

	if (t19 != 13630710258745586557LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1013 = INT16_MIN;
	int16_t x1014 = INT16_MIN;
	int8_t x1015 = 1;
	uint32_t x1016 = UINT32_MAX;

	t20 = (((x1013^x1014)>>x1015)*x1016);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1049 = INT16_MAX;
	int8_t x1052 = INT8_MAX;
	int32_t t21 = 14015865;

	t21 = (((x1049^x1050)>>x1051)*x1052);

	if (t21 != 4158488) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1134 = 427518LLU;

	t22 = (((x1133^x1134)>>x1135)*x1136);

	if (t22 != 13835058055282278017LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1161 = UINT32_MAX;
	int8_t x1162 = INT8_MIN;
	static int8_t x1163 = 1;
	volatile uint32_t t23 = 13281U;

	t23 = (((x1161^x1162)>>x1163)*x1164);

	if (t23 != 2147483585U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1165 = -1;
	uint32_t x1166 = UINT32_MAX;
	uint16_t x1167 = 3U;
	uint16_t x1168 = 11766U;
	volatile uint32_t t24 = 71U;

	t24 = (((x1165^x1166)>>x1167)*x1168);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x1173 = -5809435439920LL;
	int32_t x1174 = -1;
	int32_t x1175 = 15;
	static uint32_t x1176 = UINT32_MAX;
	int64_t t25 = -58826733433LL;

	t25 = (((x1173^x1174)>>x1175)*x1176);

	if (t25 != 761454317938853205LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1177 = 234555017U;
	int32_t x1178 = 30543369;
	static int8_t x1180 = INT8_MIN;

	t26 = (((x1177^x1178)>>x1179)*x1180);

	if (t26 != 4122861568U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x1250 = 2341593606429LL;
	uint16_t x1251 = 0U;
	int32_t x1252 = -234456;
	volatile int64_t t27 = 41752340LL;

	t27 = (((x1249^x1250)>>x1251)*x1252);

	if (t27 != -549000670597123584LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1265 = UINT64_MAX;
	static uint64_t t28 = 216LLU;

	t28 = (((x1265^x1266)>>x1267)*x1268);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1309 = 13450U;
	uint64_t x1311 = 1LLU;
	uint64_t t29 = 1686918610162068LLU;

	t29 = (((x1309^x1310)>>x1311)*x1312);

	if (t29 != 18446744073709544048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1406 = -1;
	static volatile int64_t t30 = -959986620167243LL;

	t30 = (((x1405^x1406)>>x1407)*x1408);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1445 = -199;
	uint64_t x1446 = UINT64_MAX;
	int8_t x1447 = 16;
	volatile uint64_t t31 = 945419226091632LLU;

	t31 = (((x1445^x1446)>>x1447)*x1448);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1457 = -1;
	volatile int8_t x1459 = 7;
	volatile int32_t t32 = -3440;

	t32 = (((x1457^x1458)>>x1459)*x1460);

	if (t32 != -2147483520) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1461 = 130368930U;
	uint64_t x1462 = 45178126LLU;
	uint8_t x1463 = 1U;
	int16_t x1464 = -2;

	t33 = (((x1461^x1462)>>x1463)*x1464);

	if (t33 != 18446744073618057044LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1509 = 119U;
	int16_t x1510 = 51;
	uint16_t x1512 = UINT16_MAX;

	t34 = (((x1509^x1510)>>x1511)*x1512);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1557 = UINT32_MAX;
	int8_t x1558 = -1;
	int16_t x1559 = 9;
	static int32_t x1560 = 1010073964;

	t35 = (((x1557^x1558)>>x1559)*x1560);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1582 = 58622749182862778LLU;
	int16_t x1583 = 11;
	static int64_t x1584 = 1212741LL;
	volatile uint64_t t36 = 772222359LLU;

	t36 = (((x1581^x1582)>>x1583)*x1584);

	if (t36 != 5106858352630959412LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1593 = -117;
	static volatile uint64_t x1594 = UINT64_MAX;
	uint64_t x1595 = 0LLU;
	volatile int32_t x1596 = INT32_MIN;
	uint64_t t37 = 83104973LLU;

	t37 = (((x1593^x1594)>>x1595)*x1596);

	if (t37 != 18446743824601448448LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1617 = 15;
	static volatile int64_t x1618 = 12125576616172687LL;
	int8_t x1619 = 1;
	uint8_t x1620 = 50U;
	static int64_t t38 = 53LL;

	t38 = (((x1617^x1618)>>x1619)*x1620);

	if (t38 != 303139415404316800LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1733 = 415825482950LLU;
	volatile int16_t x1734 = INT16_MAX;
	int16_t x1735 = 1;
	uint64_t x1736 = 21735064068LLU;

	t39 = (((x1733^x1734)>>x1735)*x1736);

	if (t39 != 17991086918709448304LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x1757 = INT64_MIN;
	static int8_t x1758 = INT8_MIN;
	uint8_t x1759 = 2U;
	int8_t x1760 = -1;
	int64_t t40 = 229LL;

	t40 = (((x1757^x1758)>>x1759)*x1760);

	if (t40 != -2305843009213693920LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x1845 = -1;
	int16_t x1847 = 20;
	volatile int64_t x1848 = -1LL;
	int64_t t41 = -9936LL;

	t41 = (((x1845^x1846)>>x1847)*x1848);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1881 = 681LL;
	uint32_t x1882 = UINT32_MAX;
	static int8_t x1883 = 13;
	int64_t t42 = 5299LL;

	t42 = (((x1881^x1882)>>x1883)*x1884);

	if (t42 != -23017247874LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1909 = -10;
	static uint16_t x1911 = 10U;
	volatile int32_t x1912 = -380526;
	int32_t t43 = 126549300;

	t43 = (((x1909^x1910)>>x1911)*x1912);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1938 = UINT16_MAX;
	uint64_t x1939 = 27LLU;
	int8_t x1940 = INT8_MIN;

	t44 = (((x1937^x1938)>>x1939)*x1940);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1961 = INT64_MAX;
	int64_t x1962 = INT64_MAX;
	int8_t x1963 = 0;
	uint32_t x1964 = 10963969U;
	volatile int64_t t45 = -8156277252LL;

	t45 = (((x1961^x1962)>>x1963)*x1964);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2213 = INT8_MAX;
	static int32_t x2214 = 1;
	uint16_t x2215 = 1U;
	uint16_t x2216 = 5196U;
	int32_t t46 = 353126378;

	t46 = (((x2213^x2214)>>x2215)*x2216);

	if (t46 != 327348) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2270 = INT8_MIN;
	static uint16_t x2271 = 27U;
	uint8_t x2272 = 2U;
	uint64_t t47 = 1459498084LLU;

	t47 = (((x2269^x2270)>>x2271)*x2272);

	if (t47 != 274877906942LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2331 = 14U;
	static int32_t x2332 = INT32_MIN;

	t48 = (((x2329^x2330)>>x2331)*x2332);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2401 = UINT64_MAX;
	volatile uint8_t x2403 = 33U;
	int32_t x2404 = 42691;
	volatile uint64_t t49 = 35730181289LLU;

	t49 = (((x2401^x2402)>>x2403)*x2404);

	if (t49 != 91678224374077LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2417 = -1LL;
	int8_t x2418 = INT8_MIN;
	volatile uint8_t x2419 = 5U;
	static int8_t x2420 = 56;
	int64_t t50 = -913951061502481LL;

	t50 = (((x2417^x2418)>>x2419)*x2420);

	if (t50 != 168LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2434 = UINT64_MAX;
	static uint32_t x2435 = 53U;

	t51 = (((x2433^x2434)>>x2435)*x2436);

	if (t51 != 165807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2449 = INT16_MAX;
	volatile int64_t x2450 = INT64_MAX;
	int64_t x2451 = 1LL;
	volatile uint64_t x2452 = 114LLU;

	t52 = (((x2449^x2450)>>x2451)*x2452);

	if (t52 != 9223372036852908032LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2477 = INT64_MIN;
	int64_t x2478 = -1LL;
	int16_t x2479 = 0;
	int32_t x2480 = -1;

	t53 = (((x2477^x2478)>>x2479)*x2480);

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2566 = -1LL;
	uint16_t x2567 = 28U;
	uint16_t x2568 = 4039U;
	int64_t t54 = 996384LL;

	t54 = (((x2565^x2566)>>x2567)*x2568);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2593 = 7033285947LLU;
	static uint8_t x2594 = 122U;
	volatile uint16_t x2595 = 0U;
	static uint64_t x2596 = 94842LLU;
	uint64_t t55 = 321037262LLU;

	t55 = (((x2593^x2594)>>x2595)*x2596);

	if (t55 != 667050906354426LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2673 = 101838266547901457LL;
	static volatile int8_t x2674 = 21;
	uint8_t x2675 = 7U;
	int16_t x2676 = 48;

	t56 = (((x2673^x2674)>>x2675)*x2676);

	if (t56 != 38189349955463040LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2701 = INT16_MAX;
	uint32_t x2702 = 4U;
	static uint8_t x2703 = 6U;
	int16_t x2704 = 25;
	volatile uint32_t t57 = 1123U;

	t57 = (((x2701^x2702)>>x2703)*x2704);

	if (t57 != 12775U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x2706 = 19200U;
	uint8_t x2707 = 6U;
	volatile uint8_t x2708 = 0U;
	static uint64_t t58 = 106587430225964LLU;

	t58 = (((x2705^x2706)>>x2707)*x2708);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2801 = -1210;
	static int16_t x2802 = INT16_MIN;
	uint16_t x2804 = UINT16_MAX;

	t59 = (((x2801^x2802)>>x2803)*x2804);

	if (t59 != 1034076765) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2805 = 32;
	int16_t x2806 = 0;
	uint8_t x2807 = 23U;
	static volatile int16_t x2808 = -140;

	t60 = (((x2805^x2806)>>x2807)*x2808);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x2817 = INT32_MIN;
	volatile int64_t x2818 = INT64_MIN;
	uint64_t x2819 = 38LLU;
	static uint16_t x2820 = 630U;
	static volatile int64_t t61 = -1775415988117638LL;

	t61 = (((x2817^x2818)>>x2819)*x2820);

	if (t61 != 21139291530LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2838 = -12386;
	volatile int16_t x2839 = 1;
	static int16_t x2840 = INT16_MIN;
	volatile int32_t t62 = -7813948;

	t62 = (((x2837^x2838)>>x2839)*x2840);

	if (t62 != -202899456) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x2842 = -71795318985460LL;
	uint16_t x2843 = 12U;
	volatile int32_t x2844 = 1;
	volatile int64_t t63 = 9184LL;

	t63 = (((x2841^x2842)>>x2843)*x2844);

	if (t63 != 17528154049LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2849 = 0;
	uint16_t x2852 = 331U;
	int32_t t64 = 4;

	t64 = (((x2849^x2850)>>x2851)*x2852);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2945 = INT32_MIN;
	static uint8_t x2947 = 1U;
	volatile uint32_t x2948 = 237U;
	static uint32_t t65 = 85461U;

	t65 = (((x2945^x2946)>>x2947)*x2948);

	if (t65 != 1073741587U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3005 = INT16_MAX;
	int16_t x3006 = INT16_MAX;
	volatile int8_t x3008 = -1;
	volatile int32_t t66 = -5274064;

	t66 = (((x3005^x3006)>>x3007)*x3008);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3029 = INT8_MIN;
	uint64_t x3030 = UINT64_MAX;
	int64_t x3031 = 45LL;
	int16_t x3032 = INT16_MIN;
	static volatile uint64_t t67 = 380566LLU;

	t67 = (((x3029^x3030)>>x3031)*x3032);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3035 = 12U;
	volatile int8_t x3036 = -6;
	volatile int64_t t68 = 2LL;

	t68 = (((x3033^x3034)>>x3035)*x3036);

	if (t68 != -13510798882111482LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3153 = 121U;
	int8_t x3155 = 14;
	int64_t x3156 = -1LL;
	volatile int64_t t69 = -50759539607180LL;

	t69 = (((x3153^x3154)>>x3155)*x3156);

	if (t69 != -37LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3157 = 1U;
	static uint32_t t70 = 14327405U;

	t70 = (((x3157^x3158)>>x3159)*x3160);

	if (t70 != 4286851420U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3261 = UINT16_MAX;
	volatile int32_t x3262 = 843414;
	static int16_t x3263 = 2;
	uint32_t x3264 = UINT32_MAX;
	uint32_t t71 = 3U;

	t71 = (((x3261^x3262)>>x3263)*x3264);

	if (t71 != 4294768550U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3334 = -1;
	int8_t x3336 = INT8_MIN;
	static volatile uint64_t t72 = 441470610114548LLU;

	t72 = (((x3333^x3334)>>x3335)*x3336);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3437 = UINT32_MAX;
	uint16_t x3438 = 58U;
	static volatile uint16_t x3439 = 11U;
	uint32_t x3440 = 60148193U;
	uint32_t t73 = 23952464U;

	t73 = (((x3437^x3438)>>x3439)*x3440);

	if (t73 != 948581919U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3449 = 1LLU;
	int8_t x3450 = 30;
	uint8_t x3451 = 4U;
	uint32_t x3452 = 347856U;
	volatile uint64_t t74 = 927930763319LLU;

	t74 = (((x3449^x3450)>>x3451)*x3452);

	if (t74 != 347856LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3473 = 10U;
	uint32_t x3474 = UINT32_MAX;
	uint8_t x3475 = 11U;
	int64_t x3476 = 27891265265LL;
	static volatile int64_t t75 = -24313682136656776LL;

	t75 = (((x3473^x3474)>>x3475)*x3476);

	if (t75 != 58492194841760015LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3541 = 445U;
	static int8_t x3542 = -63;
	volatile uint8_t x3543 = 6U;
	uint8_t x3544 = UINT8_MAX;
	volatile uint32_t t76 = 32134U;

	t76 = (((x3541^x3542)>>x3543)*x3544);

	if (t76 != 4227856647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3567 = 13U;
	int8_t x3568 = INT8_MAX;
	static int32_t t77 = 454;

	t77 = (((x3565^x3566)>>x3567)*x3568);

	if (t77 != 33292161) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3617 = 6U;
	uint64_t x3618 = UINT64_MAX;
	int32_t x3619 = 47;

	t78 = (((x3617^x3618)>>x3619)*x3620);

	if (t78 != 562945658322945LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3645 = INT16_MAX;
	int16_t x3647 = 0;
	volatile uint8_t x3648 = 114U;

	t79 = (((x3645^x3646)>>x3647)*x3648);

	if (t79 != 3734640) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3693 = INT16_MAX;
	uint8_t x3694 = 26U;
	volatile uint16_t x3695 = 0U;
	int8_t x3696 = -1;
	int32_t t80 = 38;

	t80 = (((x3693^x3694)>>x3695)*x3696);

	if (t80 != -32741) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x3721 = UINT16_MAX;
	int64_t x3722 = 6237LL;
	int32_t x3723 = 1;
	int64_t x3724 = -18689433727062LL;
	volatile int64_t t81 = -1013500309104702LL;

	t81 = (((x3721^x3722)>>x3723)*x3724);

	if (t81 != -554123020573661238LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3843 = 1LLU;
	int32_t x3844 = -120091562;
	volatile uint32_t t82 = 7923U;

	t82 = (((x3841^x3842)>>x3843)*x3844);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3885 = -1;
	int64_t x3886 = -78302792LL;
	volatile uint32_t x3887 = 52U;
	volatile uint64_t x3888 = 17970083762340LLU;
	static volatile uint64_t t83 = 55843181LLU;

	t83 = (((x3885^x3886)>>x3887)*x3888);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x3897 = INT64_MIN;
	volatile uint64_t x3898 = 21959LLU;
	uint8_t x3899 = 4U;
	uint16_t x3900 = UINT16_MAX;
	volatile uint64_t t84 = 2669466397098067LLU;

	t84 = (((x3897^x3898)>>x3899)*x3900);

	if (t84 != 17870283321496042148LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3909 = INT8_MIN;
	static int64_t x3910 = -1LL;
	volatile uint16_t x3911 = 1U;
	int16_t x3912 = INT16_MIN;
	static int64_t t85 = -743454296011194LL;

	t85 = (((x3909^x3910)>>x3911)*x3912);

	if (t85 != -2064384LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x3925 = INT64_MIN;
	static int8_t x3926 = -1;
	uint8_t x3927 = 8U;
	static int8_t x3928 = 0;
	int64_t t86 = -12924818307459LL;

	t86 = (((x3925^x3926)>>x3927)*x3928);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4013 = -1;
	int8_t x4014 = INT8_MIN;
	int16_t x4015 = 6;
	static uint64_t x4016 = 1504601666650480284LLU;
	uint64_t t87 = 1257476240LLU;

	t87 = (((x4013^x4014)>>x4015)*x4016);

	if (t87 != 1504601666650480284LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4105 = 73U;
	uint32_t x4106 = 0U;
	uint64_t x4107 = 0LLU;
	int16_t x4108 = -1;
	uint32_t t88 = 102178353U;

	t88 = (((x4105^x4106)>>x4107)*x4108);

	if (t88 != 4294967223U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4121 = INT16_MAX;
	int16_t x4122 = 56;
	int8_t x4123 = 28;
	static int32_t t89 = -327213;

	t89 = (((x4121^x4122)>>x4123)*x4124);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x4138 = -1;
	static uint8_t x4139 = 0U;
	int32_t x4140 = -1;
	static int32_t t90 = -26;

	t90 = (((x4137^x4138)>>x4139)*x4140);

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x4281 = 5U;
	static uint8_t x4282 = UINT8_MAX;
	uint8_t x4283 = 21U;
	int64_t x4284 = INT64_MIN;
	volatile int64_t t91 = -218766018686785LL;

	t91 = (((x4281^x4282)>>x4283)*x4284);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4290 = -1;
	int16_t x4292 = INT16_MAX;

	t92 = (((x4289^x4290)>>x4291)*x4292);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4301 = INT32_MAX;
	uint16_t x4303 = 6U;
	volatile int16_t x4304 = 25;
	int32_t t93 = 47177;

	t93 = (((x4301^x4302)>>x4303)*x4304);

	if (t93 != 838857050) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4373 = -10;
	volatile int16_t x4374 = -1;
	static uint8_t x4375 = 27U;
	int64_t x4376 = INT64_MIN;
	int64_t t94 = 112448798623LL;

	t94 = (((x4373^x4374)>>x4375)*x4376);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4521 = UINT64_MAX;
	int8_t x4523 = 0;
	int8_t x4524 = 2;
	uint64_t t95 = 15227513029859LLU;

	t95 = (((x4521^x4522)>>x4523)*x4524);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x4698 = INT16_MIN;
	uint64_t t96 = 7730LLU;

	t96 = (((x4697^x4698)>>x4699)*x4700);

	if (t96 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4761 = -1;
	int16_t x4762 = -7;
	uint16_t x4763 = 2U;
	static volatile int64_t t97 = 64205661334LL;

	t97 = (((x4761^x4762)>>x4763)*x4764);

	if (t97 != 91090052035138599LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x4841 = -1;
	static int16_t x4842 = -24;
	int8_t x4844 = INT8_MIN;
	int32_t t98 = 7;

	t98 = (((x4841^x4842)>>x4843)*x4844);

	if (t98 != -256) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5047 = 1;
	int32_t x5048 = 2142;
	volatile int64_t t99 = -97910163278079LL;

	t99 = (((x5045^x5046)>>x5047)*x5048);

	if (t99 != 40473676165606362LL) { NG(); } else { ; }
	
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

