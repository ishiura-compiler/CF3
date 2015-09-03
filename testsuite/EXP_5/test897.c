#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x167 = 1;
uint64_t x234 = 703848863LLU;
uint8_t x235 = 28U;
volatile int32_t x285 = -587848;
int8_t x334 = INT8_MAX;
uint8_t x367 = 29U;
int64_t x368 = 433160233344053LL;
int64_t x384 = INT64_MIN;
static int16_t x637 = INT16_MIN;
uint32_t x814 = UINT32_MAX;
int16_t x815 = 0;
volatile int64_t t13 = 4929028400859LL;
int16_t x862 = 3488;
uint8_t x1097 = 8U;
uint8_t x1099 = 4U;
volatile int32_t t18 = -30731;
int32_t x1131 = 1;
int32_t t19 = 7139;
uint64_t t20 = 800LLU;
volatile int32_t x1487 = 13;
int16_t x1488 = -5;
static int32_t t21 = 1168970;
int8_t x1575 = 4;
int64_t x1652 = -1LL;
static uint64_t t24 = 1523913727302LLU;
int8_t x1846 = 33;
static int8_t x1949 = INT8_MAX;
static int64_t x1952 = -1LL;
int16_t x2163 = 1;
uint8_t x2164 = UINT8_MAX;
static uint8_t x2172 = UINT8_MAX;
int64_t x2196 = INT64_MIN;
int32_t x2213 = 2;
uint8_t x2220 = UINT8_MAX;
int64_t t38 = -54965044951653LL;
volatile uint32_t x2345 = 4298U;
uint32_t x2626 = 26092425U;
volatile uint16_t x2634 = UINT16_MAX;
int8_t x2646 = INT8_MAX;
int16_t x2647 = 1;
uint32_t x2648 = 4326U;
uint16_t x2682 = UINT16_MAX;
int32_t x2721 = -276441192;
static uint64_t t48 = 168131280148430767LLU;
volatile int64_t x2808 = -1LL;
volatile int64_t t49 = 6LL;
int64_t t50 = INT64_MIN;
int8_t x2835 = 2;
uint64_t t51 = 12LLU;
uint8_t x2924 = 1U;
uint32_t t53 = 505U;
uint32_t t54 = 1000120U;
volatile int32_t x3169 = -1;
uint8_t x3171 = 19U;
volatile int8_t x3621 = -18;
int16_t x3624 = INT16_MIN;
static int32_t x3692 = INT32_MAX;
int8_t x3965 = -1;
volatile int8_t x3968 = -43;
static volatile int8_t x4091 = 1;
volatile uint8_t x4159 = 0U;
static int8_t x4321 = -1;
static uint64_t x4324 = 30208647174LLU;
int16_t x4452 = INT16_MAX;
int16_t x4487 = 19;
static int64_t x4488 = INT64_MIN;
static int16_t x4515 = 1;
uint16_t x4539 = 0U;
uint32_t x4705 = 31547253U;
uint64_t x4706 = 486LLU;
static int64_t x4833 = -102620510LL;
uint8_t x4836 = UINT8_MAX;
static volatile int64_t t79 = -167LL;
volatile int64_t x4868 = -3916LL;
static int64_t x4949 = 101870910489497152LL;
volatile uint64_t x4970 = UINT64_MAX;
volatile int32_t x5090 = 411;
int8_t x5214 = INT8_MAX;
int8_t x5215 = 2;
volatile int8_t x5216 = INT8_MAX;
static int32_t x5381 = INT32_MIN;
static int16_t x5640 = INT16_MIN;
uint16_t x5658 = 44U;
int32_t t91 = 1;
int8_t x5704 = -1;
static uint64_t t95 = UINT64_MAX;
uint16_t x5743 = 11U;
int64_t x5774 = 1626437906LL;


void f0(void) {
	int32_t x49 = INT32_MAX;
	volatile int16_t x50 = INT16_MAX;
	uint8_t x51 = 13U;
	uint32_t x52 = 554767222U;
	static uint32_t t0 = 12821213U;

	t0 = (x49^((x50<<x51)/x52));

	if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = 44U;
	int8_t x168 = 47;
	int64_t t1 = -157850135817185998LL;

	t1 = (x165^((x166<<x167)/x168));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x209 = INT8_MIN;
	volatile int16_t x210 = INT16_MAX;
	static int8_t x211 = 3;
	uint16_t x212 = UINT16_MAX;
	int32_t t2 = -5386043;

	t2 = (x209^((x210<<x211)/x212));

	if (t2 != -125) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x233 = 1293U;
	int64_t x236 = INT64_MIN;
	volatile uint64_t t3 = 1817750993449LLU;

	t3 = (x233^((x234<<x235)/x236));

	if (t3 != 1293LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x286 = 120270999;
	int8_t x287 = 2;
	int32_t x288 = INT32_MIN;
	static int32_t t4 = 470;

	t4 = (x285^((x286<<x287)/x288));

	if (t4 != -587848) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x333 = 893;
	static int8_t x335 = 1;
	static volatile int16_t x336 = -1;
	int32_t t5 = 68;

	t5 = (x333^((x334<<x335)/x336));

	if (t5 != -897) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x365 = -1LL;
	volatile int64_t x366 = 36761LL;
	volatile int64_t t6 = 6131157179415LL;

	t6 = (x365^((x366<<x367)/x368));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x369 = -3704;
	static volatile uint8_t x370 = 4U;
	uint16_t x371 = 9U;
	int16_t x372 = 16305;
	int32_t t7 = 491;

	t7 = (x369^((x370<<x371)/x372));

	if (t7 != -3704) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x381 = -33;
	int16_t x382 = 4;
	static uint16_t x383 = 0U;
	int64_t t8 = 390396835364674244LL;

	t8 = (x381^((x382<<x383)/x384));

	if (t8 != -33LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x461 = 7333482U;
	static volatile uint32_t x462 = 1793329U;
	static volatile uint8_t x463 = 7U;
	int64_t x464 = -1LL;
	volatile int64_t t9 = 61LL;

	t9 = (x461^((x462<<x463)/x464));

	if (t9 != -230784534LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x638 = 12744985414731LLU;
	int16_t x639 = 0;
	uint16_t x640 = 32326U;
	volatile uint64_t t10 = 11141955112143LLU;

	t10 = (x637^((x638<<x639)/x640));

	if (t10 != 18446744073315319459LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x669 = 101U;
	int8_t x670 = 1;
	static volatile uint16_t x671 = 1U;
	volatile uint8_t x672 = UINT8_MAX;
	int32_t t11 = -33894328;

	t11 = (x669^((x670<<x671)/x672));

	if (t11 != 101) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x813 = -1LL;
	int8_t x816 = INT8_MAX;
	static int64_t t12 = 49380581714LL;

	t12 = (x813^((x814<<x815)/x816));

	if (t12 != -33818641LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x821 = 0;
	int64_t x822 = 12218443984319LL;
	uint32_t x823 = 0U;
	static int8_t x824 = -1;

	t13 = (x821^((x822<<x823)/x824));

	if (t13 != -12218443984319LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x829 = INT64_MIN;
	uint8_t x830 = 17U;
	volatile int8_t x831 = 1;
	int32_t x832 = 197707315;
	volatile int64_t t14 = INT64_MIN;

	t14 = (x829^((x830<<x831)/x832));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x861 = INT64_MIN;
	int16_t x863 = 0;
	static uint8_t x864 = UINT8_MAX;
	static volatile int64_t t15 = 35988905662916LL;

	t15 = (x861^((x862<<x863)/x864));

	if (t15 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x885 = INT8_MIN;
	int64_t x886 = 913826285LL;
	uint16_t x887 = 1U;
	int16_t x888 = 2181;
	volatile int64_t t16 = 4715637125046562LL;

	t16 = (x885^((x886<<x887)/x888));

	if (t16 != -837916LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1045 = INT32_MAX;
	static uint8_t x1046 = 8U;
	int8_t x1047 = 0;
	int64_t x1048 = -19467573301LL;
	int64_t t17 = 611993131LL;

	t17 = (x1045^((x1046<<x1047)/x1048));

	if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x1098 = INT8_MAX;
	static uint16_t x1100 = 10U;

	t18 = (x1097^((x1098<<x1099)/x1100));

	if (t18 != 195) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x1129 = INT8_MIN;
	int8_t x1130 = 6;
	int8_t x1132 = -1;

	t19 = (x1129^((x1130<<x1131)/x1132));

	if (t19 != 116) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1337 = UINT64_MAX;
	int64_t x1338 = 1656584LL;
	static volatile int8_t x1339 = 38;
	int16_t x1340 = INT16_MIN;

	t20 = (x1337^((x1338<<x1339)/x1340));

	if (t20 != 13896433795071LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1485 = 103U;
	int16_t x1486 = 29;

	t21 = (x1485^((x1486<<x1487)/x1488));

	if (t21 != -47616) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1573 = INT16_MIN;
	int16_t x1574 = INT16_MAX;
	int32_t x1576 = INT32_MIN;
	static volatile int32_t t22 = 123043060;

	t22 = (x1573^((x1574<<x1575)/x1576));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1649 = INT16_MIN;
	uint64_t x1650 = 230032LLU;
	uint32_t x1651 = 10U;
	volatile uint64_t t23 = 1006LLU;

	t23 = (x1649^((x1650<<x1651)/x1652));

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1689 = 3;
	static volatile uint64_t x1690 = 21846556581962302LLU;
	volatile uint16_t x1691 = 31U;
	uint32_t x1692 = 107728021U;

	t24 = (x1689^((x1690<<x1691)/x1692));

	if (t24 != 156730766482LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1701 = UINT64_MAX;
	uint64_t x1702 = UINT64_MAX;
	volatile uint8_t x1703 = 6U;
	int32_t x1704 = -1627;
	uint64_t t25 = 545LLU;

	t25 = (x1701^((x1702<<x1703)/x1704));

	if (t25 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1709 = INT32_MIN;
	uint32_t x1710 = 365U;
	static int8_t x1711 = 6;
	static volatile int16_t x1712 = 9961;
	static uint32_t t26 = 2368U;

	t26 = (x1709^((x1710<<x1711)/x1712));

	if (t26 != 2147483650U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1845 = INT16_MIN;
	int16_t x1847 = 0;
	uint16_t x1848 = 21322U;
	volatile int32_t t27 = 29640825;

	t27 = (x1845^((x1846<<x1847)/x1848));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1950 = 58;
	static volatile uint16_t x1951 = 6U;
	volatile int64_t t28 = -2101659LL;

	t28 = (x1949^((x1950<<x1951)/x1952));

	if (t28 != -3585LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1965 = -7;
	uint8_t x1966 = 6U;
	static int8_t x1967 = 0;
	static int16_t x1968 = INT16_MIN;
	volatile int32_t t29 = 33;

	t29 = (x1965^((x1966<<x1967)/x1968));

	if (t29 != -7) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1969 = INT64_MIN;
	uint16_t x1970 = 6U;
	static int16_t x1971 = 26;
	static int8_t x1972 = INT8_MAX;
	volatile int64_t t30 = -4690825810918LL;

	t30 = (x1969^((x1970<<x1971)/x1972));

	if (t30 != -9223372036851605311LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2009 = -29;
	uint32_t x2010 = UINT32_MAX;
	int8_t x2011 = 26;
	static int16_t x2012 = -1;
	static uint32_t t31 = 1787490434U;

	t31 = (x2009^((x2010<<x2011)/x2012));

	if (t31 != 4294967267U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2049 = UINT8_MAX;
	uint16_t x2050 = 8U;
	static uint64_t x2051 = 2LLU;
	static uint8_t x2052 = UINT8_MAX;
	int32_t t32 = -2;

	t32 = (x2049^((x2050<<x2051)/x2052));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2117 = 0;
	uint16_t x2118 = 27720U;
	int16_t x2119 = 0;
	volatile uint8_t x2120 = 3U;
	volatile int32_t t33 = 4;

	t33 = (x2117^((x2118<<x2119)/x2120));

	if (t33 != 9240) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x2161 = INT16_MIN;
	uint32_t x2162 = 1626731384U;
	volatile uint32_t t34 = 7787U;

	t34 = (x2161^((x2162<<x2163)/x2164));

	if (t34 != 4282199701U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2169 = INT32_MIN;
	uint64_t x2170 = 320969LLU;
	uint16_t x2171 = 15U;
	volatile uint64_t t35 = 304LLU;

	t35 = (x2169^((x2170<<x2171)/x2172));

	if (t35 != 18446744071603313113LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2193 = 380U;
	int32_t x2194 = 12204;
	static uint8_t x2195 = 7U;
	volatile int64_t t36 = -13334203459LL;

	t36 = (x2193^((x2194<<x2195)/x2196));

	if (t36 != 380LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2214 = 5944U;
	volatile int32_t x2215 = 1;
	uint64_t x2216 = UINT64_MAX;
	static volatile uint64_t t37 = 216605537500393815LLU;

	t37 = (x2213^((x2214<<x2215)/x2216));

	if (t37 != 2LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x2217 = 6U;
	int64_t x2218 = 79LL;
	static uint16_t x2219 = 1U;

	t38 = (x2217^((x2218<<x2219)/x2220));

	if (t38 != 6LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2225 = INT32_MIN;
	static uint64_t x2226 = UINT64_MAX;
	int8_t x2227 = 0;
	uint16_t x2228 = UINT16_MAX;
	uint64_t t39 = 1014647299144117LLU;

	t39 = (x2225^((x2226<<x2227)/x2228));

	if (t39 != 18446462592290455553LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2229 = INT8_MIN;
	int16_t x2230 = 3609;
	int8_t x2231 = 0;
	int32_t x2232 = 124;
	volatile int32_t t40 = 83;

	t40 = (x2229^((x2230<<x2231)/x2232));

	if (t40 != -99) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2285 = 842453LLU;
	int16_t x2286 = INT16_MAX;
	int8_t x2287 = 0;
	volatile int16_t x2288 = -1;
	volatile uint64_t t41 = 3053400046678LLU;

	t41 = (x2285^((x2286<<x2287)/x2288));

	if (t41 != 18446744073708722900LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2346 = 3;
	uint16_t x2347 = 14U;
	uint8_t x2348 = 4U;
	uint32_t t42 = 1U;

	t42 = (x2345^((x2346<<x2347)/x2348));

	if (t42 != 8394U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2553 = INT8_MIN;
	volatile int8_t x2554 = 0;
	uint8_t x2555 = 22U;
	uint64_t x2556 = 118639061625574LLU;
	static volatile uint64_t t43 = 39189LLU;

	t43 = (x2553^((x2554<<x2555)/x2556));

	if (t43 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2625 = -24;
	static uint32_t x2627 = 6U;
	int8_t x2628 = INT8_MIN;
	uint32_t t44 = 1015U;

	t44 = (x2625^((x2626<<x2627)/x2628));

	if (t44 != 4294967272U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2633 = -1;
	int8_t x2635 = 1;
	static int64_t x2636 = INT64_MIN;
	volatile int64_t t45 = -152860LL;

	t45 = (x2633^((x2634<<x2635)/x2636));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2645 = INT64_MAX;
	static volatile int64_t t46 = INT64_MAX;

	t46 = (x2645^((x2646<<x2647)/x2648));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2681 = -1;
	uint8_t x2683 = 9U;
	static int8_t x2684 = 6;
	int32_t t47 = 34780;

	t47 = (x2681^((x2682<<x2683)/x2684));

	if (t47 != -5592321) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2722 = 12;
	uint32_t x2723 = 7U;
	uint64_t x2724 = 3864193334LLU;

	t48 = (x2721^((x2722<<x2723)/x2724));

	if (t48 != 18446744073433110424LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2805 = INT16_MIN;
	uint32_t x2806 = 1010227797U;
	uint32_t x2807 = 1U;

	t49 = (x2805^((x2806<<x2807)/x2808));

	if (t49 != 2020461398LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2829 = INT64_MIN;
	uint32_t x2830 = UINT32_MAX;
	int8_t x2831 = 1;
	int64_t x2832 = INT64_MIN;

	t50 = (x2829^((x2830<<x2831)/x2832));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2833 = 306066073LLU;
	uint8_t x2834 = UINT8_MAX;
	volatile uint64_t x2836 = 51LLU;

	t51 = (x2833^((x2834<<x2835)/x2836));

	if (t51 != 306066061LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2841 = UINT32_MAX;
	uint64_t x2842 = 1465288850639LLU;
	volatile uint64_t x2843 = 1LLU;
	static uint64_t x2844 = 3469LLU;
	volatile uint64_t t52 = 115577015843732437LLU;

	t52 = (x2841^((x2842<<x2843)/x2844));

	if (t52 != 3450176952LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2921 = -7503;
	static uint32_t x2922 = 2079765U;
	uint16_t x2923 = 0U;

	t53 = (x2921^((x2922<<x2923)/x2924));

	if (t53 != 4292894372U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2997 = 1U;
	volatile uint32_t x2998 = 45966032U;
	int32_t x2999 = 1;
	int32_t x3000 = -7100211;

	t54 = (x2997^((x2998<<x2999)/x3000));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3029 = 294840805LLU;
	static uint64_t x3030 = 126640912LLU;
	int8_t x3031 = 7;
	uint64_t x3032 = UINT64_MAX;
	uint64_t t55 = 3501LLU;

	t55 = (x3029^((x3030<<x3031)/x3032));

	if (t55 != 294840805LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3170 = 0U;
	int8_t x3172 = 59;
	int32_t t56 = 698901;

	t56 = (x3169^((x3170<<x3171)/x3172));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3325 = -7;
	static volatile int32_t x3326 = 0;
	int8_t x3327 = 1;
	int8_t x3328 = 16;
	volatile int32_t t57 = -52;

	t57 = (x3325^((x3326<<x3327)/x3328));

	if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3369 = INT8_MIN;
	int8_t x3370 = 27;
	uint32_t x3371 = 6U;
	uint32_t x3372 = 754730U;
	volatile uint32_t t58 = 4U;

	t58 = (x3369^((x3370<<x3371)/x3372));

	if (t58 != 4294967168U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x3622 = 2288361033750896286LLU;
	uint16_t x3623 = 8U;
	uint64_t t59 = 2399028785951206LLU;

	t59 = (x3621^((x3622<<x3623)/x3624));

	if (t59 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3657 = INT16_MAX;
	static volatile uint32_t x3658 = 792U;
	uint16_t x3659 = 2U;
	static uint8_t x3660 = UINT8_MAX;
	uint32_t t60 = 18781388U;

	t60 = (x3657^((x3658<<x3659)/x3660));

	if (t60 != 32755U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x3689 = INT16_MIN;
	static volatile uint32_t x3690 = 3597256U;
	uint8_t x3691 = 1U;
	uint32_t t61 = 55U;

	t61 = (x3689^((x3690<<x3691)/x3692));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3701 = -1;
	int64_t x3702 = 1084805424LL;
	uint8_t x3703 = 2U;
	int32_t x3704 = 1;
	int64_t t62 = -923222LL;

	t62 = (x3701^((x3702<<x3703)/x3704));

	if (t62 != -4339221697LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3966 = UINT32_MAX;
	uint8_t x3967 = 14U;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x3965^((x3966<<x3967)/x3968));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4029 = UINT16_MAX;
	volatile uint8_t x4030 = 0U;
	int8_t x4031 = 1;
	int16_t x4032 = -1;
	static int32_t t64 = 112689481;

	t64 = (x4029^((x4030<<x4031)/x4032));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x4069 = INT64_MIN;
	uint8_t x4070 = 26U;
	static uint8_t x4071 = 4U;
	static int16_t x4072 = INT16_MIN;
	int64_t t65 = INT64_MIN;

	t65 = (x4069^((x4070<<x4071)/x4072));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x4089 = INT16_MIN;
	uint32_t x4090 = UINT32_MAX;
	volatile int16_t x4092 = -1;
	static volatile uint32_t t66 = 876009U;

	t66 = (x4089^((x4090<<x4091)/x4092));

	if (t66 != 4294934528U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4157 = UINT64_MAX;
	uint16_t x4158 = 13U;
	int32_t x4160 = INT32_MIN;
	static uint64_t t67 = UINT64_MAX;

	t67 = (x4157^((x4158<<x4159)/x4160));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4289 = 14U;
	int8_t x4290 = 0;
	volatile int16_t x4291 = 0;
	uint64_t x4292 = UINT64_MAX;
	uint64_t t68 = 2711LLU;

	t68 = (x4289^((x4290<<x4291)/x4292));

	if (t68 != 14LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4322 = INT16_MAX;
	uint8_t x4323 = 0U;
	static volatile uint64_t t69 = UINT64_MAX;

	t69 = (x4321^((x4322<<x4323)/x4324));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4337 = INT64_MIN;
	volatile uint32_t x4338 = 0U;
	uint16_t x4339 = 20U;
	uint64_t x4340 = UINT64_MAX;
	volatile uint64_t t70 = 159173382282517LLU;

	t70 = (x4337^((x4338<<x4339)/x4340));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4449 = INT8_MIN;
	uint64_t x4450 = 940925744LLU;
	int8_t x4451 = 0;
	volatile uint64_t t71 = 17793077053771LLU;

	t71 = (x4449^((x4450<<x4451)/x4452));

	if (t71 != 18446744073709522859LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4485 = INT64_MIN;
	uint64_t x4486 = 0LLU;
	uint64_t t72 = 146LLU;

	t72 = (x4485^((x4486<<x4487)/x4488));

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x4513 = UINT8_MAX;
	uint8_t x4514 = 42U;
	static int32_t x4516 = INT32_MIN;
	int32_t t73 = -1016725;

	t73 = (x4513^((x4514<<x4515)/x4516));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4533 = 1U;
	volatile uint64_t x4534 = 1942030349947583LLU;
	uint16_t x4535 = 1U;
	volatile uint32_t x4536 = 10U;
	static volatile uint64_t t74 = 183516043464179062LLU;

	t74 = (x4533^((x4534<<x4535)/x4536));

	if (t74 != 388406069989517LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4537 = INT16_MIN;
	uint32_t x4538 = UINT32_MAX;
	int8_t x4540 = -1;
	volatile uint32_t t75 = 5513057U;

	t75 = (x4537^((x4538<<x4539)/x4540));

	if (t75 != 4294934529U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4617 = 504U;
	static int16_t x4618 = INT16_MAX;
	volatile int16_t x4619 = 8;
	static uint32_t x4620 = 55U;
	volatile uint32_t t76 = 557328906U;

	t76 = (x4617^((x4618<<x4619)/x4620));

	if (t76 != 152123U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4707 = 20;
	int32_t x4708 = -5456;
	uint64_t t77 = 51LLU;

	t77 = (x4705^((x4706<<x4707)/x4708));

	if (t77 != 31547253LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4733 = INT32_MAX;
	volatile int8_t x4734 = INT8_MAX;
	uint8_t x4735 = 5U;
	int64_t x4736 = INT64_MIN;
	static int64_t t78 = 390LL;

	t78 = (x4733^((x4734<<x4735)/x4736));

	if (t78 != 2147483647LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4834 = 678;
	uint8_t x4835 = 5U;

	t79 = (x4833^((x4834<<x4835)/x4836));

	if (t79 != -102620425LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4865 = 73270734682578LL;
	uint64_t x4866 = 1085190LLU;
	int8_t x4867 = 0;
	volatile uint64_t t80 = 3980992875363LLU;

	t80 = (x4865^((x4866<<x4867)/x4868));

	if (t80 != 73270734682578LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4917 = -5253;
	uint16_t x4918 = 1871U;
	volatile int16_t x4919 = 1;
	int8_t x4920 = -11;
	int32_t t81 = -1753574;

	t81 = (x4917^((x4918<<x4919)/x4920));

	if (t81 != 5591) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4950 = UINT32_MAX;
	uint8_t x4951 = 27U;
	static int8_t x4952 = -1;
	volatile int64_t t82 = 49982365874365LL;

	t82 = (x4949^((x4950<<x4951)/x4952));

	if (t82 != 101870910489497152LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4969 = INT8_MIN;
	volatile uint8_t x4971 = 38U;
	volatile int32_t x4972 = -1;
	volatile uint64_t t83 = 1092582798800LLU;

	t83 = (x4969^((x4970<<x4971)/x4972));

	if (t83 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x5089 = INT64_MIN;
	uint32_t x5091 = 2U;
	int64_t x5092 = -3327597566977765528LL;
	volatile int64_t t84 = INT64_MIN;

	t84 = (x5089^((x5090<<x5091)/x5092));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x5129 = 2952U;
	static volatile uint32_t x5130 = 48395964U;
	uint8_t x5131 = 4U;
	volatile int32_t x5132 = -1330;
	static volatile uint32_t t85 = 117794938U;

	t85 = (x5129^((x5130<<x5131)/x5132));

	if (t85 != 2952U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5213 = -1;
	volatile int32_t t86 = 17;

	t86 = (x5213^((x5214<<x5215)/x5216));

	if (t86 != -5) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5382 = UINT32_MAX;
	uint8_t x5383 = 12U;
	static uint8_t x5384 = 44U;
	volatile uint32_t t87 = 145414U;

	t87 = (x5381^((x5382<<x5383)/x5384));

	if (t87 != 2245096448U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5537 = INT32_MIN;
	int8_t x5538 = 27;
	volatile int32_t x5539 = 3;
	int8_t x5540 = INT8_MIN;
	int32_t t88 = INT32_MAX;

	t88 = (x5537^((x5538<<x5539)/x5540));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5585 = INT16_MIN;
	static uint64_t x5586 = 623910880920LLU;
	uint16_t x5587 = 59U;
	uint64_t x5588 = 21312945484103630LLU;
	volatile uint64_t t89 = 15973429899616LLU;

	t89 = (x5585^((x5586<<x5587)/x5588));

	if (t89 != 18446744073709519497LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5637 = -5636913891LL;
	static int8_t x5638 = 57;
	int16_t x5639 = 1;
	volatile int64_t t90 = -22839533824LL;

	t90 = (x5637^((x5638<<x5639)/x5640));

	if (t90 != -5636913891LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5657 = 11144;
	volatile uint8_t x5659 = 7U;
	int16_t x5660 = INT16_MIN;

	t91 = (x5657^((x5658<<x5659)/x5660));

	if (t91 != 11144) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x5665 = INT8_MIN;
	uint16_t x5666 = UINT16_MAX;
	int8_t x5667 = 1;
	static int64_t x5668 = 3240423LL;
	int64_t t92 = 689759513356LL;

	t92 = (x5665^((x5666<<x5667)/x5668));

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5673 = INT64_MAX;
	uint32_t x5674 = UINT32_MAX;
	uint16_t x5675 = 23U;
	static volatile int32_t x5676 = INT32_MIN;
	volatile int64_t t93 = 240736LL;

	t93 = (x5673^((x5674<<x5675)/x5676));

	if (t93 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5697 = INT8_MAX;
	int16_t x5698 = INT16_MAX;
	volatile uint16_t x5699 = 1U;
	uint64_t x5700 = UINT64_MAX;
	uint64_t t94 = 4269084737LLU;

	t94 = (x5697^((x5698<<x5699)/x5700));

	if (t94 != 127LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5701 = -1;
	uint64_t x5702 = 2085022177559151165LLU;
	int8_t x5703 = 31;

	t95 = (x5701^((x5702<<x5703)/x5704));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5741 = -1309LL;
	uint16_t x5742 = UINT16_MAX;
	int16_t x5744 = -1;
	int64_t t96 = 1LL;

	t96 = (x5741^((x5742<<x5743)/x5744));

	if (t96 != 134214371LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x5757 = 542LL;
	uint8_t x5758 = UINT8_MAX;
	static uint8_t x5759 = 3U;
	int64_t x5760 = INT64_MAX;
	int64_t t97 = -985984956937LL;

	t97 = (x5757^((x5758<<x5759)/x5760));

	if (t97 != 542LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5773 = 4U;
	uint16_t x5775 = 8U;
	uint32_t x5776 = 106U;
	static int64_t t98 = 2LL;

	t98 = (x5773^((x5774<<x5775)/x5776));

	if (t98 != 3928000976LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5829 = 420709719;
	int16_t x5830 = 5;
	uint8_t x5831 = 3U;
	volatile int64_t x5832 = -1LL;
	int64_t t99 = -2879977676370LL;

	t99 = (x5829^((x5830<<x5831)/x5832));

	if (t99 != -420709745LL) { NG(); } else { ; }
	
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

