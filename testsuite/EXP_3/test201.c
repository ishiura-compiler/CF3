#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x94 = 11947209LLU;
int32_t x95 = INT32_MIN;
uint32_t x229 = 124238U;
volatile int8_t x347 = INT8_MAX;
static uint8_t x348 = 114U;
static uint64_t t2 = 674LLU;
volatile int64_t t3 = 12373642336061292LL;
static int64_t x461 = -2LL;
int32_t x462 = INT32_MIN;
int32_t x642 = -240707394;
int32_t x678 = -855;
volatile int32_t t7 = 1;
static uint16_t x1118 = 275U;
uint32_t x1120 = UINT32_MAX;
int32_t x1204 = -1;
volatile int32_t t13 = -7905811;
uint16_t x1275 = 0U;
uint32_t x1327 = 10U;
int16_t x1459 = INT16_MIN;
uint64_t x1471 = 43LLU;
int32_t x1472 = -1;
uint16_t x1478 = 2069U;
static uint64_t x1480 = UINT64_MAX;
int16_t x1558 = -1;
static uint64_t x1637 = 269561305793044LLU;
static volatile uint64_t t24 = 1LLU;
static volatile uint64_t x1857 = UINT64_MAX;
uint64_t t25 = 67470LLU;
static volatile int64_t t26 = 21265962514LL;
static volatile uint32_t x2045 = UINT32_MAX;
static int32_t x2047 = -1;
uint32_t t27 = 823401631U;
volatile uint64_t t28 = 312383487589LLU;
static int8_t x2113 = INT8_MIN;
int64_t x2114 = -1LL;
static int16_t x2115 = 0;
static volatile int32_t t31 = 1370643;
int8_t x2241 = INT8_MIN;
uint32_t x2243 = 0U;
uint64_t x2244 = UINT64_MAX;
static uint64_t x2378 = UINT64_MAX;
uint16_t x2379 = 47U;
int32_t x2551 = INT32_MIN;
volatile int32_t x2552 = INT32_MIN;
int16_t x2574 = INT16_MAX;
static uint8_t x2691 = 6U;
uint64_t t39 = 456LLU;
int32_t x2836 = INT32_MIN;
int16_t x2898 = 154;
int64_t x2994 = 8444LL;
static int64_t x2995 = INT64_MIN;
int8_t x3197 = 14;
int8_t x3198 = 17;
uint8_t x3329 = 1U;
int16_t x3381 = INT16_MIN;
volatile int16_t x3417 = INT16_MIN;
static volatile int64_t x3418 = -1LL;
volatile int64_t x3437 = INT64_MIN;
volatile uint64_t t52 = 5122193423LLU;
volatile int32_t t53 = 709004;
uint32_t x3889 = UINT32_MAX;
static int16_t x3894 = 2766;
uint64_t x4114 = UINT64_MAX;
volatile uint64_t t57 = 33200110104LLU;
int8_t x4187 = -1;
uint64_t x4349 = 4LLU;
int16_t x4352 = -1;
int64_t x4464 = -1LL;
volatile int64_t x4573 = -1LL;
volatile uint32_t x4575 = 0U;
uint8_t x4764 = UINT8_MAX;
int64_t x4848 = INT64_MIN;
static int32_t t68 = -14870153;
uint16_t x5258 = 12189U;
volatile uint8_t x5291 = UINT8_MAX;
static volatile int32_t t71 = 0;
uint64_t t72 = 1LLU;
int8_t x5476 = -1;
volatile uint64_t t73 = 12696LLU;
uint8_t x5761 = 6U;
static int32_t x5764 = -1;
int16_t x5918 = INT16_MIN;
static uint32_t x5920 = UINT32_MAX;
int16_t x5996 = -7;
uint16_t x6121 = UINT16_MAX;
static int32_t t78 = -1001475827;
uint32_t t79 = 686748620U;
int64_t x6240 = -1LL;
static uint64_t x6302 = UINT64_MAX;
int8_t x6305 = -9;
int32_t x6307 = 15;
int8_t x6308 = 0;
static int64_t t82 = -11148860256LL;
volatile int16_t x6366 = -1;
int8_t x6368 = INT8_MIN;
uint32_t x6389 = UINT32_MAX;
static volatile int64_t x6404 = INT64_MIN;
int16_t x6468 = -1;
uint64_t x6597 = 26220944127574LLU;
static int8_t x6599 = INT8_MIN;
static int8_t x6621 = -26;
static int64_t x6623 = -1LL;
static uint64_t x6698 = 12146668628344258LLU;
volatile int8_t x6700 = 1;
static uint8_t x6713 = 5U;
uint64_t x6716 = UINT64_MAX;
volatile int32_t t91 = 10658008;
uint32_t x6760 = UINT32_MAX;
uint8_t x6811 = 31U;
int32_t x6812 = -1;
uint16_t x6997 = 1U;
volatile int32_t t98 = -174075;


void f0(void) {
	int32_t x93 = -1;
	int32_t x96 = INT32_MIN;
	volatile uint64_t t0 = 2028104890LLU;

	t0 = ((x93*x94)<<(x95-x96));

	if (t0 != 18446744073697604407LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x230 = UINT8_MAX;
	static int8_t x231 = 1;
	int16_t x232 = -1;
	uint32_t t1 = 227655U;

	t1 = ((x229*x230)<<(x231-x232));

	if (t1 != 126722760U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x345 = 7000365819LLU;
	volatile uint8_t x346 = 3U;

	t2 = ((x345*x346)<<(x347-x348));

	if (t2 != 172040990367744LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x373 = -393209306919LL;
	uint16_t x374 = 0U;
	int16_t x375 = -1;
	volatile int8_t x376 = -1;

	t3 = ((x373*x374)<<(x375-x376));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x463 = 2U;
	static volatile int32_t x464 = -1;
	int64_t t4 = -4038753LL;

	t4 = ((x461*x462)<<(x463-x464));

	if (t4 != 34359738368LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x533 = INT16_MIN;
	static int8_t x534 = -1;
	int8_t x535 = INT8_MAX;
	int8_t x536 = INT8_MAX;
	volatile int32_t t5 = 1524;

	t5 = ((x533*x534)<<(x535-x536));

	if (t5 != 32768) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x641 = -1;
	uint64_t x643 = UINT64_MAX;
	int8_t x644 = -4;
	static volatile int32_t t6 = 162036643;

	t6 = ((x641*x642)<<(x643-x644));

	if (t6 != 1925659152) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x677 = -31;
	static int64_t x679 = 5LL;
	uint64_t x680 = UINT64_MAX;

	t7 = ((x677*x678)<<(x679-x680));

	if (t7 != 1696320) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x801 = 158U;
	int16_t x802 = INT16_MAX;
	int64_t x803 = -1LL;
	int64_t x804 = -1LL;
	static int32_t t8 = -282;

	t8 = ((x801*x802)<<(x803-x804));

	if (t8 != 5177186) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x865 = -52;
	uint64_t x866 = 15727LLU;
	int8_t x867 = 0;
	volatile int8_t x868 = -1;
	volatile uint64_t t9 = 432414868340174212LLU;

	t9 = ((x865*x866)<<(x867-x868));

	if (t9 != 18446744073707916008LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x913 = -1;
	int16_t x914 = -3353;
	int64_t x915 = -1LL;
	int64_t x916 = -1LL;
	volatile int32_t t10 = -9;

	t10 = ((x913*x914)<<(x915-x916));

	if (t10 != 3353) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x941 = 64U;
	uint32_t x942 = 796417U;
	int16_t x943 = INT16_MIN;
	int16_t x944 = INT16_MIN;
	uint32_t t11 = 423714U;

	t11 = ((x941*x942)<<(x943-x944));

	if (t11 != 50970688U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x1117 = UINT64_MAX;
	uint8_t x1119 = 1U;
	volatile uint64_t t12 = 648080207161177314LLU;

	t12 = ((x1117*x1118)<<(x1119-x1120));

	if (t12 != 18446744073709550516LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1201 = -32;
	int8_t x1202 = -4;
	uint64_t x1203 = UINT64_MAX;

	t13 = ((x1201*x1202)<<(x1203-x1204));

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1273 = -1;
	volatile uint32_t x1274 = 25U;
	volatile int64_t x1276 = -4LL;
	volatile uint32_t t14 = 31U;

	t14 = ((x1273*x1274)<<(x1275-x1276));

	if (t14 != 4294966896U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1325 = 0;
	int32_t x1326 = -52280915;
	uint64_t x1328 = UINT64_MAX;
	volatile int32_t t15 = 54;

	t15 = ((x1325*x1326)<<(x1327-x1328));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x1437 = INT8_MIN;
	uint32_t x1438 = 3189U;
	int32_t x1439 = INT32_MIN;
	static volatile int32_t x1440 = INT32_MIN;
	uint32_t t16 = 1U;

	t16 = ((x1437*x1438)<<(x1439-x1440));

	if (t16 != 4294559104U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x1457 = -422;
	static int8_t x1458 = INT8_MIN;
	static int16_t x1460 = INT16_MIN;
	int32_t t17 = 135;

	t17 = ((x1457*x1458)<<(x1459-x1460));

	if (t17 != 54016) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x1469 = UINT64_MAX;
	uint16_t x1470 = UINT16_MAX;
	volatile uint64_t t18 = 1094664053415LLU;

	t18 = ((x1469*x1470)<<(x1471-x1472));

	if (t18 != 17293840161288749056LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1477 = 48U;
	int64_t x1479 = -1LL;
	volatile uint32_t t19 = 6799U;

	t19 = ((x1477*x1478)<<(x1479-x1480));

	if (t19 != 99312U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1497 = INT16_MIN;
	uint32_t x1498 = UINT32_MAX;
	uint8_t x1499 = 5U;
	static volatile uint32_t x1500 = 1U;
	static uint32_t t20 = 95798935U;

	t20 = ((x1497*x1498)<<(x1499-x1500));

	if (t20 != 524288U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1557 = -1;
	static volatile uint64_t x1559 = 3LLU;
	int8_t x1560 = -1;
	volatile int32_t t21 = 3;

	t21 = ((x1557*x1558)<<(x1559-x1560));

	if (t21 != 16) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x1638 = -1;
	int64_t x1639 = INT64_MIN;
	volatile int64_t x1640 = INT64_MIN;
	volatile uint64_t t22 = 14472731483685611LLU;

	t22 = ((x1637*x1638)<<(x1639-x1640));

	if (t22 != 18446474512403758572LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1697 = INT64_MIN;
	int8_t x1698 = 0;
	static int16_t x1699 = -1;
	static uint64_t x1700 = UINT64_MAX;
	int64_t t23 = 267218283696160LL;

	t23 = ((x1697*x1698)<<(x1699-x1700));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1821 = 0;
	uint64_t x1822 = 1076701534501803LLU;
	uint16_t x1823 = 2U;
	uint64_t x1824 = UINT64_MAX;

	t24 = ((x1821*x1822)<<(x1823-x1824));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1858 = UINT32_MAX;
	static volatile int8_t x1859 = INT8_MAX;
	static int8_t x1860 = INT8_MAX;

	t25 = ((x1857*x1858)<<(x1859-x1860));

	if (t25 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x1953 = 0LL;
	int8_t x1954 = -1;
	volatile uint8_t x1955 = 1U;
	int64_t x1956 = -1LL;

	t26 = ((x1953*x1954)<<(x1955-x1956));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x2046 = INT16_MIN;
	int16_t x2048 = -1;

	t27 = ((x2045*x2046)<<(x2047-x2048));

	if (t27 != 32768U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x2069 = 25;
	uint64_t x2070 = UINT64_MAX;
	static int64_t x2071 = -1LL;
	volatile uint64_t x2072 = UINT64_MAX;

	t28 = ((x2069*x2070)<<(x2071-x2072));

	if (t28 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2105 = INT8_MIN;
	uint64_t x2106 = 657LLU;
	uint64_t x2107 = UINT64_MAX;
	uint64_t x2108 = UINT64_MAX;
	static uint64_t t29 = 115195098144757066LLU;

	t29 = ((x2105*x2106)<<(x2107-x2108));

	if (t29 != 18446744073709467520LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x2116 = -36;
	volatile int64_t t30 = -31LL;

	t30 = ((x2113*x2114)<<(x2115-x2116));

	if (t30 != 8796093022208LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2157 = -33;
	static volatile int32_t x2158 = -1;
	static int64_t x2159 = -1LL;
	int8_t x2160 = -1;

	t31 = ((x2157*x2158)<<(x2159-x2160));

	if (t31 != 33) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x2217 = UINT32_MAX;
	uint32_t x2218 = 152U;
	uint32_t x2219 = 27U;
	volatile int64_t x2220 = -1LL;
	static volatile uint32_t t32 = 84886120U;

	t32 = ((x2217*x2218)<<(x2219-x2220));

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2242 = INT16_MIN;
	int32_t t33 = 239160;

	t33 = ((x2241*x2242)<<(x2243-x2244));

	if (t33 != 8388608) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2285 = UINT64_MAX;
	static uint8_t x2286 = UINT8_MAX;
	volatile int8_t x2287 = 2;
	int8_t x2288 = -7;
	uint64_t t34 = 6207243691LLU;

	t34 = ((x2285*x2286)<<(x2287-x2288));

	if (t34 != 18446744073709421056LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2377 = INT32_MAX;
	int8_t x2380 = 0;
	static volatile uint64_t t35 = 37755847985LLU;

	t35 = ((x2377*x2378)<<(x2379-x2380));

	if (t35 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2549 = INT16_MAX;
	uint8_t x2550 = UINT8_MAX;
	int32_t t36 = 2;

	t36 = ((x2549*x2550)<<(x2551-x2552));

	if (t36 != 8355585) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2573 = 3050U;
	uint32_t x2575 = UINT32_MAX;
	int8_t x2576 = -1;
	volatile int32_t t37 = -4820951;

	t37 = ((x2573*x2574)<<(x2575-x2576));

	if (t37 != 99939350) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2617 = 15904U;
	uint64_t x2618 = 69565988112187542LLU;
	volatile int8_t x2619 = -1;
	int64_t x2620 = -1LL;
	uint64_t t38 = 37768752LLU;

	t38 = ((x2617*x2618)<<(x2619-x2620));

	if (t38 != 18019574587367122624LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2689 = 1378271431U;
	static uint64_t x2690 = UINT64_MAX;
	static int16_t x2692 = -1;

	t39 = ((x2689*x2690)<<(x2691-x2692));

	if (t39 != 18446743897290808448LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2773 = 0U;
	static int16_t x2774 = 218;
	uint64_t x2775 = UINT64_MAX;
	int32_t x2776 = -1;
	int32_t t40 = -228;

	t40 = ((x2773*x2774)<<(x2775-x2776));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2833 = 365209620665409LLU;
	uint16_t x2834 = 13833U;
	static int32_t x2835 = INT32_MIN;
	uint64_t t41 = 566771156133458275LLU;

	t41 = ((x2833*x2834)<<(x2835-x2836));

	if (t41 != 5051944682664602697LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2897 = INT8_MAX;
	volatile int16_t x2899 = -1;
	volatile int16_t x2900 = -1;
	int32_t t42 = 889;

	t42 = ((x2897*x2898)<<(x2899-x2900));

	if (t42 != 19558) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2925 = -1;
	static int8_t x2926 = INT8_MIN;
	int16_t x2927 = INT16_MIN;
	int16_t x2928 = INT16_MIN;
	int32_t t43 = 5132997;

	t43 = ((x2925*x2926)<<(x2927-x2928));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2993 = 7;
	int64_t x2996 = INT64_MIN;
	static volatile int64_t t44 = -2754119742958LL;

	t44 = ((x2993*x2994)<<(x2995-x2996));

	if (t44 != 59108LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3199 = -1;
	int16_t x3200 = -1;
	int32_t t45 = -29;

	t45 = ((x3197*x3198)<<(x3199-x3200));

	if (t45 != 238) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3293 = INT16_MIN;
	volatile uint64_t x3294 = UINT64_MAX;
	uint8_t x3295 = 31U;
	int32_t x3296 = 0;
	uint64_t t46 = 5132550280569LLU;

	t46 = ((x3293*x3294)<<(x3295-x3296));

	if (t46 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3330 = UINT64_MAX;
	int32_t x3331 = INT32_MIN;
	int32_t x3332 = INT32_MIN;
	uint64_t t47 = UINT64_MAX;

	t47 = ((x3329*x3330)<<(x3331-x3332));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3382 = INT8_MIN;
	static uint16_t x3383 = 0U;
	uint64_t x3384 = UINT64_MAX;
	static int32_t t48 = -14514073;

	t48 = ((x3381*x3382)<<(x3383-x3384));

	if (t48 != 8388608) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3419 = INT32_MIN;
	volatile int32_t x3420 = INT32_MIN;
	volatile int64_t t49 = 468LL;

	t49 = ((x3417*x3418)<<(x3419-x3420));

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3429 = -1;
	int64_t x3430 = -1LL;
	volatile uint32_t x3431 = 5U;
	static int8_t x3432 = -54;
	int64_t t50 = -64542220237679LL;

	t50 = ((x3429*x3430)<<(x3431-x3432));

	if (t50 != 576460752303423488LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3438 = UINT64_MAX;
	int8_t x3439 = 45;
	int32_t x3440 = -1;
	volatile uint64_t t51 = 1398LLU;

	t51 = ((x3437*x3438)<<(x3439-x3440));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3765 = INT32_MIN;
	volatile uint64_t x3766 = 1661070945656LLU;
	uint32_t x3767 = UINT32_MAX;
	uint32_t x3768 = UINT32_MAX;

	t52 = ((x3765*x3766)<<(x3767-x3768));

	if (t52 != 11545656335496380416LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3845 = INT8_MIN;
	int16_t x3846 = INT16_MIN;
	int8_t x3847 = -5;
	int16_t x3848 = -7;

	t53 = ((x3845*x3846)<<(x3847-x3848));

	if (t53 != 16777216) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3890 = 7551;
	uint8_t x3891 = 65U;
	volatile uint16_t x3892 = 62U;
	uint32_t t54 = 632453713U;

	t54 = ((x3889*x3890)<<(x3891-x3892));

	if (t54 != 4294906888U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3893 = INT8_MAX;
	static uint64_t x3895 = UINT64_MAX;
	volatile int64_t x3896 = -1LL;
	volatile int32_t t55 = 27345248;

	t55 = ((x3893*x3894)<<(x3895-x3896));

	if (t55 != 351282) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x4045 = INT16_MIN;
	uint64_t x4046 = 159951LLU;
	int32_t x4047 = INT32_MIN;
	static int32_t x4048 = INT32_MIN;
	uint64_t t56 = 30368913991LLU;

	t56 = ((x4045*x4046)<<(x4047-x4048));

	if (t56 != 18446744068468277248LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x4113 = -1689455307863990960LL;
	static volatile int32_t x4115 = -1;
	volatile int16_t x4116 = -1;

	t57 = ((x4113*x4114)<<(x4115-x4116));

	if (t57 != 1689455307863990960LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4185 = INT8_MIN;
	volatile int16_t x4186 = -1;
	int32_t x4188 = -1;
	volatile int32_t t58 = 7671;

	t58 = ((x4185*x4186)<<(x4187-x4188));

	if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x4350 = 3U;
	uint32_t x4351 = UINT32_MAX;
	volatile uint64_t t59 = 849335LLU;

	t59 = ((x4349*x4350)<<(x4351-x4352));

	if (t59 != 12LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x4373 = UINT64_MAX;
	uint32_t x4374 = 256U;
	int8_t x4375 = -1;
	volatile int32_t x4376 = -4;
	uint64_t t60 = 15555LLU;

	t60 = ((x4373*x4374)<<(x4375-x4376));

	if (t60 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x4421 = UINT64_MAX;
	int64_t x4422 = INT64_MIN;
	static uint16_t x4423 = 28U;
	volatile uint16_t x4424 = 1U;
	static volatile uint64_t t61 = 30307762LLU;

	t61 = ((x4421*x4422)<<(x4423-x4424));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x4461 = 414879102128LLU;
	int16_t x4462 = INT16_MAX;
	int16_t x4463 = -1;
	volatile uint64_t t62 = 1580LLU;

	t62 = ((x4461*x4462)<<(x4463-x4464));

	if (t62 != 13594343539428176LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4574 = 42347881185615LLU;
	volatile uint32_t x4576 = UINT32_MAX;
	uint64_t t63 = 266565646892415707LLU;

	t63 = ((x4573*x4574)<<(x4575-x4576));

	if (t63 != 18446659377947180386LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4761 = 0;
	uint8_t x4762 = UINT8_MAX;
	static uint8_t x4763 = UINT8_MAX;
	volatile int32_t t64 = -514792858;

	t64 = ((x4761*x4762)<<(x4763-x4764));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4841 = 50;
	uint16_t x4842 = UINT16_MAX;
	static uint16_t x4843 = 1U;
	int32_t x4844 = -8;
	int32_t t65 = -187431174;

	t65 = ((x4841*x4842)<<(x4843-x4844));

	if (t65 != 1677696000) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4845 = 28809955245254LLU;
	int8_t x4846 = INT8_MAX;
	int64_t x4847 = INT64_MIN;
	uint64_t t66 = 714711923544LLU;

	t66 = ((x4845*x4846)<<(x4847-x4848));

	if (t66 != 3658864316147258LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x5149 = -1;
	uint64_t x5150 = 370950LLU;
	int64_t x5151 = -1LL;
	int16_t x5152 = -1;
	uint64_t t67 = 5869833263LLU;

	t67 = ((x5149*x5150)<<(x5151-x5152));

	if (t67 != 18446744073709180666LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x5249 = INT8_MIN;
	static volatile int32_t x5250 = -1;
	volatile uint8_t x5251 = UINT8_MAX;
	static volatile uint8_t x5252 = UINT8_MAX;

	t68 = ((x5249*x5250)<<(x5251-x5252));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x5257 = 0;
	int32_t x5259 = -1;
	static volatile int16_t x5260 = -1;
	int32_t t69 = 1;

	t69 = ((x5257*x5258)<<(x5259-x5260));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x5269 = 29571U;
	volatile int8_t x5270 = INT8_MIN;
	uint16_t x5271 = 5U;
	int16_t x5272 = 1;
	uint32_t t70 = 0U;

	t70 = ((x5269*x5270)<<(x5271-x5272));

	if (t70 != 4234405888U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x5289 = INT8_MIN;
	int8_t x5290 = -1;
	volatile uint8_t x5292 = UINT8_MAX;

	t71 = ((x5289*x5290)<<(x5291-x5292));

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x5405 = -1;
	uint64_t x5406 = 1LLU;
	uint32_t x5407 = 53U;
	volatile int8_t x5408 = -1;

	t72 = ((x5405*x5406)<<(x5407-x5408));

	if (t72 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5473 = 255286LLU;
	static int8_t x5474 = -7;
	int8_t x5475 = -1;

	t73 = ((x5473*x5474)<<(x5475-x5476));

	if (t73 != 18446744073707764614LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x5753 = 8552U;
	uint16_t x5754 = 3784U;
	uint16_t x5755 = 2U;
	uint16_t x5756 = 2U;
	int32_t t74 = -1;

	t74 = ((x5753*x5754)<<(x5755-x5756));

	if (t74 != 32360768) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5762 = INT8_MAX;
	int16_t x5763 = -1;
	static int32_t t75 = -12454;

	t75 = ((x5761*x5762)<<(x5763-x5764));

	if (t75 != 762) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x5917 = -3LL;
	int32_t x5919 = -1;
	int64_t t76 = -6301929LL;

	t76 = ((x5917*x5918)<<(x5919-x5920));

	if (t76 != 98304LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x5993 = -1;
	uint64_t x5994 = 8046776LLU;
	int16_t x5995 = 8;
	volatile uint64_t t77 = 39LLU;

	t77 = ((x5993*x5994)<<(x5995-x5996));

	if (t77 != 18446743810032795648LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x6122 = 0;
	uint16_t x6123 = 0U;
	int64_t x6124 = -1LL;

	t78 = ((x6121*x6122)<<(x6123-x6124));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x6129 = UINT32_MAX;
	int32_t x6130 = INT32_MAX;
	volatile int8_t x6131 = -1;
	int8_t x6132 = -1;

	t79 = ((x6129*x6130)<<(x6131-x6132));

	if (t79 != 2147483649U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x6237 = 1U;
	uint32_t x6238 = 42U;
	uint8_t x6239 = 3U;
	uint32_t t80 = 3U;

	t80 = ((x6237*x6238)<<(x6239-x6240));

	if (t80 != 672U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x6301 = INT32_MAX;
	static int16_t x6303 = 14;
	int8_t x6304 = -7;
	volatile uint64_t t81 = 130772877776609109LLU;

	t81 = ((x6301*x6302)<<(x6303-x6304));

	if (t81 != 18442240474084278272LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x6306 = -1LL;

	t82 = ((x6305*x6306)<<(x6307-x6308));

	if (t82 != 294912LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6365 = INT8_MIN;
	int8_t x6367 = INT8_MIN;
	volatile int32_t t83 = -78342;

	t83 = ((x6365*x6366)<<(x6367-x6368));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x6390 = 2981866298LLU;
	int64_t x6391 = INT64_MIN;
	int64_t x6392 = INT64_MIN;
	uint64_t t84 = 16535432553LLU;

	t84 = ((x6389*x6390)<<(x6391-x6392));

	if (t84 != 12807018227972723910LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6401 = 263750643U;
	int32_t x6402 = INT32_MAX;
	int64_t x6403 = INT64_MIN;
	static uint32_t t85 = 1167U;

	t85 = ((x6401*x6402)<<(x6403-x6404));

	if (t85 != 1883733005U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x6465 = 1U;
	volatile uint64_t x6466 = 3LLU;
	int16_t x6467 = 1;
	static volatile uint64_t t86 = 1065426382LLU;

	t86 = ((x6465*x6466)<<(x6467-x6468));

	if (t86 != 12LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x6585 = -47;
	int8_t x6586 = -1;
	uint16_t x6587 = 24U;
	volatile uint64_t x6588 = UINT64_MAX;
	volatile int32_t t87 = 0;

	t87 = ((x6585*x6586)<<(x6587-x6588));

	if (t87 != 1577058304) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6598 = 0U;
	int8_t x6600 = INT8_MIN;
	uint64_t t88 = 92764769202989LLU;

	t88 = ((x6597*x6598)<<(x6599-x6600));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6622 = -1;
	int32_t x6624 = -1;
	int32_t t89 = -1237;

	t89 = ((x6621*x6622)<<(x6623-x6624));

	if (t89 != 26) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6697 = -82;
	uint8_t x6699 = 3U;
	static uint64_t t90 = 531349753985010728LLU;

	t90 = ((x6697*x6698)<<(x6699-x6700));

	if (t90 != 14462636763612634992LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6714 = UINT16_MAX;
	volatile int8_t x6715 = -1;

	t91 = ((x6713*x6714)<<(x6715-x6716));

	if (t91 != 327675) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6757 = -1934;
	int8_t x6758 = INT8_MIN;
	int8_t x6759 = -1;
	volatile int32_t t92 = -14;

	t92 = ((x6757*x6758)<<(x6759-x6760));

	if (t92 != 247552) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6769 = 8198129598097725894LLU;
	uint32_t x6770 = UINT32_MAX;
	static uint64_t x6771 = UINT64_MAX;
	int16_t x6772 = -1;
	static volatile uint64_t t93 = 24751639027LLU;

	t93 = ((x6769*x6770)<<(x6771-x6772));

	if (t93 != 11778459312228460090LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6809 = -1LL;
	int8_t x6810 = -1;
	static volatile int64_t t94 = -2070883284LL;

	t94 = ((x6809*x6810)<<(x6811-x6812));

	if (t94 != 4294967296LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6945 = 41U;
	volatile uint16_t x6946 = 12U;
	uint8_t x6947 = 13U;
	static int64_t x6948 = -1LL;
	volatile int32_t t95 = 352;

	t95 = ((x6945*x6946)<<(x6947-x6948));

	if (t95 != 8060928) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x6993 = UINT16_MAX;
	uint8_t x6994 = UINT8_MAX;
	volatile uint32_t x6995 = 5U;
	uint32_t x6996 = UINT32_MAX;
	int32_t t96 = -43349793;

	t96 = ((x6993*x6994)<<(x6995-x6996));

	if (t96 != 1069531200) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6998 = 0U;
	int32_t x6999 = -1;
	static volatile uint64_t x7000 = UINT64_MAX;
	int32_t t97 = -119315081;

	t97 = ((x6997*x6998)<<(x6999-x7000));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x7017 = -51;
	volatile int16_t x7018 = -1;
	volatile int16_t x7019 = 8;
	volatile uint64_t x7020 = UINT64_MAX;

	t98 = ((x7017*x7018)<<(x7019-x7020));

	if (t98 != 26112) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x7221 = 1566U;
	volatile int8_t x7222 = 1;
	int8_t x7223 = 2;
	int8_t x7224 = -1;
	int32_t t99 = 211681;

	t99 = ((x7221*x7222)<<(x7223-x7224));

	if (t99 != 12528) { NG(); } else { ; }
	
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

