#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x248 = 29U;
int16_t x255 = 0;
static uint32_t x321 = UINT32_MAX;
uint16_t x324 = UINT16_MAX;
uint64_t x328 = UINT64_MAX;
uint16_t x502 = 1U;
int16_t x503 = INT16_MIN;
static int32_t t5 = 672156388;
int32_t x571 = INT32_MAX;
int8_t x703 = INT8_MIN;
int8_t x704 = INT8_MAX;
volatile int32_t t8 = 1204;
uint8_t x742 = 0U;
volatile int64_t t9 = -15320983816LL;
int8_t x842 = 1;
volatile int16_t x843 = -1;
uint8_t x844 = UINT8_MAX;
static int8_t x942 = 2;
static uint8_t x1225 = 30U;
uint16_t x1249 = 112U;
int8_t x1251 = -1;
uint8_t x1414 = 2U;
uint16_t x1519 = 264U;
int16_t x1683 = INT16_MIN;
int64_t t22 = -5049985065474098LL;
uint64_t t25 = 143289469313LLU;
volatile int64_t x1836 = -490923146903LL;
volatile int64_t t26 = -1631LL;
uint16_t x1945 = 9U;
uint32_t t28 = 3441U;
int32_t x2012 = -1;
uint32_t x2054 = 18U;
volatile uint8_t x2102 = 2U;
int64_t t32 = 1690888427665LL;
static int16_t x2173 = INT16_MAX;
static int16_t x2176 = -1;
static uint64_t x2181 = 3167511913LLU;
uint8_t x2182 = 1U;
static uint64_t x2277 = 199LLU;
int32_t x2279 = INT32_MAX;
int64_t x2301 = INT64_MAX;
uint8_t x2303 = 26U;
static uint16_t x2553 = 13653U;
volatile uint16_t x2554 = 15U;
uint64_t t40 = 3937174LLU;
static int16_t x2852 = INT16_MIN;
uint16_t x2991 = 1605U;
volatile int32_t t47 = 214112;
volatile uint8_t x3058 = 24U;
int8_t x3060 = INT8_MAX;
int32_t x3149 = 1;
int8_t x3170 = 2;
static uint32_t x3271 = 10141U;
static uint32_t t54 = 657622U;
uint32_t x3625 = 895498606U;
volatile uint8_t x3713 = 7U;
int16_t x3838 = 0;
static volatile uint64_t t62 = 202LLU;
volatile uint8_t x3917 = 18U;
uint16_t x3919 = 52U;
static int8_t x4019 = INT8_MIN;
uint16_t x4087 = 27649U;
static volatile int64_t t70 = 2622449198164532LL;
int64_t x4214 = 0LL;
int8_t x4338 = 0;
uint16_t x4339 = UINT16_MAX;
int64_t x4441 = 131189731LL;
uint32_t t75 = 154U;
uint16_t x4665 = UINT16_MAX;
uint8_t x4666 = 1U;
volatile int32_t t76 = -4798838;
int64_t x4677 = INT64_MAX;
int64_t x4724 = INT64_MIN;
static volatile int64_t t78 = 113LL;
volatile uint64_t x4757 = 16180518519LLU;
static int8_t x4787 = INT8_MAX;
volatile int16_t x4803 = -1;
static int8_t x4851 = INT8_MAX;
volatile int64_t x4863 = 73271LL;
int32_t x4959 = INT32_MIN;
static volatile int64_t t85 = -7402685054LL;
static volatile uint32_t x5109 = 4059U;
uint64_t t87 = 343LLU;
int64_t t89 = -3LL;
int16_t x5280 = INT16_MIN;
static volatile int16_t x5364 = INT16_MIN;
volatile int64_t x5449 = INT64_MAX;
static volatile int64_t t92 = -199836555832924134LL;
uint16_t x5462 = 10U;
uint16_t x5509 = UINT16_MAX;
int32_t x5512 = INT32_MAX;
volatile int64_t t94 = -886681LL;
static int8_t x5677 = 7;
int8_t x5680 = -6;
volatile int8_t x5798 = 1;
uint16_t x5800 = 1U;
int8_t x5808 = INT8_MAX;
int32_t t99 = -128;


void f0(void) {
	uint8_t x233 = UINT8_MAX;
	uint16_t x234 = 3U;
	volatile int32_t x235 = 12;
	uint64_t x236 = 2658432080LLU;
	volatile uint64_t t0 = 7226197LLU;

	t0 = ((x233>>x234)^(x235^x236));

	if (t0 != 2658432067LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x245 = 25;
	int8_t x246 = 0;
	int16_t x247 = INT16_MIN;
	int32_t t1 = 178020;

	t1 = ((x245>>x246)^(x247^x248));

	if (t1 != -32764) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x253 = 11474U;
	uint8_t x254 = 0U;
	int8_t x256 = -1;
	int32_t t2 = 9248592;

	t2 = ((x253>>x254)^(x255^x256));

	if (t2 != -11475) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x322 = 0;
	int64_t x323 = -5334LL;
	int64_t t3 = -14LL;

	t3 = ((x321>>x322)^(x323^x324));

	if (t3 != -4294907094LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x325 = 14U;
	static uint16_t x326 = 1U;
	volatile uint64_t x327 = 259169676009LLU;
	static volatile uint64_t t4 = 324239014701588LLU;

	t4 = ((x325>>x326)^(x327^x328));

	if (t4 != 18446743814539875601LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x501 = UINT8_MAX;
	static int16_t x504 = INT16_MIN;

	t5 = ((x501>>x502)^(x503^x504));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x529 = 729043LLU;
	volatile int8_t x530 = 57;
	volatile int8_t x531 = -1;
	static volatile int32_t x532 = INT32_MIN;
	static uint64_t t6 = 145775920929695919LLU;

	t6 = ((x529>>x530)^(x531^x532));

	if (t6 != 2147483647LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x569 = UINT64_MAX;
	uint64_t x570 = 7LLU;
	int8_t x572 = -5;
	uint64_t t7 = 14LLU;

	t7 = ((x569>>x570)^(x571^x572));

	if (t7 != 18302628887781179387LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x701 = 2684936;
	uint8_t x702 = 1U;

	t8 = ((x701>>x702)^(x703^x704));

	if (t8 != -1342469) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x741 = 44;
	int64_t x743 = -1LL;
	int32_t x744 = INT32_MIN;

	t9 = ((x741>>x742)^(x743^x744));

	if (t9 != 2147483603LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x753 = 6U;
	int8_t x754 = 2;
	uint32_t x755 = 357070462U;
	uint64_t x756 = 5135LLU;
	uint64_t t10 = 1LLU;

	t10 = ((x753>>x754)^(x755^x756));

	if (t10 != 357065328LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x773 = 1039758387035162613LLU;
	int64_t x774 = 6LL;
	uint32_t x775 = 6571U;
	static int32_t x776 = INT32_MIN;
	static uint64_t t11 = 13LLU;

	t11 = ((x773>>x774)^(x775^x776));

	if (t11 != 16246222649934516LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x841 = 2680;
	volatile int32_t t12 = 0;

	t12 = ((x841>>x842)^(x843^x844));

	if (t12 != -1476) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x941 = INT8_MAX;
	volatile int16_t x943 = -1;
	volatile uint8_t x944 = UINT8_MAX;
	volatile int32_t t13 = 710729696;

	t13 = ((x941>>x942)^(x943^x944));

	if (t13 != -225) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x1109 = UINT8_MAX;
	static int8_t x1110 = 1;
	uint64_t x1111 = UINT64_MAX;
	int8_t x1112 = INT8_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x1109>>x1110)^(x1111^x1112));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1117 = 2U;
	int8_t x1118 = 28;
	volatile uint32_t x1119 = 1313505U;
	static uint8_t x1120 = 40U;
	volatile uint32_t t15 = 3U;

	t15 = ((x1117>>x1118)^(x1119^x1120));

	if (t15 != 1313481U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1165 = 34U;
	uint8_t x1166 = 5U;
	uint32_t x1167 = 3453U;
	static int16_t x1168 = INT16_MAX;
	uint32_t t16 = 6U;

	t16 = ((x1165>>x1166)^(x1167^x1168));

	if (t16 != 29315U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x1226 = 1U;
	static uint64_t x1227 = UINT64_MAX;
	int32_t x1228 = -1;
	uint64_t t17 = 166340LLU;

	t17 = ((x1225>>x1226)^(x1227^x1228));

	if (t17 != 15LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1250 = 1;
	volatile int32_t x1252 = INT32_MIN;
	int32_t t18 = 332356742;

	t18 = ((x1249>>x1250)^(x1251^x1252));

	if (t18 != 2147483591) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1385 = 171543857967484LLU;
	volatile uint32_t x1386 = 30U;
	int32_t x1387 = -1;
	int64_t x1388 = INT64_MAX;
	uint64_t t19 = 53905135544071271LLU;

	t19 = ((x1385>>x1386)^(x1387^x1388));

	if (t19 != 9223372036854935570LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1413 = INT8_MAX;
	int64_t x1415 = INT64_MAX;
	int8_t x1416 = INT8_MAX;
	int64_t t20 = -65164133039414LL;

	t20 = ((x1413>>x1414)^(x1415^x1416));

	if (t20 != 9223372036854775711LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1517 = 11652850U;
	int8_t x1518 = 0;
	static int8_t x1520 = 43;
	static volatile uint32_t t21 = 718649718U;

	t21 = ((x1517>>x1518)^(x1519^x1520));

	if (t21 != 11653073U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1681 = 120U;
	uint16_t x1682 = 1U;
	volatile int64_t x1684 = -1LL;

	t22 = ((x1681>>x1682)^(x1683^x1684));

	if (t22 != 32707LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1697 = 3U;
	int8_t x1698 = 28;
	uint32_t x1699 = UINT32_MAX;
	volatile int64_t x1700 = -4611585265468096006LL;
	volatile int64_t t23 = -907LL;

	t23 = ((x1697>>x1698)^(x1699^x1700));

	if (t23 != -4611585264406053371LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1729 = 23579174603626572LLU;
	static uint8_t x1730 = 0U;
	static int8_t x1731 = -1;
	int16_t x1732 = INT16_MAX;
	volatile uint64_t t24 = 8707LLU;

	t24 = ((x1729>>x1730)^(x1731^x1732));

	if (t24 != 18423164899105904716LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1817 = 462685LLU;
	uint8_t x1818 = 3U;
	int8_t x1819 = INT8_MAX;
	volatile uint8_t x1820 = 15U;

	t25 = ((x1817>>x1818)^(x1819^x1820));

	if (t25 != 57755LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1833 = INT32_MAX;
	uint8_t x1834 = 3U;
	int8_t x1835 = -12;

	t26 = ((x1833>>x1834)^(x1835^x1836));

	if (t26 != 490745315682LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1889 = 648816;
	static uint8_t x1890 = 1U;
	static int16_t x1891 = -169;
	volatile int64_t x1892 = 373792019967LL;
	volatile int64_t t27 = 62106125LL;

	t27 = ((x1889>>x1890)^(x1891^x1892));

	if (t27 != -373791745648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1946 = 0;
	volatile uint32_t x1947 = 32268U;
	int32_t x1948 = INT32_MAX;

	t28 = ((x1945>>x1946)^(x1947^x1948));

	if (t28 != 2147451386U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2009 = INT32_MAX;
	int16_t x2010 = 6;
	int64_t x2011 = 1LL;
	volatile int64_t t29 = 430641LL;

	t29 = ((x2009>>x2010)^(x2011^x2012));

	if (t29 != -33554431LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x2045 = INT32_MAX;
	volatile uint8_t x2046 = 1U;
	int64_t x2047 = INT64_MIN;
	int64_t x2048 = 714987659657LL;
	int64_t t30 = 456363396LL;

	t30 = ((x2045>>x2046)^(x2047^x2048));

	if (t30 != -9223371322692067722LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x2053 = INT64_MAX;
	volatile uint64_t x2055 = UINT64_MAX;
	volatile uint32_t x2056 = UINT32_MAX;
	static uint64_t t31 = 22748608182LLU;

	t31 = ((x2053>>x2054)^(x2055^x2056));

	if (t31 != 18446708893632430079LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x2101 = 183461;
	uint32_t x2103 = 1U;
	int64_t x2104 = INT64_MAX;

	t32 = ((x2101>>x2102)^(x2103^x2104));

	if (t32 != 9223372036854729943LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x2174 = 5U;
	static volatile uint32_t x2175 = UINT32_MAX;
	volatile uint32_t t33 = 179187U;

	t33 = ((x2173>>x2174)^(x2175^x2176));

	if (t33 != 1023U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2183 = 0U;
	int8_t x2184 = -2;
	volatile uint64_t t34 = 108LLU;

	t34 = ((x2181>>x2182)^(x2183^x2184));

	if (t34 != 18446744072125795658LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2278 = 12U;
	volatile int8_t x2280 = INT8_MIN;
	static uint64_t t35 = 39LLU;

	t35 = ((x2277>>x2278)^(x2279^x2280));

	if (t35 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x2302 = 1U;
	int16_t x2304 = INT16_MIN;
	int64_t t36 = 858358324LL;

	t36 = ((x2301>>x2302)^(x2303^x2304));

	if (t36 != -4611686018427355163LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x2555 = 14U;
	volatile int64_t x2556 = -1LL;
	static volatile int64_t t37 = 45LL;

	t37 = ((x2553>>x2554)^(x2555^x2556));

	if (t37 != -15LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2601 = 78U;
	uint8_t x2602 = 24U;
	static int8_t x2603 = INT8_MIN;
	int16_t x2604 = INT16_MIN;
	int32_t t38 = -7041315;

	t38 = ((x2601>>x2602)^(x2603^x2604));

	if (t38 != 32640) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2625 = 0;
	uint16_t x2626 = 0U;
	volatile uint8_t x2627 = UINT8_MAX;
	static int8_t x2628 = INT8_MAX;
	volatile int32_t t39 = -2846501;

	t39 = ((x2625>>x2626)^(x2627^x2628));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2629 = UINT64_MAX;
	uint32_t x2630 = 1U;
	int8_t x2631 = 1;
	volatile int64_t x2632 = -1LL;

	t40 = ((x2629>>x2630)^(x2631^x2632));

	if (t40 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2633 = 1685U;
	static uint16_t x2634 = 1U;
	static int64_t x2635 = INT64_MIN;
	int16_t x2636 = INT16_MAX;
	int64_t t41 = 85188896217LL;

	t41 = ((x2633>>x2634)^(x2635^x2636));

	if (t41 != -9223372036854743883LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2697 = 1U;
	static int8_t x2698 = 1;
	uint32_t x2699 = 643U;
	int64_t x2700 = -1LL;
	int64_t t42 = 1782711LL;

	t42 = ((x2697>>x2698)^(x2699^x2700));

	if (t42 != -644LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x2749 = UINT64_MAX;
	uint16_t x2750 = 1U;
	uint16_t x2751 = UINT16_MAX;
	static uint64_t x2752 = 389369142LLU;
	uint64_t t43 = 160927934357862LLU;

	t43 = ((x2749>>x2750)^(x2751^x2752));

	if (t43 != 9223372036465380662LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2849 = 3U;
	uint16_t x2850 = 5U;
	static int16_t x2851 = INT16_MAX;
	int32_t t44 = -268748532;

	t44 = ((x2849>>x2850)^(x2851^x2852));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2893 = 125309273U;
	uint64_t x2894 = 4LLU;
	int32_t x2895 = INT32_MIN;
	int16_t x2896 = INT16_MIN;
	volatile uint32_t t45 = 27U;

	t45 = ((x2893>>x2894)^(x2895^x2896));

	if (t45 != 2139619605U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2989 = INT8_MAX;
	int16_t x2990 = 0;
	int16_t x2992 = 7;
	volatile int32_t t46 = -185720816;

	t46 = ((x2989>>x2990)^(x2991^x2992));

	if (t46 != 1597) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3037 = 6U;
	uint8_t x3038 = 28U;
	static uint16_t x3039 = UINT16_MAX;
	uint8_t x3040 = 13U;

	t47 = ((x3037>>x3038)^(x3039^x3040));

	if (t47 != 65522) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x3057 = 3350622772736LL;
	int32_t x3059 = -1;
	static volatile int64_t t48 = 3021755070751287829LL;

	t48 = ((x3057>>x3058)^(x3059^x3060));

	if (t48 != -199776LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3097 = UINT64_MAX;
	static int8_t x3098 = 2;
	static int64_t x3099 = -1LL;
	int16_t x3100 = INT16_MIN;
	volatile uint64_t t49 = 379125581296450LLU;

	t49 = ((x3097>>x3098)^(x3099^x3100));

	if (t49 != 4611686018427355136LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3109 = INT8_MAX;
	int32_t x3110 = 0;
	int16_t x3111 = INT16_MAX;
	int64_t x3112 = INT64_MAX;
	int64_t t50 = 26LL;

	t50 = ((x3109>>x3110)^(x3111^x3112));

	if (t50 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3150 = 24LLU;
	uint32_t x3151 = 9U;
	int8_t x3152 = INT8_MAX;
	uint32_t t51 = 524900419U;

	t51 = ((x3149>>x3150)^(x3151^x3152));

	if (t51 != 118U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x3169 = 4784;
	static int16_t x3171 = 388;
	volatile int32_t x3172 = -616722174;
	volatile int32_t t52 = 3529190;

	t52 = ((x3169>>x3170)^(x3171^x3172));

	if (t52 != -616721366) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x3253 = INT8_MAX;
	uint8_t x3254 = 3U;
	int64_t x3255 = INT64_MAX;
	uint64_t x3256 = UINT64_MAX;
	uint64_t t53 = 61555LLU;

	t53 = ((x3253>>x3254)^(x3255^x3256));

	if (t53 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3269 = UINT16_MAX;
	static int32_t x3270 = 1;
	uint16_t x3272 = 386U;

	t54 = ((x3269>>x3270)^(x3271^x3272));

	if (t54 != 23008U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3297 = 7U;
	uint8_t x3298 = 5U;
	int64_t x3299 = -120727137LL;
	static uint32_t x3300 = 1012187U;
	int64_t t55 = -102815973604039LL;

	t55 = ((x3297>>x3298)^(x3299^x3300));

	if (t55 != -121460668LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x3305 = 1;
	uint16_t x3306 = 0U;
	uint8_t x3307 = UINT8_MAX;
	static int64_t x3308 = INT64_MIN;
	volatile int64_t t56 = -1LL;

	t56 = ((x3305>>x3306)^(x3307^x3308));

	if (t56 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3626 = 0U;
	int16_t x3627 = INT16_MAX;
	volatile int32_t x3628 = -1;
	static volatile uint32_t t57 = 14U;

	t57 = ((x3625>>x3626)^(x3627^x3628));

	if (t57 != 3399465326U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3701 = UINT8_MAX;
	uint32_t x3702 = 1U;
	volatile uint32_t x3703 = 0U;
	int16_t x3704 = INT16_MIN;
	volatile uint32_t t58 = 91U;

	t58 = ((x3701>>x3702)^(x3703^x3704));

	if (t58 != 4294934655U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3714 = 1U;
	volatile int64_t x3715 = -232567LL;
	static int32_t x3716 = -1;
	int64_t t59 = 1687703883567LL;

	t59 = ((x3713>>x3714)^(x3715^x3716));

	if (t59 != 232565LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3821 = INT16_MAX;
	volatile uint16_t x3822 = 8U;
	static int8_t x3823 = INT8_MIN;
	volatile int8_t x3824 = INT8_MAX;
	static int32_t t60 = 541;

	t60 = ((x3821>>x3822)^(x3823^x3824));

	if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3825 = 364477LL;
	int8_t x3826 = 3;
	volatile int16_t x3827 = -933;
	static volatile int32_t x3828 = INT32_MIN;
	static volatile int64_t t61 = 35640159925592LL;

	t61 = ((x3825>>x3826)^(x3827^x3828));

	if (t61 != 2147437996LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3837 = 49959684105LLU;
	static int64_t x3839 = -84LL;
	int32_t x3840 = 10267574;

	t62 = ((x3837>>x3838)^(x3839^x3840));

	if (t62 != 18446744023759002643LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3918 = 0U;
	int32_t x3920 = INT32_MIN;
	int32_t t63 = 532;

	t63 = ((x3917>>x3918)^(x3919^x3920));

	if (t63 != -2147483610) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3937 = 73U;
	static uint32_t x3938 = 2U;
	volatile int64_t x3939 = 365222182LL;
	volatile uint16_t x3940 = 463U;
	int64_t t64 = -4862282029362023LL;

	t64 = ((x3937>>x3938)^(x3939^x3940));

	if (t64 != 365222139LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x3981 = 20534LLU;
	int64_t x3982 = 24LL;
	volatile int32_t x3983 = INT32_MAX;
	int16_t x3984 = -1;
	volatile uint64_t t65 = 7269058LLU;

	t65 = ((x3981>>x3982)^(x3983^x3984));

	if (t65 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4017 = 0;
	volatile uint32_t x4018 = 1U;
	uint16_t x4020 = UINT16_MAX;
	static int32_t t66 = 3;

	t66 = ((x4017>>x4018)^(x4019^x4020));

	if (t66 != -65409) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x4069 = 7548626U;
	uint8_t x4070 = 1U;
	int32_t x4071 = INT32_MIN;
	uint8_t x4072 = 14U;
	uint32_t t67 = 178761721U;

	t67 = ((x4069>>x4070)^(x4071^x4072));

	if (t67 != 2151257959U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4085 = 244;
	uint8_t x4086 = 6U;
	int64_t x4088 = INT64_MIN;
	volatile int64_t t68 = -58253972317275545LL;

	t68 = ((x4085>>x4086)^(x4087^x4088));

	if (t68 != -9223372036854748158LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4121 = INT16_MAX;
	uint8_t x4122 = 13U;
	uint16_t x4123 = UINT16_MAX;
	int64_t x4124 = -1LL;
	static int64_t t69 = -68LL;

	t69 = ((x4121>>x4122)^(x4123^x4124));

	if (t69 != -65533LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4157 = INT64_MAX;
	int8_t x4158 = 20;
	static uint8_t x4159 = 2U;
	volatile int16_t x4160 = 6546;

	t70 = ((x4157>>x4158)^(x4159^x4160));

	if (t70 != 8796093015663LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4213 = 3U;
	static int32_t x4215 = INT32_MAX;
	uint32_t x4216 = UINT32_MAX;
	static uint32_t t71 = 249306795U;

	t71 = ((x4213>>x4214)^(x4215^x4216));

	if (t71 != 2147483651U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4289 = 220LLU;
	int64_t x4290 = 6LL;
	uint32_t x4291 = UINT32_MAX;
	uint32_t x4292 = 14409U;
	uint64_t t72 = 23954020LLU;

	t72 = ((x4289>>x4290)^(x4291^x4292));

	if (t72 != 4294952885LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x4337 = INT64_MAX;
	volatile int64_t x4340 = INT64_MIN;
	static volatile int64_t t73 = 38434322LL;

	t73 = ((x4337>>x4338)^(x4339^x4340));

	if (t73 != -65536LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4442 = 15U;
	int64_t x4443 = 32252LL;
	volatile int16_t x4444 = INT16_MIN;
	volatile int64_t t74 = -14LL;

	t74 = ((x4441>>x4442)^(x4443^x4444));

	if (t74 != -3489LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4485 = 1U;
	int8_t x4486 = 1;
	uint32_t x4487 = 2685247U;
	int16_t x4488 = -6;

	t75 = ((x4485>>x4486)^(x4487^x4488));

	if (t75 != 4292282053U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4667 = 7U;
	uint8_t x4668 = 0U;

	t76 = ((x4665>>x4666)^(x4667^x4668));

	if (t76 != 32760) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4678 = 4U;
	uint64_t x4679 = 100845LLU;
	int8_t x4680 = INT8_MIN;
	uint64_t t77 = 14100LLU;

	t77 = ((x4677>>x4678)^(x4679^x4680));

	if (t77 != 17870283321406228882LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4721 = INT32_MAX;
	uint8_t x4722 = 10U;
	static uint32_t x4723 = UINT32_MAX;

	t78 = ((x4721>>x4722)^(x4723^x4724));

	if (t78 != -9223372032561905664LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4758 = 0;
	uint16_t x4759 = 1853U;
	int8_t x4760 = -1;
	static volatile uint64_t t79 = 4509883950649892496LLU;

	t79 = ((x4757>>x4758)^(x4759^x4760));

	if (t79 != 18446744057529034421LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4785 = INT64_MAX;
	int8_t x4786 = 0;
	int64_t x4788 = INT64_MAX;
	volatile int64_t t80 = 1190019LL;

	t80 = ((x4785>>x4786)^(x4787^x4788));

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4801 = UINT16_MAX;
	uint16_t x4802 = 0U;
	static volatile int64_t x4804 = INT64_MIN;
	int64_t t81 = -48987987486208742LL;

	t81 = ((x4801>>x4802)^(x4803^x4804));

	if (t81 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4849 = 0;
	int8_t x4850 = 21;
	int32_t x4852 = -1;
	volatile int32_t t82 = 1263381;

	t82 = ((x4849>>x4850)^(x4851^x4852));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4861 = 395532309363512890LL;
	uint8_t x4862 = 0U;
	int8_t x4864 = 4;
	static volatile int64_t t83 = -261597344403038LL;

	t83 = ((x4861>>x4862)^(x4863^x4864));

	if (t83 != 395532309363443721LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4957 = 1;
	uint32_t x4958 = 3U;
	static uint32_t x4960 = UINT32_MAX;
	volatile uint32_t t84 = 10U;

	t84 = ((x4957>>x4958)^(x4959^x4960));

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5057 = INT64_MAX;
	volatile int8_t x5058 = 24;
	int8_t x5059 = -1;
	int16_t x5060 = INT16_MIN;

	t85 = ((x5057>>x5058)^(x5059^x5060));

	if (t85 != 549755781120LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x5105 = 160447805773116LL;
	static uint8_t x5106 = 1U;
	static int16_t x5107 = 540;
	int64_t x5108 = INT64_MIN;
	int64_t t86 = 218636158627LL;

	t86 = ((x5105>>x5106)^(x5107^x5108));

	if (t86 != -9223291812951889790LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5110 = 1;
	static int8_t x5111 = 5;
	volatile uint64_t x5112 = 4569LLU;

	t87 = ((x5109>>x5110)^(x5111^x5112));

	if (t87 != 5681LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5133 = 4U;
	uint16_t x5134 = 3U;
	int8_t x5135 = INT8_MAX;
	static volatile int64_t x5136 = INT64_MIN;
	int64_t t88 = 0LL;

	t88 = ((x5133>>x5134)^(x5135^x5136));

	if (t88 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5221 = 26739U;
	static uint8_t x5222 = 1U;
	int16_t x5223 = 110;
	int64_t x5224 = INT64_MAX;

	t89 = ((x5221>>x5222)^(x5223^x5224));

	if (t89 != 9223372036854762408LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x5277 = UINT32_MAX;
	static volatile uint16_t x5278 = 2U;
	uint16_t x5279 = 54U;
	uint32_t t90 = 968U;

	t90 = ((x5277>>x5278)^(x5279^x5280));

	if (t90 != 3221258185U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5361 = UINT16_MAX;
	uint8_t x5362 = 5U;
	int32_t x5363 = INT32_MAX;
	int32_t t91 = 6219475;

	t91 = ((x5361>>x5362)^(x5363^x5364));

	if (t91 != -2147452928) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5450 = 26U;
	int16_t x5451 = INT16_MIN;
	int32_t x5452 = -1;

	t92 = ((x5449>>x5450)^(x5451^x5452));

	if (t92 != 137438920704LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5461 = INT64_MAX;
	int8_t x5463 = INT8_MIN;
	uint32_t x5464 = UINT32_MAX;
	volatile int64_t t93 = -140759154913040LL;

	t93 = ((x5461>>x5462)^(x5463^x5464));

	if (t93 != 9007199254740864LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5510 = 3U;
	int64_t x5511 = INT64_MAX;

	t94 = ((x5509>>x5510)^(x5511^x5512));

	if (t94 != 9223372034707300351LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5609 = 3;
	int16_t x5610 = 1;
	static int32_t x5611 = INT32_MIN;
	uint16_t x5612 = 21U;
	int32_t t95 = 888289;

	t95 = ((x5609>>x5610)^(x5611^x5612));

	if (t95 != -2147483628) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5678 = 0U;
	int64_t x5679 = 1LL;
	int64_t t96 = -505582LL;

	t96 = ((x5677>>x5678)^(x5679^x5680));

	if (t96 != -4LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5721 = INT32_MAX;
	static int32_t x5722 = 1;
	int8_t x5723 = INT8_MAX;
	int8_t x5724 = INT8_MIN;
	int32_t t97 = -3804546;

	t97 = ((x5721>>x5722)^(x5723^x5724));

	if (t97 != -1073741824) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5797 = 21U;
	static int32_t x5799 = 11032800;
	volatile int32_t t98 = -1001640712;

	t98 = ((x5797>>x5798)^(x5799^x5800));

	if (t98 != 11032811) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5805 = 91U;
	static int32_t x5806 = 0;
	int16_t x5807 = -8;

	t99 = ((x5805>>x5806)^(x5807^x5808));

	if (t99 != -36) { NG(); } else { ; }
	
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

