#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x54 = UINT64_MAX;
static volatile uint64_t t0 = 254963068176765LLU;
static volatile int64_t t4 = 105LL;
volatile uint16_t x355 = 14U;
static int8_t x356 = INT8_MIN;
static uint8_t x383 = 15U;
uint8_t x403 = 16U;
int8_t x463 = 0;
static uint16_t x467 = 10U;
uint64_t t11 = 2LLU;
volatile uint32_t x492 = 89343U;
int8_t x590 = 0;
int16_t x669 = INT16_MIN;
static int16_t x670 = 65;
volatile int16_t x717 = -1;
int8_t x770 = INT8_MAX;
int32_t x809 = INT32_MIN;
static int32_t t18 = -8244;
uint8_t x999 = 1U;
volatile uint8_t x1206 = UINT8_MAX;
volatile uint64_t x1222 = 856834800421365LLU;
int16_t x1277 = -1;
int32_t x1296 = -1;
uint8_t x1299 = 3U;
int16_t x1305 = INT16_MAX;
uint8_t x1444 = 43U;
volatile uint16_t x1466 = UINT16_MAX;
static uint32_t x1487 = 5U;
int16_t x1824 = -504;
uint16_t x1841 = 430U;
uint32_t x1898 = UINT32_MAX;
uint32_t x1900 = 1U;
uint32_t t35 = 5565634U;
int16_t x1947 = 3;
volatile uint32_t t36 = 0U;
uint64_t x1954 = 325LLU;
volatile uint64_t t37 = 1246790LLU;
volatile uint64_t t38 = 1LLU;
uint8_t x2117 = 53U;
int64_t x2118 = 1LL;
volatile int16_t x2310 = 2115;
int32_t t43 = 14779432;
int64_t t44 = 403561900525LL;
static uint64_t x2367 = 9LLU;
volatile int64_t x2368 = INT64_MIN;
int32_t x2485 = INT32_MIN;
static uint32_t x2510 = UINT32_MAX;
volatile uint16_t x2511 = 0U;
int16_t x2625 = 11;
volatile int32_t t52 = 10744;
int16_t x2792 = INT16_MIN;
static volatile int64_t t54 = -143951514661898LL;
int16_t x2949 = INT16_MIN;
uint8_t x2950 = UINT8_MAX;
int8_t x2951 = 0;
uint64_t x2986 = 252842913LLU;
volatile int8_t x2988 = INT8_MIN;
uint32_t x3126 = 242149860U;
int64_t x3281 = INT64_MAX;
int8_t x3309 = -7;
static volatile int8_t x3341 = INT8_MAX;
volatile int8_t x3445 = -1;
volatile uint8_t x3834 = 2U;
int16_t x4081 = INT16_MAX;
volatile uint16_t x4082 = 327U;
int32_t x4084 = -1;
uint8_t x4179 = 20U;
volatile uint16_t x4265 = 3U;
uint64_t t68 = 66110584110227108LLU;
static uint8_t x4299 = 14U;
uint8_t x4300 = 1U;
uint64_t t72 = 173998LLU;
int16_t x4488 = -1;
static int16_t x4513 = -3;
volatile uint64_t x4538 = 23135741LLU;
volatile int32_t t76 = -181;
static int16_t x4603 = 3;
static volatile int32_t t77 = 0;
uint32_t x4638 = 1U;
uint8_t x4689 = 6U;
uint8_t x4691 = 12U;
volatile int64_t t81 = 154055733LL;
static volatile int16_t x5016 = -1;
static volatile int32_t t84 = 118;
int8_t x5109 = -2;
volatile uint8_t x5169 = UINT8_MAX;
static uint8_t x5171 = 6U;
volatile int32_t t86 = 408;
uint8_t x5333 = UINT8_MAX;
volatile int64_t t89 = -7600LL;
static uint64_t x5355 = 5LLU;
int16_t x5356 = INT16_MIN;
volatile int32_t t90 = 329323256;
static uint16_t x5366 = UINT16_MAX;
static int16_t x5367 = 10;
volatile int32_t t91 = 2672;
static uint8_t x5384 = 6U;
int8_t x5513 = INT8_MIN;
static uint32_t x5601 = UINT32_MAX;
int32_t x5657 = INT32_MAX;
uint64_t x5658 = 7848990LLU;
uint32_t x5668 = 360326077U;
uint32_t x5678 = UINT32_MAX;
uint32_t t98 = 4044U;


void f0(void) {
	volatile int64_t x53 = INT64_MAX;
	uint8_t x55 = 2U;
	volatile int16_t x56 = -1;

	t0 = (x53-((x54<<x55)^x56));

	if (t0 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = 441456878121LLU;
	int32_t x115 = 1;
	volatile int8_t x116 = 3;
	volatile uint64_t t1 = 4466LLU;

	t1 = (x113-((x114<<x115)^x116));

	if (t1 != 18446743188648311727LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x269 = INT64_MAX;
	uint16_t x270 = 45U;
	static uint8_t x271 = 14U;
	int16_t x272 = INT16_MAX;
	volatile int64_t t2 = 51648LL;

	t2 = (x269-((x270<<x271)^x272));

	if (t2 != 9223372036854038528LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 1;
	uint8_t x319 = 28U;
	int8_t x320 = INT8_MAX;
	volatile int32_t t3 = -52440;

	t3 = (x317-((x318<<x319)^x320));

	if (t3 != -268468351) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = INT64_MAX;
	int32_t x331 = 0;
	static uint8_t x332 = 41U;

	t4 = (x329-((x330<<x331)^x332));

	if (t4 != -9223372036854775639LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x353 = 95742141778532380LLU;
	uint64_t x354 = UINT64_MAX;
	static uint64_t t5 = 507518440783155000LLU;

	t5 = (x353-((x354<<x355)^x356));

	if (t5 != 95742141778516124LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x381 = -292;
	volatile uint8_t x382 = 37U;
	static int8_t x384 = INT8_MAX;
	int32_t t6 = 7;

	t6 = (x381-((x382<<x383)^x384));

	if (t6 != -1212835) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x389 = INT16_MIN;
	volatile uint8_t x390 = 1U;
	static uint16_t x391 = 1U;
	int8_t x392 = INT8_MIN;
	volatile int32_t t7 = -2345324;

	t7 = (x389-((x390<<x391)^x392));

	if (t7 != -32642) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int32_t x404 = -1;
	int32_t t8 = 19;

	t8 = (x401-((x402<<x403)^x404));

	if (t8 != 8323072) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x421 = INT64_MIN;
	volatile int32_t x422 = 13;
	uint16_t x423 = 1U;
	int64_t x424 = -12LL;
	static int64_t t9 = -448293609171267LL;

	t9 = (x421-((x422<<x423)^x424));

	if (t9 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x461 = 343001243LLU;
	uint16_t x462 = 12U;
	int32_t x464 = -1;
	volatile uint64_t t10 = 14523457360934LLU;

	t10 = (x461-((x462<<x463)^x464));

	if (t10 != 343001256LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x465 = -1;
	uint64_t x466 = 16042058385LLU;
	uint64_t x468 = 574313284LLU;

	t11 = (x465-((x466<<x467)^x468));

	if (t11 != 18446727647142537403LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x489 = 43514U;
	static uint64_t x490 = 58060717305264165LLU;
	uint8_t x491 = 0U;
	volatile uint64_t t12 = 28519348289419252LLU;

	t12 = (x489-((x490<<x491)^x492));

	if (t12 != 18388683356404286752LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x589 = 63003U;
	volatile int16_t x591 = 1;
	int16_t x592 = INT16_MIN;
	uint32_t t13 = 12U;

	t13 = (x589-((x590<<x591)^x592));

	if (t13 != 95771U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x609 = INT16_MIN;
	static int16_t x610 = 460;
	static int8_t x611 = 0;
	static int8_t x612 = INT8_MIN;
	volatile int32_t t14 = -1;

	t14 = (x609-((x610<<x611)^x612));

	if (t14 != -32332) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x671 = 0;
	uint32_t x672 = 36U;
	static volatile uint32_t t15 = 3268U;

	t15 = (x669-((x670<<x671)^x672));

	if (t15 != 4294934427U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x718 = 295222U;
	uint8_t x719 = 3U;
	int16_t x720 = INT16_MIN;
	uint32_t t16 = 13932U;

	t16 = (x717-((x718<<x719)^x720));

	if (t16 != 2389583U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x769 = -3306646094995028LL;
	int8_t x771 = 24;
	uint8_t x772 = 14U;
	static int64_t t17 = 4LL;

	t17 = (x769-((x770<<x771)^x772));

	if (t17 != -3306648225701474LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x810 = 0;
	static volatile int8_t x811 = 2;
	int8_t x812 = -1;

	t18 = (x809-((x810<<x811)^x812));

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x997 = 24430U;
	int8_t x998 = INT8_MAX;
	int16_t x1000 = INT16_MIN;
	volatile int32_t t19 = -661096;

	t19 = (x997-((x998<<x999)^x1000));

	if (t19 != 56944) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1109 = -1LL;
	int8_t x1110 = 0;
	uint16_t x1111 = 21U;
	int16_t x1112 = INT16_MAX;
	int64_t t20 = 3920941LL;

	t20 = (x1109-((x1110<<x1111)^x1112));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1205 = INT16_MIN;
	int8_t x1207 = 2;
	int64_t x1208 = -235710382316921LL;
	int64_t t21 = -8013753619226784LL;

	t21 = (x1205-((x1206<<x1207)^x1208));

	if (t21 != 235710382284421LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1221 = INT8_MIN;
	uint32_t x1223 = 7U;
	volatile int64_t x1224 = INT64_MIN;
	volatile uint64_t t22 = 91296821254LLU;

	t22 = (x1221-((x1222<<x1223)^x1224));

	if (t22 != 9113697182400840960LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1278 = 8U;
	int64_t x1279 = 1LL;
	int16_t x1280 = INT16_MIN;
	volatile int32_t t23 = 71474;

	t23 = (x1277-((x1278<<x1279)^x1280));

	if (t23 != 32751) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1293 = 31732169512524LLU;
	int64_t x1294 = 11LL;
	uint8_t x1295 = 51U;
	uint64_t t24 = 11497LLU;

	t24 = (x1293-((x1294<<x1295)^x1296));

	if (t24 != 24801530120050253LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1297 = INT8_MIN;
	uint64_t x1298 = 121763LLU;
	uint32_t x1300 = 116630136U;
	volatile uint64_t t25 = 202190656666775588LLU;

	t25 = (x1297-((x1298<<x1299)^x1300));

	if (t25 != 18446744073592274976LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1306 = 190;
	int8_t x1307 = 1;
	int64_t x1308 = -2694831066450978LL;
	static volatile int64_t t26 = 142702506LL;

	t26 = (x1305-((x1306<<x1307)^x1308));

	if (t26 != 2694831066484061LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1441 = UINT32_MAX;
	static uint32_t x1442 = UINT32_MAX;
	volatile uint32_t x1443 = 26U;
	uint32_t t27 = 528U;

	t27 = (x1441-((x1442<<x1443)^x1444));

	if (t27 != 67108820U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1465 = INT16_MIN;
	static uint64_t x1467 = 0LLU;
	int8_t x1468 = 1;
	int32_t t28 = -55995;

	t28 = (x1465-((x1466<<x1467)^x1468));

	if (t28 != -98302) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1473 = -3164465;
	uint16_t x1474 = 69U;
	uint8_t x1475 = 24U;
	int32_t x1476 = -360;
	int32_t t29 = -60;

	t29 = (x1473-((x1474<<x1475)^x1476));

	if (t29 != 1154463799) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1485 = UINT16_MAX;
	uint8_t x1486 = UINT8_MAX;
	static volatile int16_t x1488 = INT16_MIN;
	volatile int32_t t30 = -5;

	t30 = (x1485-((x1486<<x1487)^x1488));

	if (t30 != 90143) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1669 = -1;
	uint8_t x1670 = 9U;
	uint16_t x1671 = 1U;
	int8_t x1672 = INT8_MIN;
	int32_t t31 = -1;

	t31 = (x1669-((x1670<<x1671)^x1672));

	if (t31 != 109) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x1745 = 993LLU;
	volatile int8_t x1746 = 5;
	static int8_t x1747 = 6;
	static volatile int64_t x1748 = INT64_MAX;
	uint64_t t32 = 110963LLU;

	t32 = (x1745-((x1746<<x1747)^x1748));

	if (t32 != 9223372036854777122LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1821 = 2;
	uint64_t x1822 = UINT64_MAX;
	volatile int8_t x1823 = 0;
	uint64_t t33 = 1631LLU;

	t33 = (x1821-((x1822<<x1823)^x1824));

	if (t33 != 18446744073709551115LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1842 = 13375;
	uint64_t x1843 = 1LLU;
	int64_t x1844 = 10240280176956325LL;
	volatile int64_t t34 = -13586920686992LL;

	t34 = (x1841-((x1842<<x1843)^x1844));

	if (t34 != -10240280176982573LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1897 = 745U;
	int16_t x1899 = 0;

	t35 = (x1897-((x1898<<x1899)^x1900));

	if (t35 != 747U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1945 = 560U;
	uint32_t x1946 = 21091U;
	int16_t x1948 = INT16_MIN;

	t36 = (x1945-((x1946<<x1947)^x1948));

	if (t36 != 192280U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1953 = INT16_MIN;
	uint16_t x1955 = 7U;
	int8_t x1956 = 36;

	t37 = (x1953-((x1954<<x1955)^x1956));

	if (t37 != 18446744073709477212LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1989 = INT32_MIN;
	static uint32_t x1990 = UINT32_MAX;
	uint16_t x1991 = 13U;
	static uint64_t x1992 = 1395263511080LLU;

	t38 = (x1989-((x1990<<x1991)^x1992));

	if (t38 != 18446742679391798744LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2057 = 14U;
	int64_t x2058 = 682304816LL;
	uint8_t x2059 = 3U;
	uint16_t x2060 = 482U;
	int64_t t39 = 1LL;

	t39 = (x2057-((x2058<<x2059)^x2060));

	if (t39 != -5458438228LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2119 = 1U;
	volatile int32_t x2120 = INT32_MAX;
	volatile int64_t t40 = 1292LL;

	t40 = (x2117-((x2118<<x2119)^x2120));

	if (t40 != -2147483592LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2213 = INT32_MIN;
	static uint32_t x2214 = 22560U;
	volatile uint8_t x2215 = 1U;
	volatile int8_t x2216 = 1;
	volatile uint32_t t41 = 411U;

	t41 = (x2213-((x2214<<x2215)^x2216));

	if (t41 != 2147438527U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2281 = -1LL;
	int16_t x2282 = 25;
	static uint64_t x2283 = 2LLU;
	static int8_t x2284 = 0;
	int64_t t42 = -174449513158613254LL;

	t42 = (x2281-((x2282<<x2283)^x2284));

	if (t42 != -101LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2309 = INT8_MIN;
	uint8_t x2311 = 2U;
	uint8_t x2312 = UINT8_MAX;

	t43 = (x2309-((x2310<<x2311)^x2312));

	if (t43 != -8819) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2325 = 1U;
	static uint8_t x2326 = 72U;
	static int8_t x2327 = 1;
	int64_t x2328 = 175015LL;

	t44 = (x2325-((x2326<<x2327)^x2328));

	if (t44 != -174902LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2365 = INT32_MIN;
	uint8_t x2366 = 77U;
	volatile int64_t t45 = -33433796LL;

	t45 = (x2365-((x2366<<x2367)^x2368));

	if (t45 != 9223372034707252736LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2465 = UINT16_MAX;
	int16_t x2466 = INT16_MAX;
	volatile uint8_t x2467 = 0U;
	int16_t x2468 = 0;
	volatile int32_t t46 = 36920583;

	t46 = (x2465-((x2466<<x2467)^x2468));

	if (t46 != 32768) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2486 = 0;
	uint16_t x2487 = 29U;
	volatile int16_t x2488 = INT16_MIN;
	volatile int32_t t47 = 3;

	t47 = (x2485-((x2486<<x2487)^x2488));

	if (t47 != -2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2509 = -1;
	volatile uint64_t x2512 = UINT64_MAX;
	uint64_t t48 = 1952400LLU;

	t48 = (x2509-((x2510<<x2511)^x2512));

	if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2517 = INT64_MIN;
	volatile uint64_t x2518 = UINT64_MAX;
	uint8_t x2519 = 3U;
	volatile uint16_t x2520 = 9U;
	uint64_t t49 = 181108LLU;

	t49 = (x2517-((x2518<<x2519)^x2520));

	if (t49 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2626 = UINT64_MAX;
	int8_t x2627 = 1;
	int8_t x2628 = INT8_MIN;
	uint64_t t50 = 8225110880701LLU;

	t50 = (x2625-((x2626<<x2627)^x2628));

	if (t50 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2709 = INT8_MAX;
	int8_t x2710 = INT8_MAX;
	int16_t x2711 = 17;
	uint16_t x2712 = UINT16_MAX;
	volatile int32_t t51 = 196;

	t51 = (x2709-((x2710<<x2711)^x2712));

	if (t51 != -16711552) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2733 = -5;
	volatile int32_t x2734 = 54098102;
	static int64_t x2735 = 1LL;
	int16_t x2736 = 27;

	t52 = (x2733-((x2734<<x2735)^x2736));

	if (t52 != -108196220) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2789 = 7389474;
	volatile uint32_t x2790 = UINT32_MAX;
	static int64_t x2791 = 1LL;
	volatile uint32_t t53 = 6859655U;

	t53 = (x2789-((x2790<<x2791)^x2792));

	if (t53 != 7356708U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2945 = INT8_MIN;
	uint8_t x2946 = 81U;
	uint32_t x2947 = 0U;
	int64_t x2948 = INT64_MIN;

	t54 = (x2945-((x2946<<x2947)^x2948));

	if (t54 != 9223372036854775599LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2952 = -15256;
	volatile int32_t t55 = 1445;

	t55 = (x2949-((x2950<<x2951)^x2952));

	if (t55 != -17559) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2985 = -30828152;
	uint8_t x2987 = 0U;
	uint64_t t56 = 506635884424648795LLU;

	t56 = (x2985-((x2986<<x2987)^x2988));

	if (t56 != 222014823LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3125 = 15U;
	volatile int64_t x3127 = 1LL;
	int16_t x3128 = 3612;
	uint32_t t57 = 1U;

	t57 = (x3125-((x3126<<x3127)^x3128));

	if (t57 != 3810665019U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3249 = 13998LLU;
	int16_t x3250 = INT16_MAX;
	volatile uint16_t x3251 = 2U;
	uint32_t x3252 = UINT32_MAX;
	static volatile uint64_t t58 = 24LLU;

	t58 = (x3249-((x3250<<x3251)^x3252));

	if (t58 != 18446744069414729387LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3257 = -1;
	static int16_t x3258 = 10286;
	uint8_t x3259 = 14U;
	static volatile int64_t x3260 = -1LL;
	int64_t t59 = -86397622709037484LL;

	t59 = (x3257-((x3258<<x3259)^x3260));

	if (t59 != 168525824LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3282 = UINT64_MAX;
	uint32_t x3283 = 7U;
	static uint64_t x3284 = 76169206692844LLU;
	uint64_t t60 = 4776927463907LLU;

	t60 = (x3281-((x3282<<x3283)^x3284));

	if (t60 != 9223448206061468563LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3310 = 6218LL;
	int8_t x3311 = 0;
	uint64_t x3312 = UINT64_MAX;
	volatile uint64_t t61 = 1885655077415LLU;

	t61 = (x3309-((x3310<<x3311)^x3312));

	if (t61 != 6212LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3342 = 0U;
	static uint8_t x3343 = 7U;
	int8_t x3344 = -1;
	static int32_t t62 = -11477;

	t62 = (x3341-((x3342<<x3343)^x3344));

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3446 = UINT16_MAX;
	uint8_t x3447 = 11U;
	int64_t x3448 = INT64_MIN;
	volatile int64_t t63 = 19541814LL;

	t63 = (x3445-((x3446<<x3447)^x3448));

	if (t63 != 9223372036720560127LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3833 = 1580703U;
	volatile int32_t x3835 = 12;
	volatile int8_t x3836 = INT8_MIN;
	volatile uint32_t t64 = 436U;

	t64 = (x3833-((x3834<<x3835)^x3836));

	if (t64 != 1589023U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x4083 = 0LL;
	volatile int32_t t65 = -158;

	t65 = (x4081-((x4082<<x4083)^x4084));

	if (t65 != 33095) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4113 = -158LL;
	int16_t x4114 = 1;
	uint16_t x4115 = 1U;
	int8_t x4116 = INT8_MIN;
	int64_t t66 = -28957288240043LL;

	t66 = (x4113-((x4114<<x4115)^x4116));

	if (t66 != -32LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4177 = 126U;
	uint8_t x4178 = UINT8_MAX;
	static int16_t x4180 = INT16_MIN;
	uint32_t t67 = 847210022U;

	t67 = (x4177-((x4178<<x4179)^x4180));

	if (t67 != 267419774U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4266 = 0;
	uint8_t x4267 = 3U;
	uint64_t x4268 = UINT64_MAX;

	t68 = (x4265-((x4266<<x4267)^x4268));

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4297 = UINT32_MAX;
	static int16_t x4298 = INT16_MAX;
	volatile uint32_t t69 = 1103U;

	t69 = (x4297-((x4298<<x4299)^x4300));

	if (t69 != 3758112766U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4349 = -286453;
	static volatile int32_t x4350 = INT32_MAX;
	volatile uint16_t x4351 = 0U;
	static int32_t x4352 = INT32_MAX;
	volatile int32_t t70 = -33858;

	t70 = (x4349-((x4350<<x4351)^x4352));

	if (t70 != -286453) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4433 = 0U;
	static volatile uint64_t x4434 = 70500366827693084LLU;
	uint8_t x4435 = 31U;
	int16_t x4436 = INT16_MIN;
	static volatile uint64_t t71 = 867869245LLU;

	t71 = (x4433-((x4434<<x4435)^x4436));

	if (t71 != 16475946506864590848LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x4481 = INT64_MAX;
	uint16_t x4482 = UINT16_MAX;
	static volatile uint64_t x4483 = 4LLU;
	volatile uint64_t x4484 = UINT64_MAX;

	t72 = (x4481-((x4482<<x4483)^x4484));

	if (t72 != 9223372036855824368LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4485 = INT16_MAX;
	volatile int32_t x4486 = 156140;
	int8_t x4487 = 5;
	volatile int32_t t73 = 202512;

	t73 = (x4485-((x4486<<x4487)^x4488));

	if (t73 != 5029248) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4514 = 12U;
	uint16_t x4515 = 0U;
	uint16_t x4516 = UINT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (x4513-((x4514<<x4515)^x4516));

	if (t74 != -65526) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4537 = 32;
	uint8_t x4539 = 2U;
	int32_t x4540 = 7510;
	uint64_t t75 = 28566236264LLU;

	t75 = (x4537-((x4538<<x4539)^x4540));

	if (t75 != 18446744073617012094LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4545 = -1;
	int8_t x4546 = INT8_MAX;
	static int8_t x4547 = 21;
	int8_t x4548 = -22;

	t76 = (x4545-((x4546<<x4547)^x4548));

	if (t76 != 266338325) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4601 = INT8_MAX;
	static int16_t x4602 = INT16_MAX;
	int8_t x4604 = 0;

	t77 = (x4601-((x4602<<x4603)^x4604));

	if (t77 != -262009) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4621 = UINT16_MAX;
	int8_t x4622 = 1;
	static int8_t x4623 = 0;
	uint8_t x4624 = 19U;
	int32_t t78 = 59848817;

	t78 = (x4621-((x4622<<x4623)^x4624));

	if (t78 != 65517) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4637 = UINT8_MAX;
	int16_t x4639 = 1;
	uint8_t x4640 = 22U;
	uint32_t t79 = 45711224U;

	t79 = (x4637-((x4638<<x4639)^x4640));

	if (t79 != 235U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4690 = 10651;
	int16_t x4692 = INT16_MIN;
	int32_t t80 = -1033569;

	t80 = (x4689-((x4690<<x4691)^x4692));

	if (t80 != 43634694) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4701 = INT64_MIN;
	int16_t x4702 = 43;
	int16_t x4703 = 1;
	int8_t x4704 = INT8_MIN;

	t81 = (x4701-((x4702<<x4703)^x4704));

	if (t81 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4817 = INT8_MAX;
	uint32_t x4818 = UINT32_MAX;
	int8_t x4819 = 1;
	uint32_t x4820 = 22539694U;
	volatile uint32_t t82 = 132922723U;

	t82 = (x4817-((x4818<<x4819)^x4820));

	if (t82 != 22539823U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x4909 = -624;
	uint64_t x4910 = UINT64_MAX;
	static uint16_t x4911 = 12U;
	int16_t x4912 = INT16_MAX;
	uint64_t t83 = 1105766094483LLU;

	t83 = (x4909-((x4910<<x4911)^x4912));

	if (t83 != 28049LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5013 = 1;
	int8_t x5014 = INT8_MAX;
	volatile uint64_t x5015 = 3LLU;

	t84 = (x5013-((x5014<<x5015)^x5016));

	if (t84 != 1018) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5110 = 11;
	static volatile int8_t x5111 = 0;
	int16_t x5112 = -340;
	volatile int32_t t85 = -565;

	t85 = (x5109-((x5110<<x5111)^x5112));

	if (t85 != 343) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x5170 = UINT8_MAX;
	static int32_t x5172 = 153942;

	t86 = (x5169-((x5170<<x5171)^x5172));

	if (t86 != -157079) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x5241 = INT8_MIN;
	volatile uint8_t x5242 = UINT8_MAX;
	uint8_t x5243 = 0U;
	uint16_t x5244 = 83U;
	int32_t t87 = -96442;

	t87 = (x5241-((x5242<<x5243)^x5244));

	if (t87 != -300) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5301 = UINT16_MAX;
	uint64_t x5302 = 3LLU;
	uint8_t x5303 = 35U;
	int8_t x5304 = -1;
	volatile uint64_t t88 = 16592057LLU;

	t88 = (x5301-((x5302<<x5303)^x5304));

	if (t88 != 103079280640LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5334 = 856883548LL;
	int32_t x5335 = 1;
	int16_t x5336 = 766;

	t89 = (x5333-((x5334<<x5335)^x5336));

	if (t89 != -1713766215LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5353 = -1;
	volatile int16_t x5354 = 786;

	t90 = (x5353-((x5354<<x5355)^x5356));

	if (t90 != 7615) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5365 = 210U;
	uint16_t x5368 = 10632U;

	t91 = (x5365-((x5366<<x5367)^x5368));

	if (t91 != -67097782) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5381 = -1LL;
	uint64_t x5382 = UINT64_MAX;
	int8_t x5383 = 1;
	uint64_t t92 = 6678501661500252LLU;

	t92 = (x5381-((x5382<<x5383)^x5384));

	if (t92 != 7LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x5445 = -1LL;
	static int8_t x5446 = INT8_MAX;
	uint8_t x5447 = 16U;
	volatile int8_t x5448 = -1;
	static volatile int64_t t93 = -1621598215LL;

	t93 = (x5445-((x5446<<x5447)^x5448));

	if (t93 != 8323072LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x5514 = 44575988002360LL;
	volatile int8_t x5515 = 1;
	int8_t x5516 = INT8_MAX;
	int64_t t94 = -387340600585LL;

	t94 = (x5513-((x5514<<x5515)^x5516));

	if (t94 != -89151976004751LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5602 = 21929U;
	int16_t x5603 = 31;
	uint16_t x5604 = 14937U;
	uint32_t t95 = 20971U;

	t95 = (x5601-((x5602<<x5603)^x5604));

	if (t95 != 2147468710U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5659 = 18;
	volatile int16_t x5660 = INT16_MAX;
	uint64_t t96 = 34142125588842LLU;

	t96 = (x5657-((x5658<<x5659)^x5660));

	if (t96 != 18446742018291367936LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x5665 = 0U;
	static uint64_t x5666 = 18003LLU;
	static int8_t x5667 = 25;
	uint64_t t97 = 55490424LLU;

	t97 = (x5665-((x5666<<x5667)^x5668));

	if (t97 != 18446743469403003971LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5677 = INT32_MIN;
	uint16_t x5679 = 4U;
	uint16_t x5680 = UINT16_MAX;

	t98 = (x5677-((x5678<<x5679)^x5680));

	if (t98 != 2147549169U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5685 = 0;
	uint64_t x5686 = 11625405LLU;
	static volatile int16_t x5687 = 2;
	volatile int32_t x5688 = INT32_MAX;
	volatile uint64_t t99 = 2073545LLU;

	t99 = (x5685-((x5686<<x5687)^x5688));

	if (t99 != 18446744071608569589LLU) { NG(); } else { ; }
	
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

