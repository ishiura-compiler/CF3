#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x64 = INT16_MAX;
uint8_t x116 = 24U;
static uint64_t t2 = 462886LLU;
volatile uint8_t x223 = 0U;
int32_t x224 = 405921;
int64_t x225 = 6946511LL;
static volatile uint32_t t7 = 4580U;
uint8_t x453 = 1U;
int8_t x455 = 26;
uint8_t x457 = UINT8_MAX;
int8_t x493 = INT8_MIN;
int8_t x496 = INT8_MIN;
static int16_t x530 = 41;
int64_t x532 = -1LL;
static uint16_t x596 = 22552U;
int64_t x722 = INT64_MAX;
volatile int32_t x827 = 0;
uint32_t t22 = 6U;
static uint32_t x885 = UINT32_MAX;
uint8_t x886 = 1U;
uint64_t x888 = UINT64_MAX;
volatile uint32_t t25 = 282810184U;
static int8_t x1029 = INT8_MIN;
int64_t x1030 = -17LL;
int16_t x1032 = -1;
volatile uint8_t x1115 = 8U;
static uint16_t x1165 = 113U;
int16_t x1197 = -1410;
uint8_t x1200 = 3U;
static uint8_t x1243 = 9U;
uint64_t t30 = 26516592389LLU;
static uint32_t x1389 = 2U;
volatile int64_t t32 = -15589248727494236LL;
static int8_t x1636 = -1;
volatile uint32_t t37 = 624189292U;
int64_t x1766 = INT64_MIN;
static int64_t t39 = 56919993509049229LL;
int32_t x1868 = INT32_MIN;
int16_t x1889 = INT16_MIN;
static volatile int16_t x2015 = 55;
uint64_t x2017 = UINT64_MAX;
volatile int32_t x2058 = -1;
static uint16_t x2183 = 1U;
volatile int8_t x2227 = 0;
int64_t x2260 = 2263411636LL;
int32_t x2268 = INT32_MAX;
int16_t x2409 = -355;
int32_t x2458 = INT32_MIN;
volatile uint8_t x2547 = 1U;
int64_t x2561 = -18396457242842LL;
volatile uint32_t x2564 = UINT32_MAX;
int8_t x2600 = INT8_MIN;
static int32_t t58 = -6610079;
int8_t x2671 = 30;
static uint32_t x2687 = 7U;
volatile int16_t x2809 = INT16_MIN;
uint64_t x2810 = 1667968000LLU;
int8_t x2820 = 1;
volatile uint64_t t66 = 5027229443169LLU;
int8_t x2928 = -3;
uint32_t t67 = 125890279U;
int32_t x3057 = -1;
int8_t x3060 = INT8_MAX;
uint16_t x3063 = 1U;
int64_t x3064 = INT64_MAX;
int64_t t69 = 193338220830739564LL;
uint64_t t70 = 2242LLU;
uint16_t x3358 = 156U;
int16_t x3412 = -1;
static volatile int64_t t76 = -225690643323000LL;
volatile int8_t x3417 = 11;
uint64_t t77 = 130LLU;
uint8_t x3528 = UINT8_MAX;
volatile uint32_t x3537 = 497410U;
int16_t x3539 = 1;
int8_t x3680 = -3;
volatile int8_t x3715 = 3;
volatile int8_t x3859 = 1;
volatile int64_t t83 = 7749071914114LL;
uint32_t x3905 = 7669662U;
volatile int64_t x4086 = -1LL;
static uint8_t x4282 = UINT8_MAX;
int8_t x4283 = 1;
uint64_t t92 = 55912397LLU;
uint64_t x4378 = UINT64_MAX;
int64_t x4380 = -485552483357LL;
volatile int64_t t96 = -20943619206LL;
static int8_t x4530 = INT8_MAX;


void f0(void) {
	static int8_t x61 = INT8_MIN;
	int32_t x62 = INT32_MAX;
	int64_t x63 = 1LL;
	int32_t t0 = 728303034;

	t0 = (((x61/x62)<<x63)%x64);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x113 = 16130176;
	static int64_t x114 = -138137435852LL;
	uint16_t x115 = 5U;
	int64_t t1 = -4913587LL;

	t1 = (((x113/x114)<<x115)%x116);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x129 = INT8_MIN;
	volatile uint64_t x130 = 8393189707787LLU;
	static uint8_t x131 = 6U;
	int8_t x132 = INT8_MIN;

	t2 = (((x129/x130)<<x131)%x132);

	if (t2 != 140660608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x221 = -50;
	volatile int32_t x222 = INT32_MAX;
	volatile int32_t t3 = -58;

	t3 = (((x221/x222)<<x223)%x224);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x226 = 3U;
	static volatile int8_t x227 = 1;
	volatile uint16_t x228 = 139U;
	volatile int64_t t4 = -181928241LL;

	t4 = (((x225/x226)<<x227)%x228);

	if (t4 != 82LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x257 = INT8_MAX;
	static int64_t x258 = -429042315011278LL;
	int8_t x259 = 19;
	static int8_t x260 = INT8_MIN;
	volatile int64_t t5 = -105054444LL;

	t5 = (((x257/x258)<<x259)%x260);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x301 = -1;
	int64_t x302 = 98343102864033LL;
	uint8_t x303 = 22U;
	uint16_t x304 = 6814U;
	int64_t t6 = 27958827091849166LL;

	t6 = (((x301/x302)<<x303)%x304);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x405 = 1161U;
	uint32_t x406 = UINT32_MAX;
	static volatile uint8_t x407 = 3U;
	int8_t x408 = -1;

	t7 = (((x405/x406)<<x407)%x408);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x417 = 2;
	uint16_t x418 = 22378U;
	volatile uint8_t x419 = 29U;
	int64_t x420 = INT64_MAX;
	volatile int64_t t8 = -7294443LL;

	t8 = (((x417/x418)<<x419)%x420);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x454 = INT16_MIN;
	static volatile int16_t x456 = -1;
	volatile int32_t t9 = -27021729;

	t9 = (((x453/x454)<<x455)%x456);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x458 = 269593617667336LLU;
	int64_t x459 = 1LL;
	static int16_t x460 = -1;
	volatile uint64_t t10 = 1962983363402795LLU;

	t10 = (((x457/x458)<<x459)%x460);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x494 = 1383073526196LLU;
	static uint16_t x495 = 0U;
	volatile uint64_t t11 = 1664681847307LLU;

	t11 = (((x493/x494)<<x495)%x496);

	if (t11 != 13337500LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x521 = -1;
	uint64_t x522 = 381230656LLU;
	int16_t x523 = 10;
	volatile uint16_t x524 = 488U;
	uint64_t t12 = 271876102196LLU;

	t12 = (((x521/x522)<<x523)%x524);

	if (t12 != 136LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x529 = 65505999LLU;
	uint8_t x531 = 5U;
	uint64_t t13 = 19249738LLU;

	t13 = (((x529/x530)<<x531)%x532);

	if (t13 != 51126624LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x581 = -1;
	int16_t x582 = -1;
	int8_t x583 = 0;
	int32_t x584 = 1045376;
	int32_t t14 = -24771;

	t14 = (((x581/x582)<<x583)%x584);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x593 = INT8_MIN;
	int32_t x594 = INT32_MIN;
	volatile uint8_t x595 = 0U;
	volatile int32_t t15 = -21081;

	t15 = (((x593/x594)<<x595)%x596);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x613 = -1;
	int32_t x614 = INT32_MAX;
	int32_t x615 = 11;
	volatile uint64_t x616 = 1300395254354LLU;
	volatile uint64_t t16 = 703180LLU;

	t16 = (((x613/x614)<<x615)%x616);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x641 = 1U;
	int8_t x642 = 5;
	uint16_t x643 = 27U;
	uint8_t x644 = UINT8_MAX;
	int32_t t17 = -233;

	t17 = (((x641/x642)<<x643)%x644);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x677 = -404LL;
	int32_t x678 = INT32_MIN;
	volatile int16_t x679 = 36;
	int64_t x680 = 24270733902185299LL;
	volatile int64_t t18 = -727607525117579LL;

	t18 = (((x677/x678)<<x679)%x680);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x721 = 56668673537673LLU;
	int8_t x723 = 52;
	uint8_t x724 = UINT8_MAX;
	uint64_t t19 = 7800124792LLU;

	t19 = (((x721/x722)<<x723)%x724);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x757 = INT16_MIN;
	volatile int16_t x758 = -1;
	int8_t x759 = 3;
	uint64_t x760 = UINT64_MAX;
	volatile uint64_t t20 = 211953312LLU;

	t20 = (((x757/x758)<<x759)%x760);

	if (t20 != 262144LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x789 = 31U;
	uint64_t x790 = 2208803779518251LLU;
	volatile uint8_t x791 = 58U;
	static int32_t x792 = 31699719;
	uint64_t t21 = 209406081LLU;

	t21 = (((x789/x790)<<x791)%x792);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x825 = INT32_MIN;
	volatile uint32_t x826 = 642192U;
	static volatile uint32_t x828 = 13765U;

	t22 = (((x825/x826)<<x827)%x828);

	if (t22 != 3343U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x841 = INT8_MIN;
	volatile int32_t x842 = INT32_MIN;
	static uint8_t x843 = 0U;
	uint32_t x844 = 275271033U;
	volatile uint32_t t23 = 39583U;

	t23 = (((x841/x842)<<x843)%x844);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x887 = 0U;
	uint64_t t24 = 49844445187450387LLU;

	t24 = (((x885/x886)<<x887)%x888);

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x949 = INT32_MIN;
	uint32_t x950 = 31970U;
	volatile uint8_t x951 = 1U;
	volatile uint8_t x952 = 4U;

	t25 = (((x949/x950)<<x951)%x952);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1031 = 3U;
	int64_t t26 = -9076094118141LL;

	t26 = (((x1029/x1030)<<x1031)%x1032);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1113 = INT8_MAX;
	uint32_t x1114 = UINT32_MAX;
	uint16_t x1116 = 2447U;
	uint32_t t27 = 34443U;

	t27 = (((x1113/x1114)<<x1115)%x1116);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1166 = 24195LLU;
	int8_t x1167 = 53;
	volatile int64_t x1168 = INT64_MAX;
	uint64_t t28 = 4951333LLU;

	t28 = (((x1165/x1166)<<x1167)%x1168);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1198 = INT64_MIN;
	volatile uint8_t x1199 = 0U;
	volatile int64_t t29 = 656599462127LL;

	t29 = (((x1197/x1198)<<x1199)%x1200);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1241 = -2018;
	static int16_t x1242 = -5232;
	uint64_t x1244 = UINT64_MAX;

	t30 = (((x1241/x1242)<<x1243)%x1244);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1265 = -1;
	int32_t x1266 = INT32_MAX;
	static int16_t x1267 = 0;
	volatile uint32_t x1268 = UINT32_MAX;
	uint32_t t31 = 13392U;

	t31 = (((x1265/x1266)<<x1267)%x1268);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1390 = INT64_MIN;
	uint8_t x1391 = 0U;
	volatile uint32_t x1392 = UINT32_MAX;

	t32 = (((x1389/x1390)<<x1391)%x1392);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1401 = 196491126LLU;
	volatile int8_t x1402 = -15;
	uint8_t x1403 = 4U;
	static int16_t x1404 = INT16_MIN;
	static uint64_t t33 = 14LLU;

	t33 = (((x1401/x1402)<<x1403)%x1404);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1493 = 5;
	int64_t x1494 = -25198LL;
	int64_t x1495 = 19LL;
	static uint32_t x1496 = UINT32_MAX;
	int64_t t34 = 691065879215LL;

	t34 = (((x1493/x1494)<<x1495)%x1496);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1561 = 55;
	volatile int8_t x1562 = 8;
	volatile uint16_t x1563 = 4U;
	int8_t x1564 = 37;
	volatile int32_t t35 = 2322145;

	t35 = (((x1561/x1562)<<x1563)%x1564);

	if (t35 != 22) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1629 = UINT8_MAX;
	uint8_t x1630 = UINT8_MAX;
	int16_t x1631 = 1;
	int64_t x1632 = -1LL;
	volatile int64_t t36 = 74LL;

	t36 = (((x1629/x1630)<<x1631)%x1632);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1633 = -7;
	uint32_t x1634 = 1072U;
	uint16_t x1635 = 7U;

	t37 = (((x1633/x1634)<<x1635)%x1636);

	if (t37 != 512831872U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1765 = INT64_MAX;
	uint16_t x1767 = 0U;
	int8_t x1768 = -1;
	int64_t t38 = 87LL;

	t38 = (((x1765/x1766)<<x1767)%x1768);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1773 = INT16_MAX;
	volatile int64_t x1774 = -6058275461LL;
	uint8_t x1775 = 7U;
	uint32_t x1776 = UINT32_MAX;

	t39 = (((x1773/x1774)<<x1775)%x1776);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1865 = 3;
	static int32_t x1866 = -296;
	int8_t x1867 = 1;
	volatile int32_t t40 = 576471;

	t40 = (((x1865/x1866)<<x1867)%x1868);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1890 = INT64_MIN;
	int64_t x1891 = 30LL;
	static int32_t x1892 = INT32_MIN;
	int64_t t41 = -3746291446617LL;

	t41 = (((x1889/x1890)<<x1891)%x1892);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1941 = -1LL;
	volatile int64_t x1942 = INT64_MIN;
	uint8_t x1943 = 1U;
	volatile int16_t x1944 = 58;
	volatile int64_t t42 = 0LL;

	t42 = (((x1941/x1942)<<x1943)%x1944);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2013 = -114024LL;
	uint32_t x2014 = UINT32_MAX;
	int32_t x2016 = -1;
	volatile int64_t t43 = 2203LL;

	t43 = (((x2013/x2014)<<x2015)%x2016);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2018 = 11U;
	volatile uint32_t x2019 = 12U;
	uint32_t x2020 = UINT32_MAX;
	static volatile uint64_t t44 = 1105817922679LLU;

	t44 = (((x2017/x2018)<<x2019)%x2020);

	if (t44 != 3514062289LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2057 = -1047LL;
	uint32_t x2059 = 4U;
	uint32_t x2060 = 40496U;
	volatile int64_t t45 = -58LL;

	t45 = (((x2057/x2058)<<x2059)%x2060);

	if (t45 != 16752LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2181 = 9U;
	int64_t x2182 = 117469793448155LL;
	int16_t x2184 = 1;
	int64_t t46 = -1640883036819LL;

	t46 = (((x2181/x2182)<<x2183)%x2184);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2225 = -1;
	int32_t x2226 = 26;
	uint8_t x2228 = 5U;
	static int32_t t47 = 437890837;

	t47 = (((x2225/x2226)<<x2227)%x2228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2233 = -387;
	uint32_t x2234 = UINT32_MAX;
	uint16_t x2235 = 3U;
	int32_t x2236 = -3272;
	volatile uint32_t t48 = 7579U;

	t48 = (((x2233/x2234)<<x2235)%x2236);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2257 = UINT8_MAX;
	static uint64_t x2258 = UINT64_MAX;
	int16_t x2259 = 1;
	volatile uint64_t t49 = 1679947323LLU;

	t49 = (((x2257/x2258)<<x2259)%x2260);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2265 = 14U;
	volatile int64_t x2266 = INT64_MIN;
	uint8_t x2267 = 2U;
	static int64_t t50 = 938LL;

	t50 = (((x2265/x2266)<<x2267)%x2268);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2325 = INT8_MIN;
	int32_t x2326 = INT32_MAX;
	int32_t x2327 = 1;
	uint8_t x2328 = UINT8_MAX;
	int32_t t51 = 1015;

	t51 = (((x2325/x2326)<<x2327)%x2328);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2341 = -931562;
	int8_t x2342 = INT8_MIN;
	int8_t x2343 = 1;
	int32_t x2344 = 107;
	int32_t t52 = -918183;

	t52 = (((x2341/x2342)<<x2343)%x2344);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x2410 = 170816824243LLU;
	int8_t x2411 = 55;
	uint8_t x2412 = 48U;
	volatile uint64_t t53 = 87475LLU;

	t53 = (((x2409/x2410)<<x2411)%x2412);

	if (t53 != 32LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2441 = -5286LL;
	static int8_t x2442 = INT8_MIN;
	int8_t x2443 = 1;
	int16_t x2444 = 3;
	static volatile int64_t t54 = 0LL;

	t54 = (((x2441/x2442)<<x2443)%x2444);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2457 = 1973660813770LLU;
	int8_t x2459 = 49;
	uint32_t x2460 = 3096U;
	static uint64_t t55 = 21343326LLU;

	t55 = (((x2457/x2458)<<x2459)%x2460);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2545 = 23;
	uint16_t x2546 = UINT16_MAX;
	volatile uint8_t x2548 = UINT8_MAX;
	static int32_t t56 = -3;

	t56 = (((x2545/x2546)<<x2547)%x2548);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2562 = UINT64_MAX;
	uint8_t x2563 = 62U;
	uint64_t t57 = 27647LLU;

	t57 = (((x2561/x2562)<<x2563)%x2564);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2597 = 1;
	uint8_t x2598 = 94U;
	int8_t x2599 = 1;

	t58 = (((x2597/x2598)<<x2599)%x2600);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2641 = 0;
	volatile int8_t x2642 = 42;
	static volatile uint32_t x2643 = 1U;
	int16_t x2644 = INT16_MIN;
	static volatile int32_t t59 = 65555188;

	t59 = (((x2641/x2642)<<x2643)%x2644);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2669 = 11U;
	static volatile int16_t x2670 = INT16_MAX;
	static volatile int64_t x2672 = INT64_MIN;
	volatile int64_t t60 = -12735100839LL;

	t60 = (((x2669/x2670)<<x2671)%x2672);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2677 = INT16_MAX;
	uint8_t x2678 = 126U;
	uint8_t x2679 = 5U;
	int32_t x2680 = INT32_MIN;
	int32_t t61 = 4659512;

	t61 = (((x2677/x2678)<<x2679)%x2680);

	if (t61 != 8320) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2685 = 58052056U;
	uint16_t x2686 = 852U;
	int32_t x2688 = INT32_MIN;
	volatile uint32_t t62 = 3576275U;

	t62 = (((x2685/x2686)<<x2687)%x2688);

	if (t62 != 8721408U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2811 = 35U;
	int64_t x2812 = -1LL;
	static volatile uint64_t t63 = 68LLU;

	t63 = (((x2809/x2810)<<x2811)%x2812);

	if (t63 != 11063595751723499520LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2817 = 22434U;
	static int16_t x2818 = -1;
	uint8_t x2819 = 1U;
	uint32_t t64 = 23U;

	t64 = (((x2817/x2818)<<x2819)%x2820);

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2825 = 91683724U;
	volatile uint64_t x2826 = 59LLU;
	volatile uint8_t x2827 = 17U;
	int16_t x2828 = -6802;
	volatile uint64_t t65 = 99551891LLU;

	t65 = (((x2825/x2826)<<x2827)%x2828);

	if (t65 != 203680776192LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2837 = -124;
	volatile uint64_t x2838 = 1LLU;
	static uint8_t x2839 = 36U;
	static volatile int8_t x2840 = -1;

	t66 = (((x2837/x2838)<<x2839)%x2840);

	if (t66 != 18446735552494436352LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x2925 = INT16_MIN;
	uint32_t x2926 = 6143449U;
	uint16_t x2927 = 5U;

	t67 = (((x2925/x2926)<<x2927)%x2928);

	if (t67 != 22368U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3058 = UINT8_MAX;
	uint16_t x3059 = 1U;
	int32_t t68 = -1;

	t68 = (((x3057/x3058)<<x3059)%x3060);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3061 = -1;
	int64_t x3062 = -1LL;

	t69 = (((x3061/x3062)<<x3063)%x3064);

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x3105 = 0;
	static int8_t x3106 = INT8_MIN;
	static uint64_t x3107 = 7LLU;
	uint64_t x3108 = 389175660LLU;

	t70 = (((x3105/x3106)<<x3107)%x3108);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x3193 = INT64_MIN;
	int8_t x3194 = INT8_MIN;
	volatile uint32_t x3195 = 0U;
	static volatile uint8_t x3196 = 26U;
	volatile int64_t t71 = -320762099607607337LL;

	t71 = (((x3193/x3194)<<x3195)%x3196);

	if (t71 != 22LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3245 = -1;
	int64_t x3246 = -1LL;
	int8_t x3247 = 0;
	static int8_t x3248 = -12;
	volatile int64_t t72 = 43297846152LL;

	t72 = (((x3245/x3246)<<x3247)%x3248);

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3257 = -1;
	static int16_t x3258 = -1;
	static int32_t x3259 = 0;
	uint32_t x3260 = 90836U;
	uint32_t t73 = 4740493U;

	t73 = (((x3257/x3258)<<x3259)%x3260);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3357 = -11;
	volatile uint8_t x3359 = 1U;
	uint16_t x3360 = 1U;
	int32_t t74 = 4;

	t74 = (((x3357/x3358)<<x3359)%x3360);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x3409 = UINT8_MAX;
	static uint64_t x3410 = UINT64_MAX;
	int8_t x3411 = 35;
	uint64_t t75 = 1116056346219524796LLU;

	t75 = (((x3409/x3410)<<x3411)%x3412);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x3413 = INT64_MIN;
	int32_t x3414 = INT32_MIN;
	static int8_t x3415 = 4;
	static volatile int16_t x3416 = INT16_MAX;

	t76 = (((x3413/x3414)<<x3415)%x3416);

	if (t76 != 64LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x3418 = 390968382331LLU;
	volatile uint8_t x3419 = 2U;
	uint8_t x3420 = 14U;

	t77 = (((x3417/x3418)<<x3419)%x3420);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3525 = INT8_MAX;
	static int16_t x3526 = INT16_MIN;
	uint16_t x3527 = 1U;
	volatile int32_t t78 = 1050359079;

	t78 = (((x3525/x3526)<<x3527)%x3528);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3538 = UINT64_MAX;
	uint16_t x3540 = UINT16_MAX;
	uint64_t t79 = 5172LLU;

	t79 = (((x3537/x3538)<<x3539)%x3540);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3653 = -1;
	int8_t x3654 = INT8_MIN;
	volatile int16_t x3655 = 1;
	volatile int16_t x3656 = INT16_MIN;
	int32_t t80 = 350882312;

	t80 = (((x3653/x3654)<<x3655)%x3656);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3677 = INT32_MIN;
	volatile int64_t x3678 = INT64_MIN;
	volatile uint8_t x3679 = 1U;
	volatile int64_t t81 = 3LL;

	t81 = (((x3677/x3678)<<x3679)%x3680);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x3713 = -1;
	uint8_t x3714 = UINT8_MAX;
	int16_t x3716 = INT16_MIN;
	static int32_t t82 = -8631077;

	t82 = (((x3713/x3714)<<x3715)%x3716);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3857 = -14158570339216LL;
	int32_t x3858 = INT32_MIN;
	static volatile uint16_t x3860 = 81U;

	t83 = (((x3857/x3858)<<x3859)%x3860);

	if (t83 != 64LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3906 = 63;
	volatile uint32_t x3907 = 0U;
	int8_t x3908 = INT8_MAX;
	uint32_t t84 = 3638U;

	t84 = (((x3905/x3906)<<x3907)%x3908);

	if (t84 != 74U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x3945 = 8086090U;
	int16_t x3946 = INT16_MIN;
	volatile int16_t x3947 = 1;
	uint64_t x3948 = 2LLU;
	static volatile uint64_t t85 = 1259095173LLU;

	t85 = (((x3945/x3946)<<x3947)%x3948);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3981 = -1;
	int8_t x3982 = INT8_MIN;
	static uint16_t x3983 = 0U;
	volatile int8_t x3984 = INT8_MIN;
	int32_t t86 = -3255280;

	t86 = (((x3981/x3982)<<x3983)%x3984);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x3989 = UINT64_MAX;
	static volatile int8_t x3990 = INT8_MAX;
	int8_t x3991 = 19;
	uint16_t x3992 = 2830U;
	volatile uint64_t t87 = 7181080947160709LLU;

	t87 = (((x3989/x3990)<<x3991)%x3992);

	if (t87 != 548LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4057 = INT8_MAX;
	static int8_t x4058 = INT8_MIN;
	static int64_t x4059 = 24LL;
	static volatile int8_t x4060 = INT8_MAX;
	static volatile int32_t t88 = 1;

	t88 = (((x4057/x4058)<<x4059)%x4060);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4077 = -592;
	static int64_t x4078 = INT64_MIN;
	uint32_t x4079 = 0U;
	static volatile int64_t x4080 = -1LL;
	int64_t t89 = -738705036841002LL;

	t89 = (((x4077/x4078)<<x4079)%x4080);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x4081 = -1;
	uint64_t x4082 = UINT64_MAX;
	volatile uint8_t x4083 = 22U;
	volatile int8_t x4084 = -29;
	volatile uint64_t t90 = 26062162655339802LLU;

	t90 = (((x4081/x4082)<<x4083)%x4084);

	if (t90 != 4194304LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x4085 = -1;
	int16_t x4087 = 48;
	int32_t x4088 = -1;
	volatile int64_t t91 = -721549LL;

	t91 = (((x4085/x4086)<<x4087)%x4088);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4281 = 17;
	static uint64_t x4284 = UINT64_MAX;

	t92 = (((x4281/x4282)<<x4283)%x4284);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4309 = 183;
	static volatile uint32_t x4310 = UINT32_MAX;
	uint8_t x4311 = 2U;
	int8_t x4312 = -1;
	uint32_t t93 = 78U;

	t93 = (((x4309/x4310)<<x4311)%x4312);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x4377 = INT32_MIN;
	static uint8_t x4379 = 21U;
	volatile uint64_t t94 = 2972294027411LLU;

	t94 = (((x4377/x4378)<<x4379)%x4380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4417 = 1391752800975LLU;
	static uint16_t x4418 = 515U;
	static int8_t x4419 = 4;
	static uint64_t x4420 = UINT64_MAX;
	volatile uint64_t t95 = 2907467LLU;

	t95 = (((x4417/x4418)<<x4419)%x4420);

	if (t95 != 43238921968LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4437 = -1;
	int64_t x4438 = 147707375794329369LL;
	static volatile int64_t x4439 = 1LL;
	int64_t x4440 = -1232907521LL;

	t96 = (((x4437/x4438)<<x4439)%x4440);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4521 = 12763;
	static int16_t x4522 = INT16_MIN;
	uint16_t x4523 = 30U;
	int32_t x4524 = INT32_MAX;
	volatile int32_t t97 = 29;

	t97 = (((x4521/x4522)<<x4523)%x4524);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4529 = -1;
	int16_t x4531 = 6;
	int32_t x4532 = -4905309;
	volatile int32_t t98 = 76700427;

	t98 = (((x4529/x4530)<<x4531)%x4532);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4581 = -1;
	static volatile int8_t x4582 = -3;
	int8_t x4583 = 13;
	int32_t x4584 = INT32_MAX;
	volatile int32_t t99 = -8312893;

	t99 = (((x4581/x4582)<<x4583)%x4584);

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

