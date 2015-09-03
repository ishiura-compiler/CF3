#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x14 = 1847U;
volatile int16_t x48 = -1;
int8_t x134 = INT8_MAX;
uint8_t x217 = 8U;
volatile uint64_t x219 = 457710022630814LLU;
uint8_t x220 = 0U;
int32_t t6 = -457589727;
volatile int32_t x297 = -1;
int64_t x299 = -1LL;
int16_t x317 = INT16_MIN;
volatile int64_t x328 = -1LL;
uint32_t x351 = UINT32_MAX;
int16_t x352 = -1;
volatile int32_t x397 = 1;
int64_t x399 = 2193775823742650433LL;
int32_t x400 = 0;
int32_t x546 = INT32_MIN;
int32_t t15 = 584194430;
volatile int16_t x561 = -249;
int16_t x594 = INT16_MIN;
uint32_t x595 = UINT32_MAX;
int8_t x622 = INT8_MAX;
volatile int32_t t19 = -872658;
uint64_t x640 = 57130045637074548LLU;
volatile int32_t x689 = -14;
uint8_t x690 = 0U;
int64_t x839 = -1LL;
int32_t t26 = -1667050;
uint32_t x944 = 0U;
int32_t x1145 = -1;
static volatile int32_t t30 = -22430274;
uint64_t x1193 = 93345LLU;
uint32_t x1194 = UINT32_MAX;
int64_t x1256 = INT64_MAX;
uint8_t x1307 = 0U;
int32_t t34 = -3812160;
volatile uint16_t x1379 = UINT16_MAX;
uint32_t x1380 = 0U;
int16_t x1386 = INT16_MIN;
uint32_t x1533 = UINT32_MAX;
static int8_t x1536 = -1;
uint32_t x1540 = 1304U;
static volatile int32_t t39 = 6243;
volatile int16_t x1612 = -1;
static int64_t x1618 = 16728313453LL;
static volatile int32_t x1789 = INT32_MIN;
int16_t x1909 = INT16_MIN;
static int32_t x1911 = -1;
int8_t x1912 = -1;
static int8_t x1947 = -3;
volatile int64_t x2087 = 32258645LL;
int64_t x2291 = -1LL;
int64_t x2293 = INT64_MIN;
volatile int32_t t51 = -262101;
volatile uint64_t x2312 = 20LLU;
static int8_t x2444 = INT8_MIN;
int32_t x2488 = INT32_MIN;
int32_t t56 = -1;
volatile int32_t t57 = 101;
int64_t x2533 = INT64_MIN;
uint32_t x2534 = 2687U;
static int32_t t58 = -2934;
static int32_t t59 = 107;
volatile int16_t x2610 = INT16_MIN;
uint16_t x2647 = 0U;
static int16_t x2648 = INT16_MAX;
int32_t t62 = 4;
int32_t t63 = 325332481;
int8_t x2720 = INT8_MIN;
int16_t x2777 = INT16_MAX;
uint32_t x2779 = UINT32_MAX;
int8_t x2782 = -1;
int16_t x2792 = -1;
uint8_t x2833 = 2U;
static uint16_t x2836 = 0U;
volatile uint64_t x2890 = UINT64_MAX;
volatile int64_t x3014 = 11811062418LL;
uint64_t x3015 = UINT64_MAX;
volatile int32_t t70 = 484841;
static volatile int32_t x3071 = INT32_MIN;
int64_t x3155 = INT64_MAX;
static volatile int32_t t73 = -13845;
uint64_t x3217 = 619236931LLU;
int32_t x3220 = -1;
uint32_t x3228 = 0U;
static volatile int32_t t76 = -39;
int8_t x3337 = 4;
uint32_t x3338 = 803U;
uint16_t x3438 = UINT16_MAX;
static int8_t x3440 = -15;
uint16_t x3493 = UINT16_MAX;
static int64_t x3531 = -1LL;
int64_t x3629 = INT64_MIN;
int64_t x3630 = INT64_MIN;
int16_t x3638 = INT16_MAX;
uint32_t x3639 = UINT32_MAX;
int8_t x3640 = -1;
uint16_t x3749 = UINT16_MAX;
volatile int32_t x3751 = -1;
volatile int32_t t90 = 133785;
volatile int16_t x3853 = INT16_MAX;
int16_t x3865 = INT16_MIN;
volatile int32_t t95 = -8515;
static volatile uint32_t x3967 = UINT32_MAX;
static int64_t x3982 = 4356779389904982493LL;
int8_t x3983 = -1;
int64_t x3984 = -1LL;
uint8_t x4013 = 53U;
uint64_t x4014 = 5706176442293200LLU;
volatile int32_t t98 = -25525174;
uint64_t x4027 = UINT64_MAX;


void f0(void) {
	volatile uint64_t x13 = UINT64_MAX;
	int64_t x15 = INT64_MIN;
	static volatile uint64_t x16 = 122806457825653154LLU;
	int32_t t0 = 113827808;

	t0 = ((x13==x14)>>(x15*x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 70255645279588LLU;
	uint8_t x26 = 15U;
	int32_t x27 = -1;
	int8_t x28 = -1;
	static int32_t t1 = -53608;

	t1 = ((x25==x26)>>(x27*x28));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x45 = -1;
	static uint32_t x46 = 0U;
	static uint64_t x47 = UINT64_MAX;
	volatile int32_t t2 = -7429681;

	t2 = ((x45==x46)>>(x47*x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x97 = 39U;
	static uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = 0U;
	volatile int32_t t3 = 381;

	t3 = ((x97==x98)>>(x99*x100));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x133 = 20364208690LL;
	int64_t x135 = -1LL;
	int64_t x136 = -1LL;
	static int32_t t4 = 332830675;

	t4 = ((x133==x134)>>(x135*x136));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x218 = 1;
	int32_t t5 = 15;

	t5 = ((x217==x218)>>(x219*x220));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x229 = 5679U;
	int32_t x230 = INT32_MIN;
	static int8_t x231 = 0;
	uint32_t x232 = UINT32_MAX;

	t6 = ((x229==x230)>>(x231*x232));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x298 = -29;
	volatile int16_t x300 = -23;
	static int32_t t7 = -10655;

	t7 = ((x297==x298)>>(x299*x300));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x318 = INT64_MAX;
	int16_t x319 = -1;
	int32_t x320 = -1;
	static volatile int32_t t8 = 1462;

	t8 = ((x317==x318)>>(x319*x320));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x325 = -213958570LL;
	volatile uint16_t x326 = 22418U;
	static int32_t x327 = -1;
	int32_t t9 = -67;

	t9 = ((x325==x326)>>(x327*x328));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = 15;
	int32_t t10 = 6498;

	t10 = ((x349==x350)>>(x351*x352));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x369 = 278319357487021079LL;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = -1;
	uint16_t x372 = 0U;
	int32_t t11 = -15;

	t11 = ((x369==x370)>>(x371*x372));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x398 = -1;
	int32_t t12 = 52;

	t12 = ((x397==x398)>>(x399*x400));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x405 = 14U;
	int8_t x406 = INT8_MIN;
	int64_t x407 = 8145886575LL;
	volatile int8_t x408 = 0;
	static int32_t t13 = -3964917;

	t13 = ((x405==x406)>>(x407*x408));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x461 = 12139U;
	uint32_t x462 = UINT32_MAX;
	static int8_t x463 = 0;
	int64_t x464 = 577697873LL;
	int32_t t14 = 371542632;

	t14 = ((x461==x462)>>(x463*x464));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x545 = -1LL;
	static uint8_t x547 = 0U;
	uint32_t x548 = 2810U;

	t15 = ((x545==x546)>>(x547*x548));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x562 = INT64_MIN;
	uint64_t x563 = UINT64_MAX;
	int16_t x564 = -1;
	int32_t t16 = -60878;

	t16 = ((x561==x562)>>(x563*x564));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x589 = 1144942U;
	int16_t x590 = INT16_MIN;
	volatile uint32_t x591 = 22670U;
	int32_t x592 = INT32_MIN;
	volatile int32_t t17 = -3417;

	t17 = ((x589==x590)>>(x591*x592));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x593 = 519278U;
	int8_t x596 = -1;
	int32_t t18 = -329;

	t18 = ((x593==x594)>>(x595*x596));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x621 = INT8_MIN;
	int64_t x623 = 0LL;
	volatile int32_t x624 = -1;

	t19 = ((x621==x622)>>(x623*x624));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x637 = -1;
	uint64_t x638 = 3121028414336886615LLU;
	volatile int64_t x639 = INT64_MIN;
	static volatile int32_t t20 = -5;

	t20 = ((x637==x638)>>(x639*x640));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x681 = -1LL;
	uint16_t x682 = 4135U;
	static int8_t x683 = 0;
	int32_t x684 = 336529;
	int32_t t21 = 0;

	t21 = ((x681==x682)>>(x683*x684));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x691 = -1;
	uint64_t x692 = UINT64_MAX;
	int32_t t22 = -214;

	t22 = ((x689==x690)>>(x691*x692));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x693 = 1U;
	int16_t x694 = 4;
	int64_t x695 = -1LL;
	int8_t x696 = 0;
	int32_t t23 = -1671;

	t23 = ((x693==x694)>>(x695*x696));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x837 = INT32_MIN;
	int32_t x838 = INT32_MIN;
	int8_t x840 = -3;
	volatile int32_t t24 = -1007053764;

	t24 = ((x837==x838)>>(x839*x840));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x849 = INT16_MAX;
	uint8_t x850 = 0U;
	uint8_t x851 = UINT8_MAX;
	int8_t x852 = 0;
	volatile int32_t t25 = 90699;

	t25 = ((x849==x850)>>(x851*x852));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x905 = INT8_MIN;
	int64_t x906 = -1414252938449527LL;
	volatile int64_t x907 = INT64_MIN;
	static uint16_t x908 = 0U;

	t26 = ((x905==x906)>>(x907*x908));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x925 = INT16_MIN;
	int16_t x926 = -1;
	int8_t x927 = -1;
	static uint64_t x928 = UINT64_MAX;
	volatile int32_t t27 = 1;

	t27 = ((x925==x926)>>(x927*x928));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x941 = -3510117LL;
	uint16_t x942 = 195U;
	int32_t x943 = INT32_MAX;
	int32_t t28 = -1;

	t28 = ((x941==x942)>>(x943*x944));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x973 = 424300399U;
	static int16_t x974 = -1;
	int32_t x975 = -1;
	int8_t x976 = -1;
	volatile int32_t t29 = 9722554;

	t29 = ((x973==x974)>>(x975*x976));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1146 = -1;
	volatile int32_t x1147 = -1;
	volatile int8_t x1148 = -1;

	t30 = ((x1145==x1146)>>(x1147*x1148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1195 = UINT8_MAX;
	int8_t x1196 = 0;
	int32_t t31 = 1816;

	t31 = ((x1193==x1194)>>(x1195*x1196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1233 = INT8_MAX;
	int32_t x1234 = INT32_MIN;
	int16_t x1235 = -1;
	uint16_t x1236 = 0U;
	volatile int32_t t32 = 784137645;

	t32 = ((x1233==x1234)>>(x1235*x1236));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1253 = UINT64_MAX;
	volatile uint32_t x1254 = UINT32_MAX;
	uint32_t x1255 = 0U;
	static int32_t t33 = -321;

	t33 = ((x1253==x1254)>>(x1255*x1256));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1305 = 27898186;
	static uint64_t x1306 = UINT64_MAX;
	volatile uint16_t x1308 = 3U;

	t34 = ((x1305==x1306)>>(x1307*x1308));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1377 = -1;
	static volatile int32_t x1378 = INT32_MIN;
	volatile int32_t t35 = 216;

	t35 = ((x1377==x1378)>>(x1379*x1380));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1385 = 32763U;
	int16_t x1387 = 4;
	uint16_t x1388 = 1U;
	volatile int32_t t36 = 459;

	t36 = ((x1385==x1386)>>(x1387*x1388));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1457 = INT64_MIN;
	uint32_t x1458 = 1736070862U;
	uint8_t x1459 = 0U;
	volatile uint64_t x1460 = UINT64_MAX;
	int32_t t37 = -3;

	t37 = ((x1457==x1458)>>(x1459*x1460));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1534 = INT16_MIN;
	static volatile uint64_t x1535 = UINT64_MAX;
	volatile int32_t t38 = 153150;

	t38 = ((x1533==x1534)>>(x1535*x1536));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1537 = INT16_MIN;
	int64_t x1538 = INT64_MIN;
	int32_t x1539 = INT32_MIN;

	t39 = ((x1537==x1538)>>(x1539*x1540));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1605 = 7302842;
	uint64_t x1606 = 5740LLU;
	int8_t x1607 = 0;
	uint16_t x1608 = UINT16_MAX;
	int32_t t40 = 94814808;

	t40 = ((x1605==x1606)>>(x1607*x1608));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1609 = INT8_MAX;
	volatile int64_t x1610 = -1LL;
	static int16_t x1611 = -1;
	int32_t t41 = 871;

	t41 = ((x1609==x1610)>>(x1611*x1612));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1617 = 452852;
	int16_t x1619 = INT16_MAX;
	static int8_t x1620 = 0;
	int32_t t42 = 8084;

	t42 = ((x1617==x1618)>>(x1619*x1620));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x1721 = 18U;
	static int32_t x1722 = -1;
	int8_t x1723 = 5;
	volatile uint32_t x1724 = 0U;
	volatile int32_t t43 = 128;

	t43 = ((x1721==x1722)>>(x1723*x1724));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1790 = -1512843565440193LL;
	volatile uint16_t x1791 = 0U;
	int64_t x1792 = INT64_MAX;
	volatile int32_t t44 = 160742241;

	t44 = ((x1789==x1790)>>(x1791*x1792));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x1793 = INT64_MAX;
	int64_t x1794 = 468492906687980596LL;
	static int16_t x1795 = 0;
	volatile int8_t x1796 = -1;
	int32_t t45 = -381050362;

	t45 = ((x1793==x1794)>>(x1795*x1796));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1910 = -1LL;
	volatile int32_t t46 = -55652408;

	t46 = ((x1909==x1910)>>(x1911*x1912));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1945 = INT8_MIN;
	int64_t x1946 = INT64_MAX;
	int64_t x1948 = -1LL;
	int32_t t47 = 2;

	t47 = ((x1945==x1946)>>(x1947*x1948));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x2085 = INT32_MIN;
	int64_t x2086 = INT64_MAX;
	int8_t x2088 = 0;
	int32_t t48 = -1;

	t48 = ((x2085==x2086)>>(x2087*x2088));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2161 = 14U;
	int32_t x2162 = -1;
	uint8_t x2163 = UINT8_MAX;
	static int16_t x2164 = 0;
	volatile int32_t t49 = 59;

	t49 = ((x2161==x2162)>>(x2163*x2164));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2289 = 59LLU;
	int64_t x2290 = INT64_MAX;
	int32_t x2292 = -1;
	int32_t t50 = 5493;

	t50 = ((x2289==x2290)>>(x2291*x2292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2294 = INT8_MIN;
	uint8_t x2295 = 0U;
	static volatile uint32_t x2296 = 418163U;

	t51 = ((x2293==x2294)>>(x2295*x2296));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x2309 = 1574676510LLU;
	volatile int32_t x2310 = INT32_MIN;
	int64_t x2311 = 1LL;
	int32_t t52 = -1;

	t52 = ((x2309==x2310)>>(x2311*x2312));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2313 = 69U;
	int16_t x2314 = INT16_MIN;
	int8_t x2315 = INT8_MIN;
	uint16_t x2316 = 0U;
	volatile int32_t t53 = 410030;

	t53 = ((x2313==x2314)>>(x2315*x2316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2353 = 2;
	static volatile int64_t x2354 = INT64_MIN;
	static volatile int32_t x2355 = -1;
	uint32_t x2356 = UINT32_MAX;
	volatile int32_t t54 = -472;

	t54 = ((x2353==x2354)>>(x2355*x2356));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x2441 = INT64_MIN;
	uint8_t x2442 = 1U;
	uint8_t x2443 = 0U;
	volatile int32_t t55 = 5;

	t55 = ((x2441==x2442)>>(x2443*x2444));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2485 = 8220652624LLU;
	int16_t x2486 = -1;
	uint32_t x2487 = 186U;

	t56 = ((x2485==x2486)>>(x2487*x2488));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2525 = UINT8_MAX;
	volatile uint32_t x2526 = UINT32_MAX;
	uint8_t x2527 = 0U;
	uint64_t x2528 = 407LLU;

	t57 = ((x2525==x2526)>>(x2527*x2528));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x2535 = 816894148LLU;
	volatile int64_t x2536 = INT64_MIN;

	t58 = ((x2533==x2534)>>(x2535*x2536));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2537 = INT64_MIN;
	static int8_t x2538 = INT8_MAX;
	uint16_t x2539 = 0U;
	int16_t x2540 = -1;

	t59 = ((x2537==x2538)>>(x2539*x2540));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x2565 = UINT64_MAX;
	int8_t x2566 = -1;
	int32_t x2567 = INT32_MIN;
	uint8_t x2568 = 0U;
	volatile int32_t t60 = 81730637;

	t60 = ((x2565==x2566)>>(x2567*x2568));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2609 = -444289329840387257LL;
	static uint8_t x2611 = 3U;
	volatile int32_t x2612 = 1;
	int32_t t61 = -13601;

	t61 = ((x2609==x2610)>>(x2611*x2612));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2645 = 0U;
	int64_t x2646 = -2134330662LL;

	t62 = ((x2645==x2646)>>(x2647*x2648));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2681 = INT64_MIN;
	static uint16_t x2682 = 1U;
	uint16_t x2683 = 15257U;
	static uint8_t x2684 = 0U;

	t63 = ((x2681==x2682)>>(x2683*x2684));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2717 = 4495263LLU;
	int8_t x2718 = -1;
	volatile int64_t x2719 = 0LL;
	int32_t t64 = 1;

	t64 = ((x2717==x2718)>>(x2719*x2720));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x2778 = 1231847222275LL;
	volatile int32_t x2780 = -14;
	int32_t t65 = -601443;

	t65 = ((x2777==x2778)>>(x2779*x2780));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2781 = INT32_MAX;
	int8_t x2783 = -3;
	int16_t x2784 = -1;
	int32_t t66 = 386059788;

	t66 = ((x2781==x2782)>>(x2783*x2784));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x2789 = -1;
	static uint64_t x2790 = 750366270LLU;
	volatile int8_t x2791 = -1;
	static volatile int32_t t67 = -6887;

	t67 = ((x2789==x2790)>>(x2791*x2792));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2834 = INT8_MIN;
	static int32_t x2835 = INT32_MAX;
	int32_t t68 = -2263;

	t68 = ((x2833==x2834)>>(x2835*x2836));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2889 = -433443880LL;
	static uint8_t x2891 = 0U;
	uint16_t x2892 = 1558U;
	volatile int32_t t69 = 0;

	t69 = ((x2889==x2890)>>(x2891*x2892));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3013 = 2;
	int64_t x3016 = -1LL;

	t70 = ((x3013==x3014)>>(x3015*x3016));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3069 = 3128621487LLU;
	static int64_t x3070 = 1LL;
	uint32_t x3072 = 1664428236U;
	static volatile int32_t t71 = -113;

	t71 = ((x3069==x3070)>>(x3071*x3072));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3105 = 15U;
	static uint8_t x3106 = 103U;
	uint64_t x3107 = UINT64_MAX;
	int64_t x3108 = -1LL;
	int32_t t72 = -124108179;

	t72 = ((x3105==x3106)>>(x3107*x3108));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint32_t x3153 = 254U;
	int32_t x3154 = -1;
	int32_t x3156 = 0;

	t73 = ((x3153==x3154)>>(x3155*x3156));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3189 = -723314969803LL;
	int16_t x3190 = -1;
	int8_t x3191 = 0;
	int16_t x3192 = -2;
	int32_t t74 = 0;

	t74 = ((x3189==x3190)>>(x3191*x3192));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3218 = -1;
	int32_t x3219 = -1;
	static int32_t t75 = 700080444;

	t75 = ((x3217==x3218)>>(x3219*x3220));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x3225 = INT8_MIN;
	uint8_t x3226 = 13U;
	static uint16_t x3227 = 91U;

	t76 = ((x3225==x3226)>>(x3227*x3228));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3241 = -1;
	static volatile int16_t x3242 = INT16_MIN;
	int64_t x3243 = -3LL;
	int32_t x3244 = -1;
	static int32_t t77 = -3;

	t77 = ((x3241==x3242)>>(x3243*x3244));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3253 = INT32_MIN;
	uint16_t x3254 = 68U;
	int64_t x3255 = INT64_MIN;
	int8_t x3256 = 0;
	volatile int32_t t78 = 1713589;

	t78 = ((x3253==x3254)>>(x3255*x3256));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x3339 = -1LL;
	static uint64_t x3340 = UINT64_MAX;
	int32_t t79 = -94739190;

	t79 = ((x3337==x3338)>>(x3339*x3340));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3393 = UINT64_MAX;
	static volatile uint64_t x3394 = 239383450166LLU;
	volatile int32_t x3395 = 0;
	int64_t x3396 = -1LL;
	volatile int32_t t80 = 4;

	t80 = ((x3393==x3394)>>(x3395*x3396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3437 = 5U;
	int64_t x3439 = -1LL;
	int32_t t81 = -321058;

	t81 = ((x3437==x3438)>>(x3439*x3440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x3449 = UINT16_MAX;
	volatile int16_t x3450 = INT16_MIN;
	static volatile int16_t x3451 = -1;
	int8_t x3452 = -31;
	static volatile int32_t t82 = -98393;

	t82 = ((x3449==x3450)>>(x3451*x3452));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3494 = INT16_MIN;
	static int8_t x3495 = 0;
	uint8_t x3496 = 119U;
	int32_t t83 = 1;

	t83 = ((x3493==x3494)>>(x3495*x3496));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3529 = 7755;
	uint32_t x3530 = 3956U;
	int8_t x3532 = -12;
	int32_t t84 = 1566;

	t84 = ((x3529==x3530)>>(x3531*x3532));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x3589 = INT32_MAX;
	uint32_t x3590 = 1603U;
	volatile uint16_t x3591 = UINT16_MAX;
	static uint8_t x3592 = 0U;
	static int32_t t85 = -2400;

	t85 = ((x3589==x3590)>>(x3591*x3592));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3631 = 0U;
	uint32_t x3632 = 42058U;
	int32_t t86 = 1307;

	t86 = ((x3629==x3630)>>(x3631*x3632));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3637 = UINT64_MAX;
	int32_t t87 = 7493959;

	t87 = ((x3637==x3638)>>(x3639*x3640));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x3641 = UINT8_MAX;
	volatile int8_t x3642 = -1;
	uint8_t x3643 = 0U;
	int16_t x3644 = INT16_MIN;
	int32_t t88 = -3;

	t88 = ((x3641==x3642)>>(x3643*x3644));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3717 = INT16_MAX;
	static uint16_t x3718 = UINT16_MAX;
	int32_t x3719 = -1;
	uint32_t x3720 = UINT32_MAX;
	int32_t t89 = 10539;

	t89 = ((x3717==x3718)>>(x3719*x3720));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x3750 = 7221U;
	static int8_t x3752 = -29;

	t90 = ((x3749==x3750)>>(x3751*x3752));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3829 = -1LL;
	volatile int32_t x3830 = INT32_MAX;
	int16_t x3831 = -3;
	volatile uint64_t x3832 = UINT64_MAX;
	static int32_t t91 = 266418;

	t91 = ((x3829==x3830)>>(x3831*x3832));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3854 = 825U;
	int64_t x3855 = -1LL;
	volatile uint64_t x3856 = UINT64_MAX;
	volatile int32_t t92 = 12;

	t92 = ((x3853==x3854)>>(x3855*x3856));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3866 = INT64_MIN;
	static uint8_t x3867 = 0U;
	int32_t x3868 = -1;
	volatile int32_t t93 = -574771;

	t93 = ((x3865==x3866)>>(x3867*x3868));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x3901 = INT16_MAX;
	uint64_t x3902 = 808LLU;
	uint32_t x3903 = 9U;
	uint8_t x3904 = 1U;
	static int32_t t94 = -1;

	t94 = ((x3901==x3902)>>(x3903*x3904));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x3945 = 3U;
	int8_t x3946 = -1;
	uint64_t x3947 = 0LLU;
	static int32_t x3948 = INT32_MAX;

	t95 = ((x3945==x3946)>>(x3947*x3948));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3965 = INT64_MIN;
	int64_t x3966 = INT64_MIN;
	static int32_t x3968 = -1;
	int32_t t96 = 224108;

	t96 = ((x3965==x3966)>>(x3967*x3968));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3981 = 130273863U;
	static int32_t t97 = -51;

	t97 = ((x3981==x3982)>>(x3983*x3984));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x4015 = -1;
	uint32_t x4016 = UINT32_MAX;

	t98 = ((x4013==x4014)>>(x4015*x4016));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x4025 = -18609;
	static volatile int8_t x4026 = INT8_MAX;
	int64_t x4028 = -1LL;
	volatile int32_t t99 = -8;

	t99 = ((x4025==x4026)>>(x4027*x4028));

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

