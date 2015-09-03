#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 228647385LLU;
static uint16_t x124 = 3U;
volatile uint8_t x132 = 18U;
volatile int64_t t2 = 0LL;
int32_t x189 = 41;
uint16_t x248 = 12U;
int8_t x272 = 14;
int8_t x277 = 10;
static int64_t x309 = INT64_MIN;
int32_t x311 = INT32_MIN;
int8_t x312 = 0;
int16_t x370 = -881;
volatile int8_t x378 = 0;
volatile uint16_t x481 = 1320U;
int64_t x489 = 951586014748LL;
static volatile int8_t x490 = INT8_MIN;
uint64_t x550 = UINT64_MAX;
volatile int32_t x579 = INT32_MIN;
int8_t x633 = -16;
uint8_t x636 = 6U;
int32_t t16 = 19460;
uint8_t x654 = 1U;
int8_t x736 = 1;
volatile uint64_t t20 = 277110738884961393LLU;
static int64_t x933 = 147637LL;
uint64_t x946 = 114790LLU;
uint64_t t24 = 219LLU;
volatile int32_t x1174 = 220476745;
volatile uint8_t x1204 = 13U;
static uint32_t x1255 = 3857087U;
int8_t x1256 = 1;
uint16_t x1298 = UINT16_MAX;
int64_t t29 = -1086614817672976835LL;
uint64_t t30 = 7264671301LLU;
static uint64_t x1329 = UINT64_MAX;
int16_t x1349 = -1;
int32_t x1361 = -1;
volatile int64_t x1362 = INT64_MAX;
volatile int64_t t33 = -3687LL;
volatile int16_t x1577 = -12613;
uint32_t t34 = 5586U;
uint8_t x1649 = 1U;
volatile int8_t x1652 = 14;
uint16_t x1724 = 2U;
uint64_t t37 = 0LLU;
uint8_t x1785 = UINT8_MAX;
uint8_t x1824 = 17U;
volatile int16_t x1836 = 26;
uint64_t x1897 = 1936472506721022LLU;
uint32_t x1960 = 3U;
static uint8_t x1993 = 29U;
int64_t x2047 = 188270LL;
int64_t x2091 = INT64_MIN;
uint64_t x2107 = 946LLU;
volatile uint16_t x2139 = 485U;
int16_t x2145 = 39;
uint32_t x2147 = 52476181U;
static uint64_t x2177 = 0LLU;
int32_t x2179 = -988260658;
int8_t x2203 = -1;
uint16_t x2206 = UINT16_MAX;
int16_t x2218 = 0;
int64_t x2542 = INT64_MAX;
uint64_t x2605 = 257295321948LLU;
volatile uint8_t x2608 = 1U;
int64_t x2623 = -3LL;
uint8_t x2624 = 58U;
uint64_t t59 = 4859LLU;
uint64_t x2657 = 3LLU;
int32_t x2658 = -1;
uint8_t x2731 = UINT8_MAX;
volatile uint32_t x2806 = UINT32_MAX;
volatile uint32_t t64 = 10U;
volatile uint32_t x2857 = UINT32_MAX;
uint64_t x2897 = 3347359199LLU;
int64_t x2898 = -1LL;
int64_t x2899 = -1LL;
static uint8_t x2941 = 52U;
static int64_t x2945 = -1LL;
static volatile uint32_t x2948 = 49U;
int64_t x3015 = -1LL;
int8_t x3024 = 3;
volatile uint32_t t71 = 127696825U;
volatile int32_t x3166 = INT32_MIN;
uint8_t x3167 = 1U;
int8_t x3168 = 10;
int64_t x3202 = -10LL;
volatile int64_t x3219 = INT64_MIN;
uint32_t x3234 = 1U;
int16_t x3277 = INT16_MIN;
int16_t x3321 = INT16_MAX;
int64_t x3369 = INT64_MAX;
static uint64_t x3486 = 179066051782210784LLU;
volatile int32_t x3487 = INT32_MIN;
uint16_t x3490 = 83U;
int64_t x3614 = -1LL;
volatile uint8_t x3668 = 1U;
int16_t x3701 = -3692;
volatile int16_t x3703 = 1468;
static int16_t x3754 = INT16_MIN;
int8_t x3824 = 2;
uint32_t t92 = 0U;
uint64_t t96 = 255567930236272LLU;
uint8_t x3960 = 56U;
int16_t x3985 = 0;


void f0(void) {
	uint32_t x57 = UINT32_MAX;
	uint8_t x58 = UINT8_MAX;
	uint64_t x59 = 736001889838LLU;
	volatile uint8_t x60 = 31U;

	t0 = (((x57&x58)-x59)>>x60);

	if (t0 != 8589934249LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x121 = 3;
	int32_t x122 = INT32_MAX;
	static uint32_t x123 = UINT32_MAX;
	uint32_t t1 = 86U;

	t1 = (((x121&x122)-x123)>>x124);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x129 = -1;
	volatile uint32_t x130 = 100017311U;
	int64_t x131 = -1LL;

	t2 = (((x129&x130)-x131)>>x132);

	if (t2 != 381LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x190 = 1115U;
	static volatile int16_t x191 = 73;
	uint64_t x192 = 4LLU;
	uint32_t t3 = 750U;

	t3 = (((x189&x190)-x191)>>x192);

	if (t3 != 268435452U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x245 = 764840910724914149LLU;
	volatile uint16_t x246 = UINT16_MAX;
	static volatile int8_t x247 = INT8_MIN;
	static uint64_t t4 = 2587897632845358LLU;

	t4 = (((x245&x246)-x247)>>x248);

	if (t4 != 13LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x257 = UINT64_MAX;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = 3;
	static int32_t x260 = 2;
	volatile uint64_t t5 = 113362206765LLU;

	t5 = (((x257&x258)-x259)>>x260);

	if (t5 != 16383LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MIN;
	static int16_t x271 = -1;
	volatile int32_t t6 = -3799;

	t6 = (((x269&x270)-x271)>>x272);

	if (t6 != 131070) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x278 = 1;
	static int8_t x279 = -1;
	uint32_t x280 = 1U;
	volatile int32_t t7 = 13;

	t7 = (((x277&x278)-x279)>>x280);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x310 = 19U;
	volatile int64_t t8 = -3979550624211LL;

	t8 = (((x309&x310)-x311)>>x312);

	if (t8 != 2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x369 = INT32_MIN;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 15U;
	volatile int64_t t9 = 51722037735586149LL;

	t9 = (((x369&x370)-x371)>>x372);

	if (t9 != 281474976645120LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x377 = 1463068690825LLU;
	int64_t x379 = INT64_MIN;
	static uint32_t x380 = 3U;
	volatile uint64_t t10 = 11269104LLU;

	t10 = (((x377&x378)-x379)>>x380);

	if (t10 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x445 = INT16_MAX;
	int16_t x446 = 4000;
	uint16_t x447 = 85U;
	int8_t x448 = 2;
	volatile int32_t t11 = 92466;

	t11 = (((x445&x446)-x447)>>x448);

	if (t11 != 978) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x482 = UINT8_MAX;
	int8_t x483 = 0;
	int8_t x484 = 31;
	volatile int32_t t12 = -107178;

	t12 = (((x481&x482)-x483)>>x484);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x491 = 26831LLU;
	uint16_t x492 = 3U;
	static uint64_t t13 = 4701530611340368173LLU;

	t13 = (((x489&x490)-x491)>>x492);

	if (t13 != 118948248486LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x549 = INT64_MIN;
	int16_t x551 = INT16_MIN;
	uint16_t x552 = 0U;
	uint64_t t14 = 39979818LLU;

	t14 = (((x549&x550)-x551)>>x552);

	if (t14 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x577 = INT8_MAX;
	uint32_t x578 = UINT32_MAX;
	uint8_t x580 = 26U;
	uint32_t t15 = 119228375U;

	t15 = (((x577&x578)-x579)>>x580);

	if (t15 != 32U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x634 = 0;
	static int8_t x635 = -15;

	t16 = (((x633&x634)-x635)>>x636);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x653 = INT64_MIN;
	int8_t x655 = -1;
	int8_t x656 = 0;
	int64_t t17 = -51LL;

	t17 = (((x653&x654)-x655)>>x656);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x721 = INT16_MIN;
	static uint64_t x722 = 74LLU;
	static int32_t x723 = INT32_MIN;
	uint32_t x724 = 1U;
	uint64_t t18 = 1024LLU;

	t18 = (((x721&x722)-x723)>>x724);

	if (t18 != 1073741824LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x733 = 7027U;
	volatile int64_t x734 = INT64_MAX;
	static int16_t x735 = INT16_MIN;
	volatile int64_t t19 = -147LL;

	t19 = (((x733&x734)-x735)>>x736);

	if (t19 != 19897LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x873 = 9LLU;
	int8_t x874 = INT8_MIN;
	int16_t x875 = -1;
	uint8_t x876 = 3U;

	t20 = (((x873&x874)-x875)>>x876);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x885 = INT16_MIN;
	int64_t x886 = -135107960922350LL;
	uint64_t x887 = 15LLU;
	uint8_t x888 = 3U;
	uint64_t t21 = 2071169055LLU;

	t21 = (((x885&x886)-x887)>>x888);

	if (t21 != 2305826120718577662LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x934 = -1LL;
	uint32_t x935 = 361U;
	volatile uint16_t x936 = 36U;
	static volatile int64_t t22 = -28444136LL;

	t22 = (((x933&x934)-x935)>>x936);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x945 = INT16_MIN;
	static volatile int64_t x947 = -1LL;
	uint32_t x948 = 6U;
	uint64_t t23 = 55LLU;

	t23 = (((x945&x946)-x947)>>x948);

	if (t23 != 1536LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1005 = 2982011876LLU;
	static volatile int16_t x1006 = 0;
	volatile int64_t x1007 = -352791688786028LL;
	uint32_t x1008 = 4U;

	t24 = (((x1005&x1006)-x1007)>>x1008);

	if (t24 != 22049480549126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1173 = INT32_MAX;
	volatile uint32_t x1175 = 59459U;
	static int16_t x1176 = 14;
	volatile uint32_t t25 = 693U;

	t25 = (((x1173&x1174)-x1175)>>x1176);

	if (t25 != 13453U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1201 = 0;
	volatile int32_t x1202 = INT32_MIN;
	int8_t x1203 = -1;
	int32_t t26 = -44089;

	t26 = (((x1201&x1202)-x1203)>>x1204);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1253 = INT32_MIN;
	int16_t x1254 = 44;
	uint32_t t27 = 1749840U;

	t27 = (((x1253&x1254)-x1255)>>x1256);

	if (t27 != 2145555104U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1273 = INT64_MAX;
	uint64_t x1274 = UINT64_MAX;
	int16_t x1275 = INT16_MIN;
	volatile int8_t x1276 = 31;
	volatile uint64_t t28 = 1096417071397607LLU;

	t28 = (((x1273&x1274)-x1275)>>x1276);

	if (t28 != 4294967296LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1297 = -126941362778LL;
	static int16_t x1299 = INT16_MIN;
	volatile uint8_t x1300 = 1U;

	t29 = (((x1297&x1298)-x1299)>>x1300);

	if (t29 != 33491LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1313 = INT32_MIN;
	int32_t x1314 = 8;
	volatile uint64_t x1315 = UINT64_MAX;
	volatile int8_t x1316 = 0;

	t30 = (((x1313&x1314)-x1315)>>x1316);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1330 = 41245LLU;
	uint8_t x1331 = 24U;
	static uint8_t x1332 = 0U;
	uint64_t t31 = 2396011408LLU;

	t31 = (((x1329&x1330)-x1331)>>x1332);

	if (t31 != 41221LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1350 = 29460U;
	volatile uint8_t x1351 = UINT8_MAX;
	static int8_t x1352 = 15;
	volatile int32_t t32 = -2301938;

	t32 = (((x1349&x1350)-x1351)>>x1352);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1363 = 6;
	uint8_t x1364 = 5U;

	t33 = (((x1361&x1362)-x1363)>>x1364);

	if (t33 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1578 = 98U;
	static uint32_t x1579 = 3990U;
	uint16_t x1580 = 24U;

	t34 = (((x1577&x1578)-x1579)>>x1580);

	if (t34 != 255U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1650 = -7LL;
	uint64_t x1651 = 66860376009953LLU;
	volatile uint64_t t35 = 4LLU;

	t35 = (((x1649&x1650)-x1651)>>x1652);

	if (t35 != 1125895826009127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1721 = -1LL;
	uint16_t x1722 = 140U;
	static volatile uint64_t x1723 = 3698300LLU;
	volatile uint64_t t36 = 197170LLU;

	t36 = (((x1721&x1722)-x1723)>>x1724);

	if (t36 != 4611686018426463364LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1773 = 2178624LLU;
	uint16_t x1774 = 79U;
	static int32_t x1775 = -1;
	int8_t x1776 = 1;

	t37 = (((x1773&x1774)-x1775)>>x1776);

	if (t37 != 32LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1786 = 13929608U;
	int16_t x1787 = INT16_MIN;
	int8_t x1788 = 1;
	static uint32_t t38 = 5952U;

	t38 = (((x1785&x1786)-x1787)>>x1788);

	if (t38 != 16452U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x1821 = -1;
	uint8_t x1822 = 11U;
	volatile int64_t x1823 = -5320902737LL;
	volatile int64_t t39 = -2991445LL;

	t39 = (((x1821&x1822)-x1823)>>x1824);

	if (t39 != 40595LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1833 = 28;
	int8_t x1834 = -1;
	uint32_t x1835 = UINT32_MAX;
	uint32_t t40 = 295U;

	t40 = (((x1833&x1834)-x1835)>>x1836);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1898 = INT32_MIN;
	static int32_t x1899 = 184;
	uint32_t x1900 = 3U;
	volatile uint64_t t41 = 508170978LLU;

	t41 = (((x1897&x1898)-x1899)>>x1900);

	if (t41 != 242058988093417LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1941 = INT64_MAX;
	static volatile uint8_t x1942 = UINT8_MAX;
	static uint64_t x1943 = 279952LLU;
	int16_t x1944 = 39;
	volatile uint64_t t42 = 44980443580LLU;

	t42 = (((x1941&x1942)-x1943)>>x1944);

	if (t42 != 33554431LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1957 = 2;
	int64_t x1958 = INT64_MAX;
	volatile int32_t x1959 = -1;
	volatile int64_t t43 = 17135LL;

	t43 = (((x1957&x1958)-x1959)>>x1960);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1973 = 60U;
	uint32_t x1974 = UINT32_MAX;
	int16_t x1975 = INT16_MIN;
	volatile uint8_t x1976 = 9U;
	uint32_t t44 = 465606U;

	t44 = (((x1973&x1974)-x1975)>>x1976);

	if (t44 != 64U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x1994 = 180246205133918LLU;
	static int32_t x1995 = INT32_MAX;
	static uint8_t x1996 = 29U;
	uint64_t t45 = 24438031LLU;

	t45 = (((x1993&x1994)-x1995)>>x1996);

	if (t45 != 34359738364LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2045 = UINT64_MAX;
	int64_t x2046 = -1LL;
	uint8_t x2048 = 29U;
	volatile uint64_t t46 = 654686LLU;

	t46 = (((x2045&x2046)-x2047)>>x2048);

	if (t46 != 34359738367LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2089 = -1;
	int16_t x2090 = -1;
	uint8_t x2092 = 2U;
	volatile int64_t t47 = -131178603218697951LL;

	t47 = (((x2089&x2090)-x2091)>>x2092);

	if (t47 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2105 = -4219152183803737LL;
	int64_t x2106 = -92LL;
	static int32_t x2108 = 4;
	volatile uint64_t t48 = 20434976589309LLU;

	t48 = (((x2105&x2106)-x2107)>>x2108);

	if (t48 != 1152657807595359183LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2137 = INT16_MAX;
	static int64_t x2138 = -1LL;
	uint32_t x2140 = 0U;
	int64_t t49 = 15701753446LL;

	t49 = (((x2137&x2138)-x2139)>>x2140);

	if (t49 != 32282LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2146 = 1015;
	static uint8_t x2148 = 22U;
	static volatile uint32_t t50 = 1U;

	t50 = (((x2145&x2146)-x2147)>>x2148);

	if (t50 != 1011U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2178 = UINT8_MAX;
	uint16_t x2180 = 2U;
	uint64_t t51 = 194112026318156LLU;

	t51 = (((x2177&x2178)-x2179)>>x2180);

	if (t51 != 247065164LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2201 = UINT8_MAX;
	int32_t x2202 = -8532551;
	int16_t x2204 = 1;
	static volatile int32_t t52 = 84110136;

	t52 = (((x2201&x2202)-x2203)>>x2204);

	if (t52 != 93) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x2205 = -4;
	static int8_t x2207 = INT8_MIN;
	static int16_t x2208 = 1;
	static int32_t t53 = -166061320;

	t53 = (((x2205&x2206)-x2207)>>x2208);

	if (t53 != 32830) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2217 = -3;
	int64_t x2219 = -199790535684LL;
	volatile uint16_t x2220 = 0U;
	int64_t t54 = 129814809779LL;

	t54 = (((x2217&x2218)-x2219)>>x2220);

	if (t54 != 199790535684LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2309 = UINT16_MAX;
	volatile int32_t x2310 = INT32_MAX;
	volatile int8_t x2311 = INT8_MIN;
	static int8_t x2312 = 1;
	int32_t t55 = 4453;

	t55 = (((x2309&x2310)-x2311)>>x2312);

	if (t55 != 32831) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2541 = -43;
	volatile int16_t x2543 = INT16_MAX;
	static int8_t x2544 = 0;
	volatile int64_t t56 = -30LL;

	t56 = (((x2541&x2542)-x2543)>>x2544);

	if (t56 != 9223372036854742998LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x2545 = 95U;
	int32_t x2546 = -1;
	volatile uint64_t x2547 = UINT64_MAX;
	uint8_t x2548 = 29U;
	uint64_t t57 = 2144234483006061LLU;

	t57 = (((x2545&x2546)-x2547)>>x2548);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x2606 = UINT16_MAX;
	static volatile int64_t x2607 = INT64_MIN;
	static volatile uint64_t t58 = 1849617320405097970LLU;

	t58 = (((x2605&x2606)-x2607)>>x2608);

	if (t58 != 4611686018427389358LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2621 = 28LLU;
	int8_t x2622 = -1;

	t59 = (((x2621&x2622)-x2623)>>x2624);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x2659 = INT8_MIN;
	int8_t x2660 = 1;
	uint64_t t60 = 33102688506759327LLU;

	t60 = (((x2657&x2658)-x2659)>>x2660);

	if (t60 != 65LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2685 = INT32_MIN;
	int16_t x2686 = 367;
	uint64_t x2687 = 690438574807LLU;
	uint8_t x2688 = 0U;
	uint64_t t61 = 1356772LLU;

	t61 = (((x2685&x2686)-x2687)>>x2688);

	if (t61 != 18446743383270976809LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x2729 = UINT64_MAX;
	uint16_t x2730 = UINT16_MAX;
	uint8_t x2732 = 7U;
	static uint64_t t62 = 93019LLU;

	t62 = (((x2729&x2730)-x2731)>>x2732);

	if (t62 != 510LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x2801 = 70086;
	uint32_t x2802 = UINT32_MAX;
	uint64_t x2803 = 6658LLU;
	static uint8_t x2804 = 59U;
	volatile uint64_t t63 = 7LLU;

	t63 = (((x2801&x2802)-x2803)>>x2804);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x2805 = INT32_MIN;
	volatile uint8_t x2807 = UINT8_MAX;
	int8_t x2808 = 5;

	t64 = (((x2805&x2806)-x2807)>>x2808);

	if (t64 != 67108856U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2817 = UINT64_MAX;
	int8_t x2818 = -1;
	int64_t x2819 = INT64_MAX;
	volatile int32_t x2820 = 2;
	uint64_t t65 = 203LLU;

	t65 = (((x2817&x2818)-x2819)>>x2820);

	if (t65 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2858 = INT64_MAX;
	int8_t x2859 = -4;
	int16_t x2860 = 0;
	volatile int64_t t66 = 88148687107LL;

	t66 = (((x2857&x2858)-x2859)>>x2860);

	if (t66 != 4294967299LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x2900 = 6U;
	volatile uint64_t t67 = 1445863LLU;

	t67 = (((x2897&x2898)-x2899)>>x2900);

	if (t67 != 52302487LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2942 = 1U;
	int16_t x2943 = INT16_MIN;
	uint8_t x2944 = 13U;
	volatile int32_t t68 = -31;

	t68 = (((x2941&x2942)-x2943)>>x2944);

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x2946 = -1;
	static int8_t x2947 = INT8_MIN;
	int64_t t69 = -14095149302LL;

	t69 = (((x2945&x2946)-x2947)>>x2948);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x3013 = INT32_MAX;
	int8_t x3014 = -1;
	int8_t x3016 = 2;
	static int64_t t70 = 123633274LL;

	t70 = (((x3013&x3014)-x3015)>>x3016);

	if (t70 != 536870912LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3021 = 49U;
	int16_t x3022 = INT16_MAX;
	static int8_t x3023 = INT8_MIN;

	t71 = (((x3021&x3022)-x3023)>>x3024);

	if (t71 != 22U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3165 = 1U;
	volatile uint32_t t72 = 89U;

	t72 = (((x3165&x3166)-x3167)>>x3168);

	if (t72 != 4194303U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3201 = 651U;
	static uint8_t x3203 = UINT8_MAX;
	uint32_t x3204 = 7U;
	int64_t t73 = -4078LL;

	t73 = (((x3201&x3202)-x3203)>>x3204);

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3217 = INT64_MIN;
	volatile int32_t x3218 = -1291;
	volatile uint16_t x3220 = 3U;
	int64_t t74 = -65452LL;

	t74 = (((x3217&x3218)-x3219)>>x3220);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3221 = INT16_MAX;
	int32_t x3222 = -66745070;
	int8_t x3223 = 17;
	uint8_t x3224 = 13U;
	static int32_t t75 = 3330;

	t75 = (((x3221&x3222)-x3223)>>x3224);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3233 = -16252;
	uint32_t x3235 = 6U;
	uint8_t x3236 = 1U;
	static uint32_t t76 = 980925U;

	t76 = (((x3233&x3234)-x3235)>>x3236);

	if (t76 != 2147483645U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3278 = 1U;
	int8_t x3279 = INT8_MIN;
	int8_t x3280 = 5;
	volatile int32_t t77 = -89093873;

	t77 = (((x3277&x3278)-x3279)>>x3280);

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3317 = -1;
	int8_t x3318 = INT8_MAX;
	volatile uint32_t x3319 = 15481U;
	uint8_t x3320 = 1U;
	uint32_t t78 = 301834U;

	t78 = (((x3317&x3318)-x3319)>>x3320);

	if (t78 != 2147475971U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3322 = 13014U;
	volatile uint64_t x3323 = 150808672251116LLU;
	int8_t x3324 = 35;
	volatile uint64_t t79 = 1858421020554247245LLU;

	t79 = (((x3321&x3322)-x3323)>>x3324);

	if (t79 != 536866522LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3370 = INT8_MAX;
	int8_t x3371 = 0;
	volatile uint16_t x3372 = 12U;
	int64_t t80 = -12LL;

	t80 = (((x3369&x3370)-x3371)>>x3372);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x3433 = 24728131291851451LL;
	int16_t x3434 = -1;
	static volatile uint64_t x3435 = UINT64_MAX;
	volatile uint8_t x3436 = 37U;
	static uint64_t t81 = 1180910LLU;

	t81 = (((x3433&x3434)-x3435)>>x3436);

	if (t81 != 179920LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3481 = UINT32_MAX;
	uint64_t x3482 = 26168951LLU;
	volatile int8_t x3483 = 0;
	uint8_t x3484 = 9U;
	volatile uint64_t t82 = 2948051078962777446LLU;

	t82 = (((x3481&x3482)-x3483)>>x3484);

	if (t82 != 51111LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x3485 = INT8_MIN;
	static uint32_t x3488 = 3U;
	uint64_t t83 = 369420225643LLU;

	t83 = (((x3485&x3486)-x3487)>>x3488);

	if (t83 != 22383256741211792LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x3489 = INT64_MIN;
	volatile int64_t x3491 = -253601092100LL;
	int8_t x3492 = 0;
	int64_t t84 = -118022955991899418LL;

	t84 = (((x3489&x3490)-x3491)>>x3492);

	if (t84 != 253601092100LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x3573 = 3U;
	int64_t x3574 = INT64_MIN;
	static uint64_t x3575 = 697186667058LLU;
	uint8_t x3576 = 0U;
	volatile uint64_t t85 = 1329933597LLU;

	t85 = (((x3573&x3574)-x3575)>>x3576);

	if (t85 != 18446743376522884558LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x3613 = 899668LLU;
	int8_t x3615 = -13;
	uint16_t x3616 = 1U;
	static uint64_t t86 = 1039172908496809LLU;

	t86 = (((x3613&x3614)-x3615)>>x3616);

	if (t86 != 449840LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3665 = UINT32_MAX;
	static volatile int16_t x3666 = 197;
	int16_t x3667 = INT16_MIN;
	uint32_t t87 = 401997U;

	t87 = (((x3665&x3666)-x3667)>>x3668);

	if (t87 != 16482U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3669 = UINT8_MAX;
	int16_t x3670 = -1;
	static uint32_t x3671 = 240890U;
	volatile int8_t x3672 = 0;
	volatile uint32_t t88 = 7974U;

	t88 = (((x3669&x3670)-x3671)>>x3672);

	if (t88 != 4294726661U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x3702 = 31900U;
	uint16_t x3704 = 8U;
	int32_t t89 = 0;

	t89 = (((x3701&x3702)-x3703)>>x3704);

	if (t89 != 106) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x3753 = UINT32_MAX;
	int16_t x3755 = 12559;
	uint8_t x3756 = 0U;
	volatile uint32_t t90 = 58U;

	t90 = (((x3753&x3754)-x3755)>>x3756);

	if (t90 != 4294921969U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3769 = -1;
	int16_t x3770 = -1;
	static int64_t x3771 = INT64_MIN;
	static uint8_t x3772 = 15U;
	int64_t t91 = -91678LL;

	t91 = (((x3769&x3770)-x3771)>>x3772);

	if (t91 != 281474976710655LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3821 = INT8_MAX;
	static int8_t x3822 = -1;
	static volatile uint32_t x3823 = 3514167U;

	t92 = (((x3821&x3822)-x3823)>>x3824);

	if (t92 != 1072863314U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3837 = 585781899246LL;
	int8_t x3838 = -1;
	uint8_t x3839 = UINT8_MAX;
	uint16_t x3840 = 4U;
	int64_t t93 = 238684481153LL;

	t93 = (((x3837&x3838)-x3839)>>x3840);

	if (t93 != 36611368686LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x3889 = 45386344LL;
	int64_t x3890 = -8586720217LL;
	int32_t x3891 = INT32_MIN;
	int64_t x3892 = 1LL;
	static volatile int64_t t94 = -346984984163198LL;

	t94 = (((x3889&x3890)-x3891)>>x3892);

	if (t94 != 1075315728LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3909 = 401LL;
	volatile int8_t x3910 = INT8_MAX;
	static int16_t x3911 = INT16_MIN;
	static uint8_t x3912 = 29U;
	static volatile int64_t t95 = -36LL;

	t95 = (((x3909&x3910)-x3911)>>x3912);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x3925 = -1;
	int32_t x3926 = 135;
	uint64_t x3927 = UINT64_MAX;
	volatile uint8_t x3928 = 2U;

	t96 = (((x3925&x3926)-x3927)>>x3928);

	if (t96 != 34LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x3957 = INT64_MIN;
	int32_t x3958 = INT32_MIN;
	volatile int64_t x3959 = INT64_MIN;
	volatile int64_t t97 = 131716LL;

	t97 = (((x3957&x3958)-x3959)>>x3960);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3986 = 3313384643467LL;
	static int32_t x3987 = INT32_MIN;
	int8_t x3988 = 0;
	static volatile int64_t t98 = 768025LL;

	t98 = (((x3985&x3986)-x3987)>>x3988);

	if (t98 != 2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4069 = 514740233;
	static uint32_t x4070 = 31769620U;
	uint8_t x4071 = 3U;
	static uint8_t x4072 = 4U;
	uint32_t t99 = 8060U;

	t99 = (((x4069&x4070)-x4071)>>x4072);

	if (t99 != 672767U) { NG(); } else { ; }
	
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

