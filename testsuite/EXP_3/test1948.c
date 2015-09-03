#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x27 = INT16_MAX;
uint64_t t2 = 3921448481071LLU;
uint16_t x256 = UINT16_MAX;
int64_t t8 = 473LL;
int16_t x643 = -1;
int8_t x662 = 0;
int8_t x678 = 1;
int64_t x680 = INT64_MAX;
int16_t x779 = -2567;
volatile uint32_t x950 = 0U;
uint8_t x986 = 31U;
static volatile uint16_t x1029 = 76U;
volatile int32_t t19 = -874457315;
int64_t x1359 = -296824502610168439LL;
int8_t x1379 = INT8_MAX;
volatile uint64_t t27 = 9987LLU;
int32_t x1580 = -1;
static volatile int32_t t28 = 253582433;
int32_t t29 = -26225941;
uint16_t x1675 = 15725U;
uint32_t x1679 = 427U;
int64_t t32 = -39551086941788824LL;
uint8_t x1713 = UINT8_MAX;
int64_t t34 = 15548126129LL;
volatile uint8_t x1862 = 1U;
volatile uint8_t x2014 = 1U;
static uint64_t x2015 = 26179435785LLU;
uint64_t t38 = 76618431312LLU;
static int16_t x2034 = 4;
volatile uint32_t x2036 = 30961936U;
uint8_t x2132 = 1U;
uint8_t x2198 = 1U;
int32_t x2199 = INT32_MIN;
volatile int32_t t41 = 36288224;
int8_t x2211 = -1;
int64_t x2231 = INT64_MIN;
static volatile int32_t x2245 = INT32_MAX;
uint32_t x2266 = 18U;
static int64_t t45 = -21413929482LL;
static int8_t x2274 = 4;
uint64_t x2275 = 975208611531817LLU;
volatile uint16_t x2293 = 189U;
int32_t x2295 = 27691;
volatile int32_t t48 = -1;
uint64_t x2328 = 392187LLU;
uint16_t x2360 = UINT16_MAX;
uint32_t x2393 = UINT32_MAX;
uint32_t t51 = UINT32_MAX;
volatile int16_t x2420 = INT16_MIN;
int32_t t53 = -226360;
int16_t x2752 = INT16_MIN;
int64_t x2899 = INT64_MAX;
int64_t t57 = -2615784289335514LL;
uint64_t x2981 = 16135019693061246LLU;
int8_t x3209 = INT8_MAX;
int64_t x3212 = INT64_MAX;
uint32_t x3289 = 32850007U;
uint8_t x3290 = 1U;
int32_t x3292 = INT32_MIN;
uint8_t x3415 = 53U;
uint64_t t61 = 33856693791152125LLU;
volatile uint8_t x3494 = 3U;
static int16_t x3495 = -2;
volatile int16_t x3756 = INT16_MAX;
static uint64_t x3813 = 561LLU;
int32_t x3815 = INT32_MAX;
static int8_t x3816 = INT8_MIN;
uint8_t x3880 = 0U;
uint64_t x3893 = 4392932509LLU;
uint8_t x3894 = 1U;
int16_t x3895 = INT16_MIN;
int8_t x3967 = 1;
volatile int8_t x4007 = 59;
static volatile int32_t t72 = -56719717;
int32_t x4167 = -1;
static uint64_t t73 = 697612536375LLU;
uint8_t x4176 = UINT8_MAX;
static int64_t t74 = -25496197281980LL;
int8_t x4184 = INT8_MAX;
volatile int64_t t76 = -21226258LL;
uint64_t x4527 = 97781LLU;
int16_t x4545 = 5472;
int32_t t81 = -14;
int8_t x4566 = 19;
volatile int32_t t82 = 1425;
static uint8_t x4614 = 1U;
uint8_t x4870 = 11U;
static int8_t x4926 = 0;
int8_t x4959 = INT8_MAX;
volatile int32_t t92 = -3198;
uint32_t x5004 = UINT32_MAX;
uint32_t t93 = 246U;
static uint64_t x5155 = UINT64_MAX;
uint64_t t96 = 184611034947757LLU;
int16_t x5244 = 1;
int32_t x5347 = INT32_MIN;


void f0(void) {
	static int8_t x25 = INT8_MAX;
	uint16_t x26 = 31U;
	int8_t x28 = 1;
	int32_t t0 = 288213431;

	t0 = ((x25>>x26)&(x27|x28));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x65 = 34671U;
	int32_t x66 = 1;
	volatile int16_t x67 = INT16_MIN;
	uint32_t x68 = 6478933U;
	uint32_t t1 = 33125145U;

	t1 = ((x65>>x66)&(x67|x68));

	if (t1 != 16405U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x105 = INT64_MAX;
	volatile uint64_t x106 = 10LLU;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 1078392128677076979LLU;

	t2 = ((x105>>x106)&(x107|x108));

	if (t2 != 6535417362907135LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x113 = UINT16_MAX;
	int16_t x114 = 0;
	int32_t x115 = INT32_MAX;
	static volatile int8_t x116 = 0;
	volatile int32_t t3 = -938342679;

	t3 = ((x113>>x114)&(x115|x116));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x253 = INT64_MAX;
	uint16_t x254 = 3U;
	static uint16_t x255 = UINT16_MAX;
	volatile int64_t t4 = -1437713686453513301LL;

	t4 = ((x253>>x254)&(x255|x256));

	if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x281 = 9LLU;
	uint16_t x282 = 3U;
	uint8_t x283 = 1U;
	uint32_t x284 = 4568U;
	static volatile uint64_t t5 = 180LLU;

	t5 = ((x281>>x282)&(x283|x284));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x353 = 541166574300656434LLU;
	volatile uint16_t x354 = 2U;
	int8_t x355 = -1;
	volatile int64_t x356 = 2195876103177548119LL;
	uint64_t t6 = 0LLU;

	t6 = ((x353>>x354)&(x355|x356));

	if (t6 != 135291643575164108LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x357 = INT16_MAX;
	uint8_t x358 = 1U;
	int32_t x359 = -23957627;
	static uint8_t x360 = 6U;
	static int32_t t7 = 1652;

	t7 = ((x357>>x358)&(x359|x360));

	if (t7 != 12167) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x409 = INT8_MAX;
	int16_t x410 = 22;
	static volatile uint32_t x411 = 15424U;
	int64_t x412 = 353038506LL;

	t8 = ((x409>>x410)&(x411|x412));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x517 = INT32_MAX;
	int8_t x518 = 15;
	volatile int32_t x519 = -1;
	static int64_t x520 = INT64_MAX;
	int64_t t9 = -16060419LL;

	t9 = ((x517>>x518)&(x519|x520));

	if (t9 != 65535LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x641 = 9;
	int8_t x642 = 0;
	uint16_t x644 = 17U;
	static int32_t t10 = -87562505;

	t10 = ((x641>>x642)&(x643|x644));

	if (t10 != 9) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x661 = INT16_MAX;
	int64_t x663 = INT64_MIN;
	static uint8_t x664 = UINT8_MAX;
	volatile int64_t t11 = 1886958864832750088LL;

	t11 = ((x661>>x662)&(x663|x664));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x673 = 365;
	volatile uint8_t x674 = 10U;
	volatile int8_t x675 = INT8_MIN;
	static int8_t x676 = INT8_MIN;
	int32_t t12 = -431178486;

	t12 = ((x673>>x674)&(x675|x676));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x677 = 32;
	uint64_t x679 = 892666950407LLU;
	uint64_t t13 = 160230076711918999LLU;

	t13 = ((x677>>x678)&(x679|x680));

	if (t13 != 16LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x689 = INT64_MAX;
	static int8_t x690 = 2;
	static volatile uint64_t x691 = 37135147LLU;
	uint8_t x692 = UINT8_MAX;
	uint64_t t14 = 449061LLU;

	t14 = ((x689>>x690)&(x691|x692));

	if (t14 != 37135359LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x777 = 333U;
	uint8_t x778 = 2U;
	int8_t x780 = INT8_MIN;
	static int32_t t15 = -408695916;

	t15 = ((x777>>x778)&(x779|x780));

	if (t15 != 81) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x837 = 105U;
	int8_t x838 = 12;
	uint16_t x839 = UINT16_MAX;
	uint32_t x840 = UINT32_MAX;
	uint32_t t16 = 1317000731U;

	t16 = ((x837>>x838)&(x839|x840));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x949 = 34821255U;
	static volatile int64_t x951 = -533LL;
	int16_t x952 = -1;
	volatile int64_t t17 = 2423121LL;

	t17 = ((x949>>x950)&(x951|x952));

	if (t17 != 34821255LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x985 = UINT32_MAX;
	int16_t x987 = 7;
	static volatile int64_t x988 = INT64_MIN;
	volatile int64_t t18 = -83LL;

	t18 = ((x985>>x986)&(x987|x988));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1030 = 6;
	int8_t x1031 = -1;
	static volatile int8_t x1032 = -1;

	t19 = ((x1029>>x1030)&(x1031|x1032));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1141 = 571905LL;
	volatile int16_t x1142 = 1;
	int8_t x1143 = -13;
	int16_t x1144 = -127;
	volatile int64_t t20 = 137505707LL;

	t20 = ((x1141>>x1142)&(x1143|x1144));

	if (t20 != 285952LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1221 = 854U;
	volatile uint8_t x1222 = 9U;
	static int64_t x1223 = 1909518LL;
	static int8_t x1224 = 62;
	int64_t t21 = 294137420154299LL;

	t21 = ((x1221>>x1222)&(x1223|x1224));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1357 = INT16_MAX;
	static volatile uint8_t x1358 = 2U;
	int32_t x1360 = INT32_MIN;
	static int64_t t22 = -43759LL;

	t22 = ((x1357>>x1358)&(x1359|x1360));

	if (t22 != 5513LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x1369 = INT32_MAX;
	int64_t x1370 = 1LL;
	volatile uint32_t x1371 = 3U;
	static int64_t x1372 = INT64_MIN;
	static int64_t t23 = -1183151718555LL;

	t23 = ((x1369>>x1370)&(x1371|x1372));

	if (t23 != 3LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1377 = 15778U;
	uint64_t x1378 = 14LLU;
	int64_t x1380 = 0LL;
	int64_t t24 = -387731LL;

	t24 = ((x1377>>x1378)&(x1379|x1380));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1429 = 13U;
	volatile int16_t x1430 = 1;
	int64_t x1431 = INT64_MAX;
	static volatile int16_t x1432 = -9292;
	int64_t t25 = -20195027533861LL;

	t25 = ((x1429>>x1430)&(x1431|x1432));

	if (t25 != 6LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1517 = INT8_MAX;
	int8_t x1518 = 0;
	int8_t x1519 = INT8_MAX;
	int32_t x1520 = INT32_MIN;
	int32_t t26 = -2811;

	t26 = ((x1517>>x1518)&(x1519|x1520));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1529 = UINT64_MAX;
	int8_t x1530 = 56;
	static int32_t x1531 = 38709;
	volatile int8_t x1532 = -1;

	t27 = ((x1529>>x1530)&(x1531|x1532));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1577 = 17U;
	int8_t x1578 = 0;
	static uint8_t x1579 = 15U;

	t28 = ((x1577>>x1578)&(x1579|x1580));

	if (t28 != 17) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1589 = 1U;
	uint16_t x1590 = 9U;
	int32_t x1591 = -1;
	volatile uint16_t x1592 = 1U;

	t29 = ((x1589>>x1590)&(x1591|x1592));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1601 = 1;
	static uint8_t x1602 = 0U;
	int8_t x1603 = INT8_MAX;
	volatile int64_t x1604 = -435354925274926117LL;
	volatile int64_t t30 = 124LL;

	t30 = ((x1601>>x1602)&(x1603|x1604));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1673 = 38U;
	uint8_t x1674 = 1U;
	static int16_t x1676 = -1;
	volatile int32_t t31 = -28055;

	t31 = ((x1673>>x1674)&(x1675|x1676));

	if (t31 != 19) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1677 = 3252LL;
	volatile uint8_t x1678 = 7U;
	static int8_t x1680 = 27;

	t32 = ((x1677>>x1678)&(x1679|x1680));

	if (t32 != 25LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x1689 = 1133359379025690524LLU;
	int8_t x1690 = 1;
	volatile uint16_t x1691 = 23175U;
	int32_t x1692 = -1;
	uint64_t t33 = 585783362242LLU;

	t33 = ((x1689>>x1690)&(x1691|x1692));

	if (t33 != 566679689512845262LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1714 = 14U;
	int16_t x1715 = -1;
	int64_t x1716 = INT64_MIN;

	t34 = ((x1713>>x1714)&(x1715|x1716));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1749 = UINT64_MAX;
	uint8_t x1750 = 2U;
	int8_t x1751 = 1;
	static int32_t x1752 = INT32_MIN;
	uint64_t t35 = 2LLU;

	t35 = ((x1749>>x1750)&(x1751|x1752));

	if (t35 != 4611686016279904257LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1861 = 121;
	volatile int8_t x1863 = 1;
	static uint8_t x1864 = 1U;
	volatile int32_t t36 = 10910;

	t36 = ((x1861>>x1862)&(x1863|x1864));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1953 = 449365500LLU;
	static uint8_t x1954 = 8U;
	volatile int16_t x1955 = INT16_MAX;
	int32_t x1956 = INT32_MIN;
	static volatile uint64_t t37 = 7018529417903586LLU;

	t37 = ((x1953>>x1954)&(x1955|x1956));

	if (t37 != 18629LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2013 = 13510961817LL;
	uint32_t x2016 = 92472305U;

	t38 = ((x2013>>x2014)&(x2015|x2016));

	if (t38 != 279475528LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2033 = INT16_MAX;
	int32_t x2035 = INT32_MIN;
	volatile uint32_t t39 = 18U;

	t39 = ((x2033>>x2034)&(x2035|x2036));

	if (t39 != 272U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2129 = UINT8_MAX;
	int16_t x2130 = 1;
	int16_t x2131 = INT16_MAX;
	int32_t t40 = 64698;

	t40 = ((x2129>>x2130)&(x2131|x2132));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2197 = 0;
	int8_t x2200 = -1;

	t41 = ((x2197>>x2198)&(x2199|x2200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2209 = 1533LLU;
	volatile int8_t x2210 = 0;
	int64_t x2212 = INT64_MAX;
	static volatile uint64_t t42 = 1364LLU;

	t42 = ((x2209>>x2210)&(x2211|x2212));

	if (t42 != 1533LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x2229 = 3498LLU;
	volatile int8_t x2230 = 0;
	uint8_t x2232 = 0U;
	volatile uint64_t t43 = 16398694024443821LLU;

	t43 = ((x2229>>x2230)&(x2231|x2232));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2246 = 19;
	int64_t x2247 = INT64_MIN;
	int16_t x2248 = -1;
	volatile int64_t t44 = 3LL;

	t44 = ((x2245>>x2246)&(x2247|x2248));

	if (t44 != 4095LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2265 = 853934;
	int8_t x2267 = INT8_MIN;
	int64_t x2268 = INT64_MAX;

	t45 = ((x2265>>x2266)&(x2267|x2268));

	if (t45 != 3LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2273 = 51U;
	int64_t x2276 = -1LL;
	uint64_t t46 = 7135LLU;

	t46 = ((x2273>>x2274)&(x2275|x2276));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2289 = 46977U;
	uint8_t x2290 = 4U;
	static volatile int16_t x2291 = -6105;
	uint16_t x2292 = UINT16_MAX;
	uint32_t t47 = 26U;

	t47 = ((x2289>>x2290)&(x2291|x2292));

	if (t47 != 2936U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2294 = 1U;
	int8_t x2296 = INT8_MAX;

	t48 = ((x2293>>x2294)&(x2295|x2296));

	if (t48 != 94) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x2325 = 4U;
	int32_t x2326 = 0;
	int8_t x2327 = INT8_MAX;
	volatile uint64_t t49 = 4366374236928620LLU;

	t49 = ((x2325>>x2326)&(x2327|x2328));

	if (t49 != 4LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2357 = 5;
	uint16_t x2358 = 28U;
	volatile uint32_t x2359 = 1862511279U;
	volatile uint32_t t50 = 25107U;

	t50 = ((x2357>>x2358)&(x2359|x2360));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2394 = 0;
	static int32_t x2395 = -1;
	static int32_t x2396 = -3434103;

	t51 = ((x2393>>x2394)&(x2395|x2396));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2417 = 10375LLU;
	uint16_t x2418 = 1U;
	int32_t x2419 = -1;
	uint64_t t52 = 253340400LLU;

	t52 = ((x2417>>x2418)&(x2419|x2420));

	if (t52 != 5187LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2509 = UINT8_MAX;
	uint32_t x2510 = 1U;
	static volatile int8_t x2511 = INT8_MIN;
	int32_t x2512 = -15;

	t53 = ((x2509>>x2510)&(x2511|x2512));

	if (t53 != 113) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2605 = INT32_MAX;
	uint8_t x2606 = 1U;
	int32_t x2607 = -1;
	static int32_t x2608 = 1278;
	volatile int32_t t54 = 17326160;

	t54 = ((x2605>>x2606)&(x2607|x2608));

	if (t54 != 1073741823) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2749 = 43U;
	int64_t x2750 = 1LL;
	volatile int64_t x2751 = 3338533370877LL;
	int64_t t55 = -82LL;

	t55 = ((x2749>>x2750)&(x2751|x2752));

	if (t55 != 21LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2813 = INT8_MAX;
	static uint32_t x2814 = 30U;
	int8_t x2815 = INT8_MIN;
	volatile uint32_t x2816 = 178U;
	uint32_t t56 = 208U;

	t56 = ((x2813>>x2814)&(x2815|x2816));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2897 = 811U;
	volatile int32_t x2898 = 4;
	int16_t x2900 = 245;

	t57 = ((x2897>>x2898)&(x2899|x2900));

	if (t57 != 50LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2982 = 2U;
	static int8_t x2983 = INT8_MAX;
	int64_t x2984 = INT64_MAX;
	uint64_t t58 = 11LLU;

	t58 = ((x2981>>x2982)&(x2983|x2984));

	if (t58 != 4033754923265311LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3210 = 11U;
	volatile int16_t x3211 = -130;
	static int64_t t59 = 3320982627651832LL;

	t59 = ((x3209>>x3210)&(x3211|x3212));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3291 = UINT16_MAX;
	static volatile uint32_t t60 = 10020U;

	t60 = ((x3289>>x3290)&(x3291|x3292));

	if (t60 != 41003U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3413 = UINT64_MAX;
	uint8_t x3414 = 3U;
	static volatile int64_t x3416 = INT64_MIN;

	t61 = ((x3413>>x3414)&(x3415|x3416));

	if (t61 != 53LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3493 = INT32_MAX;
	uint16_t x3496 = UINT16_MAX;
	volatile int32_t t62 = -19029012;

	t62 = ((x3493>>x3494)&(x3495|x3496));

	if (t62 != 268435455) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3749 = 55;
	static volatile uint16_t x3750 = 0U;
	int16_t x3751 = -1;
	volatile uint32_t x3752 = 796983U;
	static uint32_t t63 = 2695U;

	t63 = ((x3749>>x3750)&(x3751|x3752));

	if (t63 != 55U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3753 = 68U;
	static uint16_t x3754 = 6U;
	static int16_t x3755 = INT16_MIN;
	volatile int32_t t64 = -48;

	t64 = ((x3753>>x3754)&(x3755|x3756));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3769 = 4;
	uint8_t x3770 = 17U;
	int32_t x3771 = -1;
	static uint32_t x3772 = UINT32_MAX;
	uint32_t t65 = 31528U;

	t65 = ((x3769>>x3770)&(x3771|x3772));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3814 = 19;
	uint64_t t66 = 19335530599384LLU;

	t66 = ((x3813>>x3814)&(x3815|x3816));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3825 = INT16_MAX;
	uint16_t x3826 = 4U;
	volatile int32_t x3827 = -3;
	int16_t x3828 = -1;
	static int32_t t67 = -49639;

	t67 = ((x3825>>x3826)&(x3827|x3828));

	if (t67 != 2047) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3877 = INT8_MAX;
	uint16_t x3878 = 0U;
	uint8_t x3879 = 0U;
	static volatile int32_t t68 = -804;

	t68 = ((x3877>>x3878)&(x3879|x3880));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3896 = 30;
	uint64_t t69 = 427LLU;

	t69 = ((x3893>>x3894)&(x3895|x3896));

	if (t69 != 2196439054LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3921 = INT8_MAX;
	volatile uint8_t x3922 = 0U;
	volatile int8_t x3923 = 1;
	volatile int16_t x3924 = -301;
	static volatile int32_t t70 = -3044398;

	t70 = ((x3921>>x3922)&(x3923|x3924));

	if (t70 != 83) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3965 = INT16_MAX;
	int16_t x3966 = 3;
	static int32_t x3968 = INT32_MIN;
	static int32_t t71 = 237;

	t71 = ((x3965>>x3966)&(x3967|x3968));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4005 = INT8_MAX;
	uint8_t x4006 = 15U;
	uint8_t x4008 = 0U;

	t72 = ((x4005>>x4006)&(x4007|x4008));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4165 = 82386332326LLU;
	int16_t x4166 = 1;
	uint16_t x4168 = 12U;

	t73 = ((x4165>>x4166)&(x4167|x4168));

	if (t73 != 41193166163LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x4173 = INT64_MAX;
	int8_t x4174 = 1;
	uint32_t x4175 = 4U;

	t74 = ((x4173>>x4174)&(x4175|x4176));

	if (t74 != 255LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4181 = 25;
	int16_t x4182 = 1;
	int32_t x4183 = -892433046;
	volatile int32_t t75 = -1705;

	t75 = ((x4181>>x4182)&(x4183|x4184));

	if (t75 != 12) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4289 = 588972LL;
	uint8_t x4290 = 1U;
	int64_t x4291 = INT64_MIN;
	int64_t x4292 = 2238958961576641LL;

	t76 = ((x4289>>x4290)&(x4291|x4292));

	if (t76 != 19008LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4333 = 0U;
	uint8_t x4334 = 3U;
	uint8_t x4335 = 82U;
	static volatile int16_t x4336 = INT16_MIN;
	volatile int32_t t77 = 1;

	t77 = ((x4333>>x4334)&(x4335|x4336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4497 = 9U;
	int8_t x4498 = 1;
	int8_t x4499 = INT8_MIN;
	uint64_t x4500 = UINT64_MAX;
	volatile uint64_t t78 = 1573616736LLU;

	t78 = ((x4497>>x4498)&(x4499|x4500));

	if (t78 != 4LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4513 = 9U;
	volatile uint32_t x4514 = 20U;
	static int16_t x4515 = 0;
	int64_t x4516 = -1LL;
	int64_t t79 = -35340139170LL;

	t79 = ((x4513>>x4514)&(x4515|x4516));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x4525 = INT64_MAX;
	int16_t x4526 = 0;
	volatile int32_t x4528 = INT32_MAX;
	volatile uint64_t t80 = 3505LLU;

	t80 = ((x4525>>x4526)&(x4527|x4528));

	if (t80 != 2147483647LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x4546 = 17U;
	int8_t x4547 = INT8_MIN;
	int8_t x4548 = INT8_MAX;

	t81 = ((x4545>>x4546)&(x4547|x4548));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x4565 = 9;
	static uint16_t x4567 = 18U;
	uint16_t x4568 = UINT16_MAX;

	t82 = ((x4565>>x4566)&(x4567|x4568));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4613 = 1987U;
	int64_t x4615 = 7360476232LL;
	uint32_t x4616 = 1404256413U;
	static int64_t t83 = 289LL;

	t83 = ((x4613>>x4614)&(x4615|x4616));

	if (t83 != 193LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4641 = 11;
	int16_t x4642 = 5;
	int8_t x4643 = INT8_MIN;
	uint16_t x4644 = 653U;
	static volatile int32_t t84 = 84387405;

	t84 = ((x4641>>x4642)&(x4643|x4644));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4657 = 3U;
	uint64_t x4658 = 28LLU;
	uint64_t x4659 = 14476154669LLU;
	uint8_t x4660 = UINT8_MAX;
	volatile uint64_t t85 = 229065LLU;

	t85 = ((x4657>>x4658)&(x4659|x4660));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4757 = INT32_MAX;
	uint8_t x4758 = 5U;
	static int8_t x4759 = INT8_MIN;
	static uint32_t x4760 = 1446033201U;
	uint32_t t86 = 1277628396U;

	t86 = ((x4757>>x4758)&(x4759|x4760));

	if (t86 != 67108785U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4793 = UINT32_MAX;
	uint8_t x4794 = 0U;
	int16_t x4795 = INT16_MIN;
	int64_t x4796 = INT64_MIN;
	int64_t t87 = 868689000607662947LL;

	t87 = ((x4793>>x4794)&(x4795|x4796));

	if (t87 != 4294934528LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4837 = INT16_MAX;
	volatile uint16_t x4838 = 11U;
	volatile int32_t x4839 = -490702;
	int16_t x4840 = -3;
	volatile int32_t t88 = -13140;

	t88 = ((x4837>>x4838)&(x4839|x4840));

	if (t88 != 15) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4869 = 23;
	static volatile int64_t x4871 = INT64_MAX;
	static uint16_t x4872 = 104U;
	int64_t t89 = 7356772LL;

	t89 = ((x4869>>x4870)&(x4871|x4872));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4925 = INT64_MAX;
	uint64_t x4927 = 2447885367373346457LLU;
	volatile int32_t x4928 = 1;
	volatile uint64_t t90 = 1949LLU;

	t90 = ((x4925>>x4926)&(x4927|x4928));

	if (t90 != 2447885367373346457LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x4945 = 4773380670294LL;
	int16_t x4946 = 0;
	volatile uint64_t x4947 = 1971LLU;
	int8_t x4948 = INT8_MIN;
	uint64_t t91 = 11321652561615LLU;

	t91 = ((x4945>>x4946)&(x4947|x4948));

	if (t91 != 4773380670226LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4957 = 3U;
	int32_t x4958 = 1;
	uint8_t x4960 = 1U;

	t92 = ((x4957>>x4958)&(x4959|x4960));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x5001 = INT16_MAX;
	static uint16_t x5002 = 2U;
	uint8_t x5003 = 2U;

	t93 = ((x5001>>x5002)&(x5003|x5004));

	if (t93 != 8191U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x5153 = UINT16_MAX;
	uint64_t x5154 = 1LLU;
	int8_t x5156 = -7;
	uint64_t t94 = 638352LLU;

	t94 = ((x5153>>x5154)&(x5155|x5156));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x5161 = INT64_MAX;
	volatile int16_t x5162 = 3;
	int16_t x5163 = INT16_MIN;
	int8_t x5164 = -1;
	int64_t t95 = 14428534LL;

	t95 = ((x5161>>x5162)&(x5163|x5164));

	if (t95 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x5189 = 264731255LLU;
	volatile int8_t x5190 = 10;
	int16_t x5191 = 92;
	static uint8_t x5192 = 2U;

	t96 = ((x5189>>x5190)&(x5191|x5192));

	if (t96 != 94LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5241 = INT64_MAX;
	uint8_t x5242 = 3U;
	int8_t x5243 = -31;
	volatile int64_t t97 = -571266880183447959LL;

	t97 = ((x5241>>x5242)&(x5243|x5244));

	if (t97 != 1152921504606846945LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5329 = 196;
	static uint64_t x5330 = 10LLU;
	static int32_t x5331 = INT32_MAX;
	uint8_t x5332 = UINT8_MAX;
	static volatile int32_t t98 = -44051;

	t98 = ((x5329>>x5330)&(x5331|x5332));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5345 = 13;
	int8_t x5346 = 1;
	int32_t x5348 = 1826805;
	int32_t t99 = -59180463;

	t99 = ((x5345>>x5346)&(x5347|x5348));

	if (t99 != 4) { NG(); } else { ; }
	
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

