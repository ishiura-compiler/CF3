#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 942U;
static uint16_t x4 = 0U;
int64_t x11 = INT64_MAX;
uint32_t x19 = 63711163U;
volatile int8_t x169 = 50;
uint16_t x225 = 219U;
volatile int16_t x227 = -1;
int32_t x228 = 1;
volatile uint32_t t6 = 50152U;
int16_t x305 = INT16_MAX;
uint16_t x337 = 926U;
static volatile uint64_t t8 = 37LLU;
static volatile uint64_t x449 = 716894287LLU;
uint8_t x452 = 39U;
volatile int8_t x530 = -1;
uint32_t t13 = 3799U;
uint8_t x560 = 30U;
volatile int8_t x596 = 44;
static int8_t x598 = INT8_MIN;
uint8_t x736 = 1U;
uint16_t x741 = 9451U;
int16_t x742 = 1;
int32_t x744 = 3;
static volatile int32_t t20 = 638551199;
int64_t x822 = INT64_MIN;
int32_t x946 = -185;
int16_t x1019 = -1;
uint8_t x1035 = 24U;
uint64_t x1101 = UINT64_MAX;
volatile uint64_t t27 = 1381427827LLU;
int32_t x1154 = INT32_MAX;
volatile int64_t t28 = 17069530994LL;
static int32_t x1191 = INT32_MIN;
int8_t x1192 = 1;
uint32_t x1258 = 2347528U;
int64_t t30 = 510352376734LL;
static int64_t x1461 = INT64_MIN;
volatile uint16_t x1464 = 1U;
int64_t x1503 = INT64_MIN;
uint64_t t33 = 30824804168167642LLU;
int64_t x1603 = 2LL;
uint32_t x1799 = 24835435U;
volatile int32_t x1827 = -275;
static int32_t t49 = 310275;
int16_t x2179 = -365;
volatile int64_t x2267 = -1LL;
volatile int64_t t51 = -2417798LL;
int32_t x2327 = -1;
volatile int64_t t53 = -13039LL;
volatile uint32_t t54 = 1619U;
uint64_t t55 = 3483721232LLU;
uint64_t t56 = 706965425223212990LLU;
int8_t x2618 = -17;
volatile uint64_t x2705 = 1116LLU;
static uint64_t x2721 = UINT64_MAX;
static volatile int64_t x2723 = -1LL;
int8_t x2724 = 62;
static volatile uint64_t t62 = 53611LLU;
uint8_t x2781 = UINT8_MAX;
volatile int16_t x2783 = -139;
volatile int32_t t63 = 425448;
static int64_t x2807 = 546627LL;
int64_t x2861 = INT64_MAX;
static volatile int64_t t67 = 12LL;
static int64_t t68 = 30957LL;
int64_t x2874 = -1LL;
volatile int64_t t72 = 69392631691117395LL;
uint8_t x3103 = 1U;
int32_t x3187 = -1;
static uint64_t x3222 = 3384404589831LLU;
volatile uint64_t t75 = 1983066012LLU;
volatile int64_t t76 = 8LL;
uint16_t x3303 = 672U;
uint8_t x3304 = 0U;
uint64_t x3329 = 2324770786334853022LLU;
volatile uint8_t x3330 = UINT8_MAX;
static uint64_t t78 = 29778LLU;
static int8_t x3404 = 3;
volatile uint8_t x3411 = UINT8_MAX;
static volatile uint16_t x3412 = 0U;
static int8_t x3471 = INT8_MIN;
static volatile uint32_t t85 = 1907764694U;
uint16_t x3521 = 0U;
static volatile int8_t x3539 = -8;
static int16_t x3546 = 0;
volatile int64_t x3557 = 7LL;
uint16_t x3589 = 138U;
volatile int8_t x3591 = -3;
volatile uint32_t t90 = 7650096U;
static volatile uint32_t x3662 = 1333308U;
volatile uint32_t t91 = 1U;
int16_t x3690 = -1;
uint32_t x3692 = 6U;
uint8_t x3749 = 5U;
static int32_t t93 = -67262;
static uint8_t x3805 = UINT8_MAX;
uint16_t x3807 = 4283U;
uint64_t t94 = 594LLU;
int8_t x3922 = 0;
static volatile uint64_t t97 = 1480512307LLU;
uint64_t x3950 = 149525647802LLU;
int16_t x3952 = 0;
volatile int16_t x3963 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 866997119U;
	int8_t x2 = 0;
	uint32_t t0 = 295U;

	t0 = (((x1-x2)%x3)<<x4);

	if (t0 != 101U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 405U;
	volatile int8_t x10 = INT8_MAX;
	uint8_t x12 = 1U;
	volatile int64_t t1 = -3LL;

	t1 = (((x9-x10)%x11)<<x12);

	if (t1 != 556LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 3080U;
	volatile int16_t x18 = 6435;
	volatile uint8_t x20 = 1U;
	volatile uint32_t t2 = 40825U;

	t2 = (((x17-x18)%x19)<<x20);

	if (t2 != 52632040U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x117 = 1U;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	uint32_t x120 = 6U;
	static uint32_t t3 = 53U;

	t3 = (((x117-x118)%x119)<<x120);

	if (t3 != 128U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x170 = 5U;
	int16_t x171 = -1;
	uint8_t x172 = 3U;
	static volatile int32_t t4 = -5681697;

	t4 = (((x169-x170)%x171)<<x172);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x226 = UINT64_MAX;
	uint64_t t5 = 1358918315303008LLU;

	t5 = (((x225-x226)%x227)<<x228);

	if (t5 != 440LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x253 = INT8_MIN;
	volatile uint32_t x254 = 1709081U;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = 8LLU;

	t6 = (((x253-x254)%x255)<<x256);

	if (t6 != 3857409792U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x306 = 7427LLU;
	int16_t x307 = -13829;
	static uint8_t x308 = 0U;
	static volatile uint64_t t7 = 235351102845907039LLU;

	t7 = (((x305-x306)%x307)<<x308);

	if (t7 != 25340LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x338 = 15233256;
	uint64_t x339 = 35879490990155251LLU;
	volatile int8_t x340 = 58;

	t8 = (((x337-x338)%x339)<<x340);

	if (t8 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x357 = UINT8_MAX;
	int16_t x358 = INT16_MAX;
	static int64_t x359 = -1LL;
	uint32_t x360 = 0U;
	volatile int64_t t9 = 2210557LL;

	t9 = (((x357-x358)%x359)<<x360);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x389 = 0;
	uint32_t x390 = 1U;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 6U;
	volatile uint32_t t10 = 38884U;

	t10 = (((x389-x390)%x391)<<x392);

	if (t10 != 4294967232U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x450 = UINT32_MAX;
	int64_t x451 = -1LL;
	uint64_t t11 = 381777LLU;

	t11 = (((x449-x450)%x451)<<x452);

	if (t11 != 6735177223197687808LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x493 = INT8_MIN;
	uint64_t x494 = 180529LLU;
	static volatile int16_t x495 = -41;
	volatile uint8_t x496 = 52U;
	volatile uint64_t t12 = 2725965418426982LLU;

	t12 = (((x493-x494)%x495)<<x496);

	if (t12 != 16496685435058126848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x529 = INT16_MIN;
	uint32_t x531 = 7402U;
	uint8_t x532 = 1U;

	t13 = (((x529-x530)%x531)<<x532);

	if (t13 != 10902U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x557 = INT16_MAX;
	static int16_t x558 = INT16_MAX;
	int16_t x559 = -2;
	int32_t t14 = -19;

	t14 = (((x557-x558)%x559)<<x560);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x585 = -1LL;
	int32_t x586 = INT32_MAX;
	int8_t x587 = INT8_MIN;
	uint8_t x588 = 13U;
	int64_t t15 = -16194305549923229LL;

	t15 = (((x585-x586)%x587)<<x588);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x593 = UINT16_MAX;
	uint8_t x594 = 16U;
	int64_t x595 = INT64_MIN;
	int64_t t16 = 381848LL;

	t16 = (((x593-x594)%x595)<<x596);

	if (t16 != 1152622437444091904LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x597 = 12U;
	uint16_t x599 = 73U;
	uint32_t x600 = 10U;
	int32_t t17 = -9396;

	t17 = (((x597-x598)%x599)<<x600);

	if (t17 != 68608) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x733 = 2962LLU;
	uint8_t x734 = 1U;
	uint32_t x735 = 2U;
	static volatile uint64_t t18 = 203493844913248936LLU;

	t18 = (((x733-x734)%x735)<<x736);

	if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x743 = INT16_MIN;
	volatile int32_t t19 = -824242;

	t19 = (((x741-x742)%x743)<<x744);

	if (t19 != 75600) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x757 = INT32_MAX;
	int32_t x758 = INT32_MAX;
	int32_t x759 = -1;
	volatile int8_t x760 = 6;

	t20 = (((x757-x758)%x759)<<x760);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x821 = -25739452212939LL;
	uint32_t x823 = UINT32_MAX;
	int8_t x824 = 3;
	int64_t t21 = 93513762979800645LL;

	t21 = (((x821-x822)%x823)<<x824);

	if (t21 != 19474157152LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x889 = 26437U;
	uint64_t x890 = 30250LLU;
	static int8_t x891 = INT8_MIN;
	volatile uint8_t x892 = 5U;
	static volatile uint64_t t22 = 1394047164288LLU;

	t22 = (((x889-x890)%x891)<<x892);

	if (t22 != 18446744073709429600LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x945 = 0LLU;
	static int8_t x947 = 38;
	int8_t x948 = 2;
	volatile uint64_t t23 = 8326147005LLU;

	t23 = (((x945-x946)%x947)<<x948);

	if (t23 != 132LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x985 = 862493LLU;
	uint8_t x986 = UINT8_MAX;
	static int16_t x987 = -19;
	static int8_t x988 = 0;
	volatile uint64_t t24 = 1000327840832LLU;

	t24 = (((x985-x986)%x987)<<x988);

	if (t24 != 862238LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x1017 = INT32_MIN;
	int8_t x1018 = INT8_MIN;
	static int8_t x1020 = 0;
	volatile int32_t t25 = 24290;

	t25 = (((x1017-x1018)%x1019)<<x1020);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1033 = -1;
	static int32_t x1034 = INT32_MIN;
	volatile int64_t x1036 = 2LL;
	volatile int32_t t26 = -1445;

	t26 = (((x1033-x1034)%x1035)<<x1036);

	if (t26 != 28) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1102 = 1717011733U;
	volatile int64_t x1103 = -124751LL;
	static int8_t x1104 = 26;

	t27 = (((x1101-x1102)%x1103)<<x1104);

	if (t27 != 18331517366766141440LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1153 = -28896613697LL;
	static int32_t x1155 = -1;
	static int16_t x1156 = 0;

	t28 = (((x1153-x1154)%x1155)<<x1156);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1189 = 1589966043550523LLU;
	static uint64_t x1190 = UINT64_MAX;
	static uint64_t t29 = 2069876LLU;

	t29 = (((x1189-x1190)%x1191)<<x1192);

	if (t29 != 3179932087101048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1257 = -23;
	static int64_t x1259 = INT64_MIN;
	static uint8_t x1260 = 2U;

	t30 = (((x1257-x1258)%x1259)<<x1260);

	if (t30 != 17170478980LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1333 = 1237856346894LLU;
	volatile int32_t x1334 = -1;
	int16_t x1335 = INT16_MIN;
	int8_t x1336 = 0;
	static volatile uint64_t t31 = 591716LLU;

	t31 = (((x1333-x1334)%x1335)<<x1336);

	if (t31 != 1237856346895LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1462 = 0U;
	volatile uint64_t x1463 = 3569517127853332LLU;
	volatile uint64_t t32 = 234344426129100767LLU;

	t32 = (((x1461-x1462)%x1463)<<x1464);

	if (t32 != 6618591219238504LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1501 = 56U;
	uint64_t x1502 = 76842294LLU;
	uint16_t x1504 = 2U;

	t33 = (((x1501-x1502)%x1503)<<x1504);

	if (t33 != 18446744073402182664LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1561 = INT32_MIN;
	int8_t x1562 = -10;
	volatile int32_t x1563 = -1;
	static int16_t x1564 = 1;
	volatile int32_t t34 = 35;

	t34 = (((x1561-x1562)%x1563)<<x1564);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1573 = INT8_MIN;
	volatile int64_t x1574 = -2041676934327798079LL;
	static volatile int16_t x1575 = -596;
	volatile int8_t x1576 = 1;
	int64_t t35 = -69841268937LL;

	t35 = (((x1573-x1574)%x1575)<<x1576);

	if (t35 != 1190LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1601 = UINT32_MAX;
	volatile uint16_t x1602 = 1U;
	uint8_t x1604 = 45U;
	static volatile int64_t t36 = 519364LL;

	t36 = (((x1601-x1602)%x1603)<<x1604);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1729 = -65544748292LL;
	int16_t x1730 = INT16_MIN;
	volatile uint64_t x1731 = UINT64_MAX;
	uint16_t x1732 = 0U;
	volatile uint64_t t37 = 37802LLU;

	t37 = (((x1729-x1730)%x1731)<<x1732);

	if (t37 != 18446744008164836092LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1773 = 147U;
	int8_t x1774 = -1;
	int32_t x1775 = -1;
	int8_t x1776 = 4;
	volatile int32_t t38 = 2617;

	t38 = (((x1773-x1774)%x1775)<<x1776);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1797 = 135U;
	int16_t x1798 = INT16_MIN;
	static int8_t x1800 = 6;
	volatile uint32_t t39 = 253U;

	t39 = (((x1797-x1798)%x1799)<<x1800);

	if (t39 != 2105792U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x1825 = 5606U;
	volatile int64_t x1826 = -1LL;
	uint8_t x1828 = 21U;
	volatile int64_t t40 = -345LL;

	t40 = (((x1825-x1826)%x1827)<<x1828);

	if (t40 != 224395264LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1845 = UINT64_MAX;
	int8_t x1846 = INT8_MIN;
	int32_t x1847 = INT32_MIN;
	static uint32_t x1848 = 9U;
	volatile uint64_t t41 = 467370735259088LLU;

	t41 = (((x1845-x1846)%x1847)<<x1848);

	if (t41 != 65024LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1921 = 2075365U;
	static int32_t x1922 = INT32_MIN;
	uint16_t x1923 = 33U;
	int32_t x1924 = 4;
	volatile uint32_t t42 = 683090U;

	t42 = (((x1921-x1922)%x1923)<<x1924);

	if (t42 != 480U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x1929 = INT8_MIN;
	uint16_t x1930 = 41U;
	int32_t x1931 = -1;
	static uint8_t x1932 = 9U;
	int32_t t43 = 73306;

	t43 = (((x1929-x1930)%x1931)<<x1932);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1937 = 937155193947958LLU;
	static int16_t x1938 = INT16_MAX;
	int8_t x1939 = -57;
	static uint16_t x1940 = 56U;
	static volatile uint64_t t44 = 28LLU;

	t44 = (((x1937-x1938)%x1939)<<x1940);

	if (t44 != 3963167672086036480LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1993 = INT32_MIN;
	static uint64_t x1994 = UINT64_MAX;
	volatile int16_t x1995 = 1555;
	uint8_t x1996 = 0U;
	uint64_t t45 = 2LLU;

	t45 = (((x1993-x1994)%x1995)<<x1996);

	if (t45 != 484LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2005 = 26;
	int16_t x2006 = INT16_MIN;
	int32_t x2007 = 1154;
	static uint8_t x2008 = 2U;
	volatile int32_t t46 = -84;

	t46 = (((x2005-x2006)%x2007)<<x2008);

	if (t46 != 1928) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2057 = 0U;
	volatile uint32_t x2058 = UINT32_MAX;
	static volatile uint32_t x2059 = UINT32_MAX;
	int8_t x2060 = 1;
	uint32_t t47 = 185338U;

	t47 = (((x2057-x2058)%x2059)<<x2060);

	if (t47 != 2U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2137 = UINT8_MAX;
	uint64_t x2138 = UINT64_MAX;
	uint32_t x2139 = 37254277U;
	int8_t x2140 = 25;
	uint64_t t48 = 3431887029LLU;

	t48 = (((x2137-x2138)%x2139)<<x2140);

	if (t48 != 8589934592LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2157 = INT8_MIN;
	static int8_t x2158 = -8;
	int16_t x2159 = -1;
	uint8_t x2160 = 5U;

	t49 = (((x2157-x2158)%x2159)<<x2160);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2177 = UINT64_MAX;
	int32_t x2178 = 6;
	uint8_t x2180 = 56U;
	volatile uint64_t t50 = 4300074026284663238LLU;

	t50 = (((x2177-x2178)%x2179)<<x2180);

	if (t50 != 7349874591868649472LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2265 = 72581740505408175LL;
	static int8_t x2266 = -31;
	static uint8_t x2268 = 19U;

	t51 = (((x2265-x2266)%x2267)<<x2268);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2325 = -3405;
	static int32_t x2326 = -1;
	static int32_t x2328 = 25;
	int32_t t52 = 154241097;

	t52 = (((x2325-x2326)%x2327)<<x2328);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2353 = INT64_MIN;
	static volatile int16_t x2354 = INT16_MIN;
	static volatile uint32_t x2355 = 480U;
	int16_t x2356 = 1;

	t53 = (((x2353-x2354)%x2355)<<x2356);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2457 = -2;
	uint32_t x2458 = 15U;
	static volatile int32_t x2459 = 7125;
	uint8_t x2460 = 7U;

	t54 = (((x2457-x2458)%x2459)<<x2460);

	if (t54 != 387712U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2505 = 22987LLU;
	int32_t x2506 = -1;
	int8_t x2507 = INT8_MIN;
	int32_t x2508 = 22;

	t55 = (((x2505-x2506)%x2507)<<x2508);

	if (t55 != 96418660352LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2581 = UINT64_MAX;
	int64_t x2582 = INT64_MIN;
	volatile int64_t x2583 = -64647350LL;
	int32_t x2584 = 9;

	t56 = (((x2581-x2582)%x2583)<<x2584);

	if (t56 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x2617 = 751699095369LLU;
	volatile uint32_t x2619 = UINT32_MAX;
	uint8_t x2620 = 4U;
	volatile uint64_t t57 = 242365207063716719LLU;

	t57 = (((x2617-x2618)%x2619)<<x2620);

	if (t57 != 1277100176LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2697 = -1;
	int16_t x2698 = INT16_MIN;
	int16_t x2699 = INT16_MAX;
	static uint32_t x2700 = 0U;
	static int32_t t58 = -134;

	t58 = (((x2697-x2698)%x2699)<<x2700);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x2706 = -83;
	int16_t x2707 = INT16_MIN;
	volatile int8_t x2708 = 0;
	uint64_t t59 = 314228184084685941LLU;

	t59 = (((x2705-x2706)%x2707)<<x2708);

	if (t59 != 1199LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2722 = 24U;
	uint64_t t60 = 10546LLU;

	t60 = (((x2721-x2722)%x2723)<<x2724);

	if (t60 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2725 = 3689U;
	int8_t x2726 = INT8_MIN;
	int16_t x2727 = -2;
	uint32_t x2728 = 3U;
	int32_t t61 = -1338922;

	t61 = (((x2725-x2726)%x2727)<<x2728);

	if (t61 != 8) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x2757 = 9614396990LLU;
	uint8_t x2758 = 80U;
	int16_t x2759 = INT16_MAX;
	uint8_t x2760 = 0U;

	t62 = (((x2757-x2758)%x2759)<<x2760);

	if (t62 != 2071LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2782 = -7175;
	int32_t x2784 = 0;

	t63 = (((x2781-x2782)%x2783)<<x2784);

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2805 = INT8_MAX;
	static int32_t x2806 = -1;
	int8_t x2808 = 43;
	volatile int64_t t64 = 2701748844458LL;

	t64 = (((x2805-x2806)%x2807)<<x2808);

	if (t64 != 1125899906842624LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2813 = INT32_MAX;
	uint8_t x2814 = UINT8_MAX;
	static int64_t x2815 = INT64_MIN;
	volatile uint8_t x2816 = 2U;
	int64_t t65 = 96211855487LL;

	t65 = (((x2813-x2814)%x2815)<<x2816);

	if (t65 != 8589933568LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x2845 = 372U;
	uint8_t x2846 = 108U;
	int32_t x2847 = INT32_MIN;
	volatile int64_t x2848 = 0LL;
	volatile int32_t t66 = 2712904;

	t66 = (((x2845-x2846)%x2847)<<x2848);

	if (t66 != 264) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2862 = 18U;
	uint32_t x2863 = UINT32_MAX;
	uint8_t x2864 = 7U;

	t67 = (((x2861-x2862)%x2863)<<x2864);

	if (t67 != 274877904512LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2865 = -2421;
	int64_t x2866 = -42644581LL;
	int32_t x2867 = INT32_MAX;
	uint16_t x2868 = 23U;

	t68 = (((x2865-x2866)%x2867)<<x2868);

	if (t68 != 357708364513280LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2873 = 1;
	uint32_t x2875 = 405U;
	static volatile uint8_t x2876 = 1U;
	int64_t t69 = -1516114904258863LL;

	t69 = (((x2873-x2874)%x2875)<<x2876);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2921 = 3LLU;
	uint16_t x2922 = 1U;
	uint16_t x2923 = 27U;
	volatile uint32_t x2924 = 0U;
	volatile uint64_t t70 = 332223244LLU;

	t70 = (((x2921-x2922)%x2923)<<x2924);

	if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2985 = INT32_MIN;
	int8_t x2986 = 0;
	int8_t x2987 = -1;
	uint16_t x2988 = 21U;
	int32_t t71 = 785;

	t71 = (((x2985-x2986)%x2987)<<x2988);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3021 = 115808645LL;
	int16_t x3022 = -10;
	int32_t x3023 = 341435;
	int16_t x3024 = 3;

	t72 = (((x3021-x3022)%x3023)<<x3024);

	if (t72 != 497520LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3101 = INT32_MIN;
	int64_t x3102 = 148849267092LL;
	volatile uint8_t x3104 = 19U;
	int64_t t73 = 7318490394LL;

	t73 = (((x3101-x3102)%x3103)<<x3104);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x3185 = INT16_MIN;
	int16_t x3186 = INT16_MIN;
	volatile uint8_t x3188 = 0U;
	volatile int32_t t74 = -4456;

	t74 = (((x3185-x3186)%x3187)<<x3188);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3221 = INT64_MIN;
	volatile uint16_t x3223 = 4924U;
	int8_t x3224 = 1;

	t75 = (((x3221-x3222)%x3223)<<x3224);

	if (t75 != 3314LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3237 = INT64_MAX;
	static uint32_t x3238 = 72170284U;
	int32_t x3239 = 10420386;
	int32_t x3240 = 14;

	t76 = (((x3237-x3238)%x3239)<<x3240);

	if (t76 != 148237271040LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3301 = 3LLU;
	static uint8_t x3302 = 2U;
	uint64_t t77 = 671812713931492LLU;

	t77 = (((x3301-x3302)%x3303)<<x3304);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3331 = -1;
	int32_t x3332 = 2;

	t78 = (((x3329-x3330)%x3331)<<x3332);

	if (t78 != 9299083145339411068LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3385 = 354877325617987LL;
	volatile int16_t x3386 = INT16_MAX;
	static uint64_t x3387 = 51576LLU;
	uint16_t x3388 = 29U;
	volatile uint64_t t79 = 602531050674LLU;

	t79 = (((x3385-x3386)%x3387)<<x3388);

	if (t79 != 20325932728320LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x3401 = 2630U;
	static volatile int16_t x3402 = INT16_MIN;
	static int32_t x3403 = 40;
	volatile uint32_t t80 = 1154453024U;

	t80 = (((x3401-x3402)%x3403)<<x3404);

	if (t80 != 304U) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3409 = INT16_MAX;
	volatile int32_t x3410 = INT32_MAX;
	static int32_t t81 = 2698419;

	t81 = (((x3409-x3410)%x3411)<<x3412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x3425 = 45U;
	int16_t x3426 = -1;
	int64_t x3427 = INT64_MIN;
	volatile uint8_t x3428 = 3U;
	static int64_t t82 = 11289152LL;

	t82 = (((x3425-x3426)%x3427)<<x3428);

	if (t82 != 368LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3433 = 2244;
	uint32_t x3434 = 50U;
	static volatile int16_t x3435 = -1;
	uint8_t x3436 = 0U;
	uint32_t t83 = 2214811U;

	t83 = (((x3433-x3434)%x3435)<<x3436);

	if (t83 != 2194U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3437 = 334;
	uint32_t x3438 = 61U;
	static int16_t x3439 = INT16_MIN;
	volatile uint16_t x3440 = 2U;
	uint32_t t84 = 10719U;

	t84 = (((x3437-x3438)%x3439)<<x3440);

	if (t84 != 1092U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x3469 = UINT32_MAX;
	int16_t x3470 = 0;
	uint32_t x3472 = 1U;

	t85 = (((x3469-x3470)%x3471)<<x3472);

	if (t85 != 254U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3522 = 0;
	volatile int16_t x3523 = INT16_MIN;
	int64_t x3524 = 31LL;
	volatile int32_t t86 = -84370;

	t86 = (((x3521-x3522)%x3523)<<x3524);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3537 = 21957030265LLU;
	volatile int64_t x3538 = 19379875967861466LL;
	static volatile int8_t x3540 = 1;
	uint64_t t87 = 172171943614893452LLU;

	t87 = (((x3537-x3538)%x3539)<<x3540);

	if (t87 != 18407984365687889214LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x3545 = 15U;
	int16_t x3547 = 215;
	int16_t x3548 = 1;
	int32_t t88 = 70941;

	t88 = (((x3545-x3546)%x3547)<<x3548);

	if (t88 != 30) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3558 = 0U;
	uint8_t x3559 = UINT8_MAX;
	int8_t x3560 = 0;
	volatile int64_t t89 = -349529LL;

	t89 = (((x3557-x3558)%x3559)<<x3560);

	if (t89 != 7LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x3590 = UINT32_MAX;
	uint8_t x3592 = 0U;

	t90 = (((x3589-x3590)%x3591)<<x3592);

	if (t90 != 139U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x3661 = -20;
	int8_t x3663 = 8;
	static int8_t x3664 = 0;

	t91 = (((x3661-x3662)%x3663)<<x3664);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x3689 = UINT16_MAX;
	volatile int64_t x3691 = -3092408080381LL;
	int64_t t92 = 2413906127763337510LL;

	t92 = (((x3689-x3690)%x3691)<<x3692);

	if (t92 != 4194304LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x3750 = INT8_MIN;
	static int8_t x3751 = -1;
	int8_t x3752 = 3;

	t93 = (((x3749-x3750)%x3751)<<x3752);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x3806 = UINT64_MAX;
	uint16_t x3808 = 27U;

	t94 = (((x3805-x3806)%x3807)<<x3808);

	if (t94 != 34359738368LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3857 = INT8_MIN;
	volatile int16_t x3858 = -6;
	uint64_t x3859 = 26143331633675LLU;
	static volatile int8_t x3860 = 1;
	volatile uint64_t t95 = 3830641681LLU;

	t95 = (((x3857-x3858)%x3859)<<x3860);

	if (t95 != 18545976942988LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x3889 = 1671621900679020LL;
	int8_t x3890 = -1;
	int32_t x3891 = -241;
	uint16_t x3892 = 1U;
	int64_t t96 = 28912897113081LL;

	t96 = (((x3889-x3890)%x3891)<<x3892);

	if (t96 != 24LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3921 = 21;
	static uint64_t x3923 = 2735516215LLU;
	int32_t x3924 = 3;

	t97 = (((x3921-x3922)%x3923)<<x3924);

	if (t97 != 168LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x3949 = UINT32_MAX;
	uint8_t x3951 = 29U;
	uint64_t t98 = 7923023073LLU;

	t98 = (((x3949-x3950)%x3951)<<x3952);

	if (t98 != 17LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x3961 = 8U;
	uint16_t x3962 = 3U;
	static uint32_t x3964 = 5U;
	int32_t t99 = -59662062;

	t99 = (((x3961-x3962)%x3963)<<x3964);

	if (t99 != 160) { NG(); } else { ; }
	
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

